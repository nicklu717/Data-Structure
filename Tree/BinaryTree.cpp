#include "BinaryTree.hpp"
#include <iostream>
using namespace std;

template <class T>
void BinaryTree<T>::inorderTraversal(BinaryNode<T> *currentNode) {

    if (currentNode) {
        inorderTraversal(currentNode->left);
        cout << currentNode->value << endl;
        inorderTraversal(currentNode->right);
    }
}

template <class T>
void BinaryTree<T>::preorderTraversal(BinaryNode<T> *currentNode) {

    if (currentNode) {
        cout << currentNode->value << endl;
        inorderTraversal(currentNode->left);
        inorderTraversal(currentNode->right);
    }
}

template <class T>
void BinaryTree<T>::postorderTraversal(BinaryNode<T> *currentNode) {
    
    if (currentNode) {
        inorderTraversal(currentNode->left);
        inorderTraversal(currentNode->right);
        cout << currentNode->value << endl;
    }
}