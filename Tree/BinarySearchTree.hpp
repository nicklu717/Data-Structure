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
        void printInOrder();
        void printPreOrder();
        void printPostOrder();

    protected:
        BinaryNode<T> *root;

        bool search(T _key, BinaryNode<T> *_node);
        void insert(T _key, BinaryNode<T> *_node);
        void printInOrder(BinaryNode<T> *_node);
        void printPreOrder(BinaryNode<T> *_node);
        void printPostOrder(BinaryNode<T> *_node);
};

#endif