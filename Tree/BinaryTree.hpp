class BinaryTree;

class BinaryNode {

    friend class BinaryTree;

    private:
        int value;
        BinaryNode *leftNode;
        BinaryNode *rightNode;
};

class BinaryTree {
    
    private:
        BinaryNode *rootNode;

    public:
        void inorderTraversal(BinaryNode *currentNode);
        void preorderTraversal(BinaryNode *currentNode);
        void postorderTraversal(BinaryNode *currentNode);
};