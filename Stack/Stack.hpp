template <class T>
class Stack {

    public:
        int count;

        void push(T);
        T get();
        T pop();

        Stack();
        Stack(int size);
        ~Stack();

    private:
        T *array;
};