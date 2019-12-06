class LinkedTree;

class TreeNode {

    friend class LinkedTree;

    private:
        TreeNode *leftNode;
        int value;
        TreeNode *rightNode;
};

class LinkedTree {
    
    private:
        TreeNode *rootNode;

    public:
};