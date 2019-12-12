#include "Node.hpp"

template<class T>

class List {

    public:
        Node<T>* head;
        int count;
        List();
        bool isEmpty();
        void push(T value);
};