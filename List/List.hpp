#include "Node.hpp"

template<class T>

class List {

    public:
        List();
        Node<T>* head;
        int count;
        bool isEmpty();
};