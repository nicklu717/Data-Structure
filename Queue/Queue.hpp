template <class T>
class Queue {

    public:
        int count;
        int size;

        void push(T);
        T get();
        T pop();

        Queue();
        Queue(int size);
        ~Queue();

    private:
        int head;
        int tail;
        T *array;
};