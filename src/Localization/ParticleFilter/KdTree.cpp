//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//                                                                          *
// This file is inspired by the library kdtree writed by John Tsiombikas    *
// (Copyright (C) 2007-2009), with the following modifications:             *
// creation of C++ class structure, add data structure and definition, add  *
// data extraction methods (Knn and Closest node extraction) integrating    *
// the data return, dune style adaptation                                   *
//                                                                          *
//***************************************************************************
// Author: Frederic Leishman                                                *
//***************************************************************************

#include <DUNE/DUNE.hpp>
#include <DUNE/Math.hpp>

#include <Localization/ParticleFilter/KdTree.hpp>

namespace Localization
{
    namespace ParticleFilter
    {

        #define MAX_SIZE_BUFFER 100000


        // Constructor - Destructor

        //! Constructor (k-dimensional data)
        KdTree::KdTree(int k)
        {
            // Tree structure allocation
            if(!(tree = (kdtree*)malloc(sizeof *tree)))
            {
                return;
            }

            tree->dim = k;
            tree->ndata = 1;
            tree->root = 0;
            tree->destr = 0;

            // Result data allocation
            dataset = (double**)malloc(MAX_SIZE_BUFFER * sizeof(*dataset));
            for(int i = 0; i < MAX_SIZE_BUFFER; i++)
            {
                dataset[i] = (double*)malloc((k+1)*sizeof(*dataset[i]));
            }

            data_closest = (double*)malloc( (tree->dim+tree->ndata)*sizeof(double));
            num_dataset = 0;

            // Maximal range for Knn
            range_search = 0;

            // Temp data allocation
            rpos = (double*)malloc(tree->dim*sizeof *rpos);
            rdata = (double*)malloc(tree->ndata*sizeof *rdata);

            node_closest = (kdnode*)malloc(sizeof *node_closest);
            node_explore = (kdnode*)malloc(sizeof *node_explore);
        }

        //! Destructor
        KdTree::~KdTree()
        {
            Free();
        }


        // Cleaning methods

        //! Free the tree structure
        void
        KdTree::Free()
        {
            if(tree)
            {
                Clear();
                free(tree);
            }
        }

        //! Remove all elements from the tree
        void
        KdTree::Clear()
        {
            ClearNode(tree->root, tree->destr);
            tree->root = 0;
        }


        // Insertion methods

        //! Insert data
        int
        KdTree::Insert(double *pos, double *data)
        {
            return InsertNode(&tree->root, pos, data, 0, NULL);
        }

        //! Insert data (2d-Tree specified)
        int
        KdTree::Insert2(double x, double y, double data)
        {
            double buf_pos[2];
            buf_pos[0] = x;
            buf_pos[1] = y;
            double buf_data[1];
            buf_data[0] = data;
            return Insert(buf_pos, buf_data);
        }

        //! Insert data (3d-Tree specified)
        int
        KdTree::Insert3(double x, double y, double z, double data)
        {
            double buf_pos[3];
            buf_pos[0] = x;
            buf_pos[1] = y;
            buf_pos[2] = z;
            double buf_data[1];
            buf_data[0] = data;
            return Insert(buf_pos, buf_data);
        }


        // Get the K Nearest Neightbors

        //! Get the K Nearest Neightbors around a position with a range
        double**
        KdTree::GetKNearestNeightbors(double *pos, double range)
        {
            if(NearestRange(pos, range)==1)
            {
                num_dataset = rset->size;
                return GetDataSet();
            }

            return NULL;
        }

        //! Get the K Nearest Neightbors around a position with a range (2d-Tree specified)
        double**
        KdTree::GetKNearestNeightbors2(double x, double y, double range)
        {
            double buf[2];
            buf[0] = x;
            buf[1] = y;
            return GetKNearestNeightbors(buf, range);
        }

        //! Get the K Nearest Neightbors around a position with a range (3d-Tree specified)
        double**
        KdTree::GetKNearestNeightbors3(double x, double y, double z, double range)
        {
            double buf[3];
            buf[0] = x;
            buf[1] = y;
            buf[2] = z;
            return GetKNearestNeightbors(buf, range);
        }

        //! Get the size of the subtree after Knn search
        int
        KdTree::GetKnnSize()
        {
            return num_dataset;
        }


        // Get the Closest Node inside the K nearest neightbors

        //! Get the Closest Node inside the KNN strategy from position and range
        double*
        KdTree::GetClosestKNN(double *pos, double range)
        {
            //Debug State
            //hresult = 0;

            if(NearestRange(pos, range)==1)
            {
                int num_pos=0;

                double sq_dist_min=range*range+1;
                double sq_dist_test=0;

                while(!EndRSet())
                {
                    //Debug State
                    //hresult++;

                    rdata = (double*)GetItem(rpos);

                    sq_dist_test = 0;
                    for(int i=0;i<tree->dim;i++)
                    {
                        sq_dist_test += (rpos[i]-pos[i])*(rpos[i]-pos[i]);
                    }

                    if(sq_dist_min>sq_dist_test)
                    {
                        sq_dist_min=sq_dist_test;

                        //hresult += 10000;
                        memcpy(data_closest, rpos, rset->tree->dim*sizeof(double));
                        memcpy(&data_closest[rset->tree->dim], rdata, rset->tree->ndata*sizeof(double));
                    }

                    num_pos++;

                    NextRSet();
                }

                //Clear the result set for the next search
                ClearRSet(rset);

                return data_closest;
            }

            return NULL;
        }

        //! Get the Closest Node inside the KNN strategy from position and range (2d-Tree specified)
        double*
        KdTree::GetClosestKNN2(double x, double y, double range)
        {
            double buf[2];
            buf[0] = x;
            buf[1] = y;
            return GetClosestKNN(buf, range);
        }

        //! Get the Closest Node inside the KNN strategy from position and range (3d-Tree specified)
        double*
        KdTree::GetClosestKNN3(double x, double y, double z, double range)
        {
            double buf[3];
            buf[0] = x;
            buf[1] = y;
            buf[2] = z;
            return GetClosestKNN(buf, range);
        }

        // Get the closest node from one position

        //! Get the closest node from position
        double*
        KdTree::GetClosestNode(double *pos)
        {
            // Initialisation debug state
            //hresult = 0;

            // First we find the position inside the tree
            if(SearchTreePosition(tree->root, pos)==1)
            {

                // The parent node of the position is stocked in node_closest
                // which is the actual closest node (here it's the approximated
                // standard method, but it's not necessary THE closest node)
                node_explore = node_closest;

                if(node_explore->parent == NULL)
                {
                    // Debug State
                    //hresult = -1;

                    // The root is selected as first node, the research is finished
                    // and it is returned (very rare but possible)
                    for(int i=0;i<tree->dim;i++)
                    {
                        data_closest[i]= node_closest->pos[i];
                    }

                    for(int i=0;i<tree->ndata;i++)
                    {
                        data_closest[tree->dim+i]= node_closest->data[i];
                    }

                    return data_closest;
                }

                if(TestHyperPlan(node_explore, node_closest, pos)==1)
                {

                    // Copy position and data of the closest node and return
                    for(int i=0;i<tree->dim;i++)
                    {
                        data_closest[i]= node_closest->pos[i];
                    }

                    for(int i=0;i<tree->ndata;i++)
                    {
                        data_closest[tree->dim+i]= node_closest->data[i];
                    }

                    return data_closest;
                }
            }

            // Debug State
            //hresult = -2;

            // Tree empty
            return NULL;
        }

        //! Get the closest node from position (2d-Tree specified)
        double*
        KdTree::GetClosestNode2(double x, double y)
        {
            double buf[2];
            buf[0] = x;
            buf[1] = y;
            return GetClosestNode(buf);
        }

        //! Get the closest node from position (3d-Tree specified)
        double*
        KdTree::GetClosestNode3(double x, double y, double z)
        {
            double buf[3];
            buf[0] = x;
            buf[1] = y;
            buf[2] = z;
            return GetClosestNode(buf);
        }


        // Get Node data from its position

        //! Get data and position after one search (using iterator)
        double*
        KdTree::GetItem(double *pos)
        {
            if(rset->riter)
            {
                if(pos)
                {
                    memcpy(pos, rset->riter->item->pos, rset->tree->dim * sizeof *pos);
                }
                return rset->riter->item->data;
            }
            return 0;
        }

        //! Get data and position after one search (2d-Tree specified)
        double*
        KdTree::GetItem2(double *x, double *y)
        {
            if(rset->riter)
            {
                if(*x) *x = rset->riter->item->pos[0];
                if(*y) *y = rset->riter->item->pos[1];
            }
            return 0;
        }

        //! Get data and position after one search (3d-Tree specified)
        double*
        KdTree::GetItem3(double *x, double *y, double *z)
        {
            if(rset->riter)
            {
                if(*x) *x = rset->riter->item->pos[0];
                if(*y) *y = rset->riter->item->pos[1];
                if(*z) *z = rset->riter->item->pos[2];
            }
            return 0;
        }


        // Methods of insertion and cleaning node

        //! Clear data
        void
        KdTree::ClearNode(struct kdnode *node, void (*destr)(void*))
        {
            if(!node) return;

            ClearNode(node->left, destr);
            ClearNode(node->right, destr);

            if(destr)
            {
                destr(node->data);
            }
            free(node->pos);
            free(node);
        }

        //! Insert data
        int
        KdTree::InsertNode(struct kdnode **nptr, double *pos, double *data, int dir, struct kdnode *parent)
        {
            int new_dir;
            struct kdnode *node;

            // The node is created if it doesn't exist
            if(!*nptr)
            {
                if(!(node = (kdnode*)malloc(sizeof *node)))
                {
                    return -1;
                }
                if(!(node->pos = (double*)malloc(tree->dim * sizeof *node->pos)))
                {
                    free(node);
                    return -1;
                }
                if(!(node->data = (double*)malloc(tree->ndata *sizeof *node->data)))
                {
                    free(node);
                    return -1;
                }

                memcpy(node->pos, pos, tree->dim * sizeof *node->pos);
                memcpy(node->data, data, tree->ndata * sizeof *node->data);
                node->dir = dir;
                node->left = node->right = 0;
                node->parent = parent;
                *nptr = node;
                return 0;
            }

            // Else the tree exploration continu by choosing the child node of the good side
            // of the hyperplan
            node = *nptr;
            new_dir = (node->dir + 1) % tree->dim;
            if(pos[node->dir] < node->pos[node->dir])
            {
                return InsertNode(&(*nptr)->left, pos, data, new_dir, node);
            }
            return InsertNode(&(*nptr)->right, pos, data, new_dir, node);
        }

        //! Add node in the list (if dist_sq>=0)
        int
        KdTree::InsertList(struct res_node *list, struct kdnode *item)
        {
            struct res_node *rnode;

            if(!(rnode = (res_node*)malloc(sizeof(struct res_node))))
            {
                return -1;
            }

            rnode->item = item;
            rnode->next = list->next;
            list->next = rnode;
            return 0;
        }


        // Methods of Knn extraction

        //! Search SubTree around one position and a range
        int
        KdTree::NearestRange(double *pos, double range)
        {
            range_search = range;

            // Initialisation of the result structure if it's not already done
            if(!(rset = (kdres*)malloc(sizeof *rset)))
            {
                return 0;
            }
            if(!(rset->rlist = (res_node*)malloc(sizeof(struct res_node))))
            {
                free(rset);
                return 0;
            }
            rset->rlist->next = 0;
            rset->tree = tree;

            // Find the nearest node and return the number of node in the result list
            int ret;
            if((ret = FindNearestNode(tree->root, pos, rset->rlist)) == -1)
            {
                FreeRSet();
                return 0;
            }
            rset->size = ret;
            RewindRSet();
            return 1;
        }

        //! Selection criteria state for node
        int
        KdTree::SelectionNode(struct kdnode *node, double *pos)
        {
            double dist_sq = 0;
            for(int i=0; i<tree->dim; i++)
            {
                dist_sq += (node->pos[i]-pos[i])*(node->pos[i]-pos[i]);
            }

            if(dist_sq < range_search*range_search) //square range
            {
                return 1;
            }

            return 0;
        }

        //! Find the Node nearest of one position (KNN method)
        int
        KdTree::FindNearestNode(struct kdnode *node, double *pos, struct res_node *list)
        {
            double dx;
            int ret, added_res = 0;

            // If node doens't exist
            if(!node) return 0;

            // Check if node is contained by hypersphere
            if(SelectionNode(node, pos))
            {
                if(InsertList(list, node) == -1)
                {
                    return -1;
                }
                added_res = 1;
            }

            // Exploration of the branch if it cut the hyperplan
            dx = pos[node->dir] - node->pos[node->dir];

            ret = FindNearestNode(dx <= 0.0 ? node->left : node->right, pos, list);
            if(ret >= 0 && fabs(dx) < range_search)
            {
                added_res += ret;
                ret = FindNearestNode(dx <= 0.0 ? node->right : node->left, pos, list);
            }

            if(ret == -1)
            {
                return -1;
            }
            added_res += ret;

            return added_res;
        }

        //! Return the node resulting of the closest and knn methods caracterized by {pos(0)->pos(k-1);data(0)->data(ndata-1)}
        double**
        KdTree::GetDataSet()
        {
            int num_pos=0;

            // While the list contains nodes, we continus the reading
            while(!EndRSet())
            {
                rdata = (double*)GetItem(rpos);

                memcpy(dataset[num_pos], rpos, rset->tree->dim*sizeof(double));
                memcpy(&dataset[num_pos][rset->tree->dim], rdata, rset->tree->ndata*sizeof(double));

                num_pos++;
                NextRSet();
            }
            num_dataset = num_pos;

            //Clear the result set for the next search
            ClearRSet(rset);

            return dataset;
        }


        // Method of Closest node extraction

        //! Search tree position from position (node parent is stocked in tmp_node)
        int
        KdTree::SearchTreePosition(struct kdnode *node, double *pos)
        {
            if(!node) {return -1;}

            // Debug state (count the number of node read)
            //hresult++;

            // The chosen node is of the good side of the hyperplan following the direction
            if(pos[node->dir] < node->pos[node->dir])
            {
                if(node->left!=0)
                {
                    return SearchTreePosition(node->left, pos);
                }
                else
                {
                    node_closest=node;
                    return 1;
                }
            }
            else
            {
                if(node->right!=0)
                {
                    return SearchTreePosition(node->right, pos);
                }
                else
                {
                    node_closest=node;
                    return 1;
                }
            }
        }

        //! Climbing the tree and check the hyperplan intersection for each node
        int
        KdTree::TestHyperPlan(struct kdnode *node_exploration, struct kdnode *node_selected, double *pos)
        {

            double sq_rayon_hypesphere = 0;
            double sq_dist_hyperplan = 0;

            // Square distance between selected node and the position
            for(int i=0;i<tree->dim;i++)
            {
                sq_rayon_hypesphere += (node_selected->pos[i]-pos[i])*(node_selected->pos[i]-pos[i]);
            }

            // Square distance between the position and the hyperplan
            sq_dist_hyperplan = (pos[node_exploration->parent->dir]-node_exploration->parent->pos[node_exploration->parent->dir])
                               *(pos[node_exploration->parent->dir]-node_exploration->parent->pos[node_exploration->parent->dir]);

            // Test intersection between hyperplan and hypersphere
            if(sq_dist_hyperplan>sq_rayon_hypesphere)
            {
                if(node_exploration->parent->parent == NULL)
                {
                    // If the grand parent of the exploration node is null that mean that we
                    // have tested the root node and the climbing is finished
                    return 1;
                }
                else
                {
                    // Else we climb and test the intersection between hypersphere and hyperplan
                    // with the parent node (climbing exploration)
                    return TestHyperPlan(node_exploration->parent, node_selected, pos);
                }
            }
            else
            {
                // Debug state
                //hresult += 10000;

                // If the hyperplan cut the hypersphere that's mean a node closer can exist,
                // we explore the branch and search if this node exist
                if(node_exploration->parent->right != 0)
                {
                    if(node_exploration->parent->left != 0)
                    {
                        if(node_exploration->parent->left == node_exploration)
                        {
                            // Right exploration if we climb by the left
                            ExploreBranch(node_exploration->parent->right, node_selected, pos);
                        }
                        else
                        {
                            // Left exploration if we climb by the right
                            ExploreBranch(node_exploration->parent->left, node_selected, pos);
                        }
                    }
                }


                // If all node of the explorated branch is check (found or not), we continu to climb
                // the tree until the root node

                // If the parent of the last branch exploration is the root, it's the end
                if(node_exploration->parent->parent == NULL)
                {
                    // If the grand parent of the exploration node is null that mean that we
                    // have tested the root node and the climbing is finished
                    return 1;
                }

                return TestHyperPlan(node_exploration->parent, node_selected, pos);
            }
        }

        //! Explore branch of the tree and test distances with position
        int
        KdTree::ExploreBranch(struct kdnode *node_exploration, struct kdnode *node_selected, double *pos)
        {
            // Distances control
            double sq_dist_exploration = 0;
            double sq_dist_selected = 0;

            double sq_dist_right = 0;
            double sq_dist_left = 0;

            // Debug State
            //hresult += 0.0001;

            for(int i=0;i<tree->dim;i++)
            {
                sq_dist_exploration += (node_exploration->pos[i]-pos[i])*(node_exploration->pos[i]-pos[i]);
                sq_dist_selected += (node_selected->pos[i]-pos[i])*(node_selected->pos[i]-pos[i]);

                if(node_exploration->right != 0)
                {
                    sq_dist_right = (node_exploration->right->pos[i]-pos[i])*(node_exploration->right->pos[i]-pos[i]);
                }
                else
                {
                    sq_dist_right = -1;
                }
                if(node_exploration->left != 0)
                {
                    sq_dist_left = (node_exploration->left->pos[i]-pos[i])*(node_exploration->left->pos[i]-pos[i]);
                }
                else
                {
                    sq_dist_left = -1;
                }
            }

            // If the exploration is closer than the selected node
            if(sq_dist_exploration<sq_dist_selected)
            {
                node_selected = node_exploration;
            }

            if(sq_dist_right != -1)
            {
                // If the right children exist
                if(sq_dist_left !=-1)
                {
                    if(sq_dist_left<sq_dist_right)
                    {
                        // The exploration continu on the left children if it exists and closest
                        return ExploreBranch(node_exploration->left, node_selected, pos);
                    }
                }
                else
                {
                    // Else the exploration continu with the right children
                    return ExploreBranch(node_exploration->right, node_selected, pos);
                }

            }
            else
            {
                if( sq_dist_left != -1)
                {
                    // The exploration continu with the left children if it is alone to exist
                    return ExploreBranch(node_exploration->left, node_selected, pos);
                }
            }

            // Branch is explorated, a leaf is reached
            return 1;
        }


        //Explore and clean methods of Rset structure

        //! Clear results set
        void
        KdTree::ClearRSet(struct kdres *set)
        {
            struct res_node *tmp = set->rlist->next;
            struct res_node *node = set->rlist->next;

            while(node)
            {
                tmp = node;
                node = node->next;
                free(tmp);
            }

            set->rlist->next = 0;
        }

        //! Free results set
        void
        KdTree::FreeRSet()
        {
            ClearRSet(rset);
            free(rset->rlist);
            free(rset);
        }

        //! Rewind results set
        void
        KdTree::RewindRSet()
        {
            rset->riter = rset->rlist->next;
        }

        //! Next results set
        int
        KdTree::NextRSet()
        {
            rset->riter = rset->riter->next;
            return rset->riter != 0;
        }

        //! End results set is reached
        int
        KdTree::EndRSet()
        {
            return rset->riter == 0;
        }
    }
}

