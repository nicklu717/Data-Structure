#include "Stack.hpp"

template <class T>
void Stack<T>::push(T _value) {

}

template <class T>
T Stack<T>::get() {

}

template <class T>
T Stack<T>::pop() {

}

template <class T>
Stack<T>::Stack() {

    array = new T[100];
    count = 0;
}

template <class T>
Stack<T>::Stack(int _size) {

    array = new T[_size];
    count = 0;
}

template <class T>
Stack<T>::~Stack() {

    delete[] array;
}