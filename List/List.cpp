#include <stddef.h>
#include "List.hpp"

template <class T>

List<T>::List() {

    head = NULL;
    count = 0;
}

template <class T>

bool List<T>::isEmpty() {
    return count == 0;
}

template <class T>

void List<T>::push(T _value) {
    
    Node<T>* newNode = new Node<T>(_value);

    newNode->nextNode = head;
    head = newNode;
}