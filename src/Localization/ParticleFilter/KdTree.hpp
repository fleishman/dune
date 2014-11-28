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

#ifndef _KDTREE_HPP_INCLUDE_
#define _KDTREE_HPP_INCLUDE_

class KdTree
{
public:

// Constructor - Destructor

    //! Constructor (k-dimensional data)
    KdTree(int k);

    //! Destructor
    ~KdTree();


// Cleaning methods

    //! Free the tree structure
    void
    Free();

    //! Remove all elements from the tree
    void
    Clear();


// Insertion methods

    //! Insert data
    int
    Insert(double *pos, double *data);

    //! Insert data (2d-Tree specified)
    int
    Insert2(double x, double y, double data);

    //! Insert data (3d-Tree specified)
    int
    Insert3(double x, double y, double z, double data);


// Get the K nearest neightbors (approximate methode, minor branch can be missed)

    //! Get the K Nearest Neighbors around a position with a range
    double**
    GetKNearestNeightbors(double *pos, double range);

    //! Get the K Nearest Neighbors around a position with a range (2d-Tree specified)
    double**
    GetKNearestNeightbors2(double x, double y, double range);

    //! Get the K Nearest Neighbors around a position with a range (3d-Tree specified)
    double**
    GetKNearestNeightbors3(double x, double y, double z, double range);

    //! Get the size of the subtree after Knn search
    int
    GetKnnSize();


// Get the Closest Node inside the K nearest neightbors (approximate methode, minor branch can be missed)

    //! Get the Closest Node inside the KNN strategy from position and range
    double*
    GetClosestKNN(double *pos, double range);

    //! Get the Closest Node inside the KNN strategy from position and range (2d-Tree specified)
    double*
    GetClosestKNN2(double x, double y, double range);

    //! Get the Closest Node inside the KNN strategy from position and range (3d-Tree specified)
    double*
    GetClosestKNN3(double x, double y, double z, double range);


// Get the closest node from one position (Exact method, optimal algorithm)

    //! Get the closest node from position
    double*
    GetClosestNode(double *pos);

    //! Get the closest node from position (2d-Tree specified)
    double*
    GetClosestNode2(double x, double y);

    //! Get the closest node from position (3d-Tree specified)
    double*
    GetClosestNode3(double x, double y, double z);


// Get Node data from its position (find by exact position)

    //! Get data and position after one search (using iterator)
    double*
    GetItem(double *pos);

    //! Get data and position after one search (2d-Tree specified)
    double*
    GetItem2(double *x, double *y);

    //! Get data and position after one search (3d-Tree specified)
    double*
    GetItem3(double *x, double *y, double *z);


private:

    //! Data node structure
    struct kdnode
    {   
        struct kdnode *parent;
        struct kdnode *left;
        struct kdnode *right;

        int dir;
        double *pos;
        double *data;
    };

    //! Iterator node structure
    struct res_node
    {
        struct kdnode *item;
        struct res_node *next;
    };

    //! Tree structure
    struct kdtree
    {
        int dim;
        int ndata;

        struct kdnode *root;
        void (*destr)(void*);
    };

    //! Data result structure
    struct kdres
    {
        struct kdtree *tree;
        struct res_node *rlist;
        struct res_node *riter;
        int size;
    };

    //! Private Data
    kdtree *tree;
    kdres  *rset;

    kdnode *node_closest;
    kdnode *node_explore;

    double **dataset;
    int num_dataset;
    double range_search;

    double *data_closest;

    double *rpos;
    double *rdata;

/*
public:

    //! Debug state - Efficiency test
    double hresult;
*/

private:

// Methods of insertion and cleaning node

    //! Clear data
    void
    ClearNode(struct kdnode *node, void (*destr)(void*));

    //! Insert data
    int
    InsertNode(struct kdnode **node, double *pos, double *data, int dir, struct kdnode *parent);

    //! Add node in the list (if dist_sq>=0)
    int
    InsertList(struct res_node *list, struct kdnode *item);

// Methods of Knn extraction

    //! Search SubTree around one position and between two ranges
    int
    NearestRange(double *pos, double range);

    //! Selection criteria state for node
    int
    SelectionNode(struct kdnode *node, double *pos);

    //! Find the Node nearest of one position (KNN method)
    int
    FindNearestNode(struct kdnode *node, double *pos, struct res_node *list);

    //! Return the node resulting of the closest and knn methods caracterized by {pos(0)->pos(k-1);data(0)->data(ndata-1)}
    double**
    GetDataSet();

// Method of Closest node extraction

    //! Search tree position from position (node parent is stocked in tmp_node)
    int
    SearchTreePosition(struct kdnode *node, double *pos);

    //! Climbing the tree and check the hyperplan intersection for each node
    int
    TestHyperPlan(struct kdnode *node_exploration, struct kdnode *node_selected, double *pos);

    //! Explore branch of the tree and test distances with position
    int
    ExploreBranch(struct kdnode *node_exploration, struct kdnode *node_selected, double *pos);


//Explore and clean methods of Rset structure

    //! Clear results set
    void
    ClearRSet(struct kdres *set);

    //! Free results set
    void
    FreeRSet();

    //! Rewind results set
    void
    RewindRSet();

    //! Next results set
    int
    NextRSet();

    //! End results set is reached
    int
    EndRSet();
//
};

#endif	/* _KDTREE_HPP_INCLUDE_ */
