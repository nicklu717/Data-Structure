template <class T>
class MinHeap {

    public:
        int count;

        void push(T _value);
        T get();
        T pop();
        int getSize();

        MinHeap(int _size = 1000);
        ~MinHeap();

    protected:
        int size;
        T *array;

        T parent(int _index);
        T left(int _index);
        T right(int _index);
        T sibling(int _index);
        void floatUp(int _index);
        void sink(int _index);
        void swap(int _index1, int _index2);
};