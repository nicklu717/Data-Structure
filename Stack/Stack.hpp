template <class T>
class Stack {

    public:
        int count;
        int size;

        void push(T);
        T get();
        T pop();

        Stack(int size = 100);
        ~Stack();

    private:
        T *array;
};