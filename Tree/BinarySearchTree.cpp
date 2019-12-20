#include "BinarySearchTree.hpp"
#include <iostream>

using namespace std;

template <class T>
BinarySearchTree<T>::BinarySearchTree() {
    root = NULL;
}

template <class T>
BinarySearchTree<T>::~BinarySearchTree() {
    delete root;
}

template <class T>
bool BinarySearchTree<T>::search(T _key) {
    return root ? search(_key, root) : false;
}

template <class T>
void BinarySearchTree<T>::insert(T _key) {

    if(!root) {

        root = new BinaryNode<T>(_key);
        
    } else {

        insert(_key, root);
    }
}

template <class T>
void BinarySearchTree<T>::printInOrder() {
    printInOrder(root);
}

template <class T>
void BinarySearchTree<T>::printPreOrder() {
    printPreOrder(root);
}

template <class T>
void BinarySearchTree<T>::printPostOrder() {
    printPostOrder(root);
}

template <class T>
bool BinarySearchTree<T>::search(T _key, BinaryNode<T> *_node) {

    if(_key < _node->key) {

        return _node->left ? search(_key, _node->left) : false;

    } else if(_key > _node->key) {

        return _node->right ? search(_key, _node->right) : false;

    } else {

        return true;
    }
}

template <class T>
void BinarySearchTree<T>::insert(T _key, BinaryNode<T> *_node) {

    if(_key < _node->key) {

        if(!_node->left) {

            _node->left = new BinaryNode<T>(_key);

        } else {

            insert(_key, _node->left);
        }
    }

    if(_key > _node->key) {

        if(!_node->right) {

            _node->right = new BinaryNode<T>(_key);

        } else {

            insert(_key, _node->right);
        }
    }
}

template <class T>
void BinarySearchTree<T>::printInOrder(BinaryNode<T> *_node) {

    if(_node) {

        printInOrder(_node->left);
        cout << _node->key << " ";
        printInOrder(_node->right);
    }
}

template <class T>
void BinarySearchTree<T>::printPreOrder(BinaryNode<T> *_node) {

    if(_node) {

        cout << _node->key << " ";
        printInOrder(_node->left);
        printInOrder(_node->right);
    }
}

template <class T>
void BinarySearchTree<T>::printPostOrder(BinaryNode<T> *_node) {

    if(_node) {

        printInOrder(_node->left);
        printInOrder(_node->right);
        cout << _node->key << " ";
    }
}