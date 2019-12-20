#ifndef _BINARY_TREE_HPP_
#define _BINARY_TREE_HPP_

#include "BinaryNode.hpp"

template <class T>
class BinaryTree {
    
    public:
        BinaryNode<T> *root;

        void inorderTraversal(BinaryNode<T> *currentNode);
        void preorderTraversal(BinaryNode<T> *currentNode);
        void postorderTraversal(BinaryNode<T> *currentNode);
};

#endif