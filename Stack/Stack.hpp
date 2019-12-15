template <class T>
class Stack {

    public:
        int count;

        void push(T);
        T get();
        T pop();

        Stack();
        ~Stack();

    private:
        T *array;
};