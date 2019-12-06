class LinkedTree;

class TreeNode {

    friend class LinkedTree;

    private:
        int value;
        TreeNode *leftNode;
        TreeNode *rightNode;
};

class LinkedTree {
    
    private:
        TreeNode *rootNode;

    public:
        void inorderTraversal(TreeNode *currentNode);
        void preorderTraversal(TreeNode *currentNode);
        void postorderTraversal(TreeNode *currentNode);
};