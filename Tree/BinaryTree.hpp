template <class T>
class BinaryNode {

    public:
        T value;
        BinaryNode<T> *leftNode;
        BinaryNode<T> *rightNode;
};

template <class T>
class BinaryTree {
    
    public:
        BinaryNode<T> *rootNode;

        void inorderTraversal(BinaryNode<T> *currentNode);
        void preorderTraversal(BinaryNode<T> *currentNode);
        void postorderTraversal(BinaryNode<T> *currentNode);
};