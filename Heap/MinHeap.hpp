#ifndef _MIN_HEAP_HPP_
#define _MIN_HEAP_HPP_

template <class T>
class MinHeap {

    public:
        MinHeap(int _size = 1000);
        ~MinHeap();
        
        int getCount();
        int getSize();
        void push(T _value);
        T get();
        T pop();

    protected:
        int size;
        int count;
        T *values;

        void floatUp(int _index);
        void sink(int _index);
        void swap(int _index1, int _index2);
        int parent(int _index);
        int left(int _index);
        int right(int _index);
        int sibling(int _index);
};

#endif