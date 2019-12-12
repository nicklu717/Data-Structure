#include <iostream>
#include "List.hpp"
using namespace std;

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

template <class T>
void List<T>::printOut() {

    Node<T>* currentNode = head;

    while(currentNode) {
        cout << currentNode->value << " -> ";
        currentNode = currentNode->nextNode;
    }

    cout << "NULL" << endl;
}

template <class T>
T List<T>::get(int _index) {

    Node<T>* currentNode = head;

    for(int i = 1; i <= _index; i++) {
        currentNode = currentNode->nextNode;
    }

    return currentNode->value;
}

int main() {

    List<int> list;

    cout << list.isEmpty() << endl;

    list.push(0);
    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);

    cout << list.get(1) << endl;
    list.printOut();
    cout << list.isEmpty() << endl;

    return 0;
}