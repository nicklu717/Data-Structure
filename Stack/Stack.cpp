#include "Stack.hpp"
#include <iostream>
using namespace std;

template <class T>
void Stack<T>::push(T _value) {

    array[count] = _value;

    count++;
}

template <class T>
T Stack<T>::get() {

    return array[count-1];
}

template <class T>
T Stack<T>::pop() {

    T value = array[count-1];
    
    count--;

    return value;
}

template <class T>
Stack<T>::Stack(int _size) {

    size = _size;
    array = new T[size];
    
    count = 0;
}

template <class T>
Stack<T>::~Stack() {

    delete[] array;
}

int main() {

    Stack<int> *stack = new Stack<int>(50);

    cout << stack->size << endl;

    stack->push(0);
    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(4);
    stack->push(5);
    stack->push(6);

    cout << stack->pop() << endl;
    cout << stack->get() << endl;
    cout << stack->get() << endl;

    delete stack;

    return 0;
}