template <class T>
class Stack {

    public:
        int count;
        int size;

        void push(T);
        T get();
        T pop();

        Stack();
        Stack(int size);
        ~Stack();

    private:
        T *array;
};