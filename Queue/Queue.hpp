template <class T>
class Queue {

    public:
        int count;
        int size;

        void push(T);
        T get();
        T pop();

        Queue(int size = 100);
        ~Queue();

    private:
        int head;
        int tail;
        T *array;
};