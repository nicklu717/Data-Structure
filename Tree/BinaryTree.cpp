#include "BinaryTree.hpp"
#include <iostream>
using namespace std;

void BinaryTree::inorderTraversal(BinaryNode *currentNode) {

    if (currentNode) {
        inorderTraversal(currentNode->leftNode);
        cout << currentNode->value << endl;
        inorderTraversal(currentNode->rightNode);
    }
}

void BinaryTree::preorderTraversal(BinaryNode *currentNode) {

    if (currentNode) {
        cout << currentNode->value << endl;
        inorderTraversal(currentNode->leftNode);
        inorderTraversal(currentNode->rightNode);
    }
}

void BinaryTree::postorderTraversal(BinaryNode *currentNode) {
    
    if (currentNode) {
        inorderTraversal(currentNode->leftNode);
        inorderTraversal(currentNode->rightNode);
        cout << currentNode->value << endl;
    }
}