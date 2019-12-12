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

    count++;
}

template <class T>
T List<T>::pop() {

    Node<T>* headNode = head;
    int value;

    if(headNode) {
        value = headNode->value;
        head = headNode->nextNode;
        delete headNode;
        count--;
    }

    return value;
}

template <class T>
void List<T>::append(T _value) {
    
    Node<T>* newNode = new Node<T>(_value);

    if(!head) {

        head = newNode;

    } else {

        Node<T>* currentNode = head;

        while(currentNode->nextNode) {
            currentNode = currentNode->nextNode;
        }

        currentNode->nextNode = newNode;
    }

    count++;
}

template <class T>
T List<T>::drop() {

    int value;

    if(head) {

        Node<T>* currentNode = head;
        Node<T>* previousNode = NULL;

        while(currentNode->nextNode) {
            previousNode = currentNode;
            currentNode = currentNode->nextNode;
        }

        previousNode->nextNode = NULL;

        value = currentNode->value;
        delete currentNode;

        count--;
    }

    return value;
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

    cout << list.drop() << endl;
    list.printOut();
    cout << "count: " << list.count << endl << endl;
    
    cout << list.drop() << endl;
    list.printOut();
    cout << "count: " << list.count << endl << endl;

    cout << list.drop() << endl;
    list.printOut();
    cout << "count: " << list.count << endl << endl;

    return 0;
}