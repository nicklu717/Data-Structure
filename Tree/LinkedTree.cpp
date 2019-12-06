#include <iostream>
#include "LinkedTree.hpp"
using namespace std;

void LinkedTree::inorderTraversal(TreeNode *currentNode) {

    if (currentNode) {
        inorderTraversal(currentNode->leftNode);
        cout << currentNode->value << endl;
        inorderTraversal(currentNode->rightNode);
    }
}

void LinkedTree::preorderTraversal(TreeNode *currentNode) {

    if (currentNode) {
        cout << currentNode->value << endl;
        inorderTraversal(currentNode->leftNode);
        inorderTraversal(currentNode->rightNode);
    }
}

void LinkedTree::postorderTraversal(TreeNode *currentNode) {
    
    if (currentNode) {
        inorderTraversal(currentNode->leftNode);
        inorderTraversal(currentNode->rightNode);
        cout << currentNode->value << endl;
    }
}