#include "Queue.hpp"
#include <iostream>
using namespace std;

template <class T>
Queue<T>::Queue(int _size) {

    size = _size;
    array = new T[size];

    head = 0;
    tail = size-1;
    count = 0;
}

template <class T>
Queue<T>::~Queue() {

    delete[] array;
}

int main() {

    Queue<int> *queue = new Queue<int>;

    cout << queue->size << endl;

    return 0;
}