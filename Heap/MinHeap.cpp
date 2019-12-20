#include "MinHeap.hpp"

template <class T>
MinHeap<T>::MinHeap(int _size) {

    count = 0;
    size = _size;
    values = new T[size];
}

template <class T>
MinHeap<T>::~MinHeap() {
    delete[] values;
}

template <class T>
int MinHeap<T>::getSize() {
    return size;
}

template <class T>
int MinHeap<T>::getCount() {
    return count;
}

template <class T>
void MinHeap<T>::push(T _value) {

    values[count] = _value;
    floatUp(count);

    count++;
}

template <class T>
T MinHeap<T>::get() {
    return values[0];
}

template <class T>
T MinHeap<T>::pop() {

    T value = values[0];
    values[0] = values[count - 1];
    sink(0);

    count--;

    return value;
}

template <class T>
void MinHeap<T>::floatUp(int _index) {

    if(parent(_index) >= 0 && values[_index] < values[parent(_index)]) {
        
        swap(_index, parent(_index));
        floatUp(parent(_index));
    }
}

template <class T>
void MinHeap<T>::sink(int _index) {

    if(right(_index) <= count - 1) {

        int smallerSide = values[left(_index)] < values[right(_index)] ? left(_index) : right(_index);

        if(values[_index] > values[smallerSide]) {

            swap(_index, smallerSide);
            sink(smallerSide);
        }

    } else if(left(_index) == count - 1) {

        if(values[_index] > values[left(_index)]) {

            swap(_index, left(_index));
            sink(left(_index));
        }
    }
}

template <class T>
void MinHeap<T>::swap(int _index1, int _index2) {

    T temp = values[_index1];
    values[_index1] = values[_index2];
    values[_index2] = temp;
}

template <class T>
int MinHeap<T>::parent(int _index) {
    return _index > 0 ? (_index - 1) / 2 : -1;
}

template <class T>
int MinHeap<T>::left(int _index) {
    return _index * 2 + 1;
}

template <class T>
int MinHeap<T>::right(int _index) {
    return _index * 2 + 2;
}

template <class T>
int MinHeap<T>::sibling(int _index) {
    return _index % 2 == 0 ? _index - 1 : _index + 1;
}

#include <iostream>
using namespace std;

int main() {

    MinHeap<int> *minHeap = new MinHeap<int>;

    minHeap->push(4);
    minHeap->push(2);
    minHeap->push(16);
    minHeap->push(2);
    minHeap->push(5);
    minHeap->push(6);
    minHeap->push(8);
    minHeap->push(1);

    int count = minHeap->getCount();
    for(int i = 0; i < count; i++) {
        cout << minHeap->pop() << endl;
    }
    // 1 2 2 4 5 6 8 16

    delete minHeap;

    return 0;
}