#include "BinarySearchTree.hpp"

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

    if(!root) {
        return false;
    }

    if(_key == root->key) {

        return true;

    } else {

        return (_key < root->key) ? root->left->search(_key) : root->right->search(_key);
    }
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