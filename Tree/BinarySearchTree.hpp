#ifndef _BINARY_SEARCH_TREE_HPP_
#define _BINARY_SEARCH_TREE_HPP_

#include "BinaryNode.hpp"

template <class T>
class BinarySearchTree {
    
    public:
        BinarySearchTree();
        ~BinarySearchTree();
        bool search(T _key);
        void insert(T _key);

    protected:
        BinaryNode<T> *root;

        void insert(T _key, BinaryNode<T> *_node);
};

#endif