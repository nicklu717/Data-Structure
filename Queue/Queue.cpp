#include "Queue.hpp"
#include <iostream>
using namespace std;

template <class T>
void Queue<T>::push(T _value) {

    tail = (tail+1) % size;
    array[tail] = _value;

    count++;
}

template <class T>
T Queue<T>::get() {
    
    return array[head];
}

template <class T>
T Queue<T>::pop() {
    
    T value = array[head];
    head = (head+1) % size;

    count--;

    return value;
}

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