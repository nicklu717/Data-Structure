#ifndef _BINARY_SEARCH_TREE_HPP_
#define _BINARY_SEARCH_TREE_HPP_

#include "BinaryNode.hpp"

template <class T>
class BinarySearchTree {
    
    public:
        void insert(T _key);
        bool search(T _key);
    
        BinarySearchTree();
        ~BinarySearchTree();

    protected:
        BinaryNode<T> *root;
};

#endif