#include "BinaryTree.hpp"
#include <iostream>
using namespace std;

template <class T>
void BinaryTree<T>::inorderTraversal(BinaryNode<T> *currentNode) {

    if (currentNode) {
        inorderTraversal(currentNode->leftNode);
        cout << currentNode->value << endl;
        inorderTraversal(currentNode->rightNode);
    }
}

template <class T>
void BinaryTree<T>::preorderTraversal(BinaryNode<T> *currentNode) {

    if (currentNode) {
        cout << currentNode->value << endl;
        inorderTraversal(currentNode->leftNode);
        inorderTraversal(currentNode->rightNode);
    }
}

template <class T>
void BinaryTree<T>::postorderTraversal(BinaryNode<T> *currentNode) {
    
    if (currentNode) {
        inorderTraversal(currentNode->leftNode);
        inorderTraversal(currentNode->rightNode);
        cout << currentNode->value << endl;
    }
}