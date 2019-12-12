template<class T>

class Node {

    public:
        T value;
        Node* nextNode;
        Node(T _value) {
            value = _value;
        }
};