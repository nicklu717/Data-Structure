class Polynomial;

class Term {

    friend class Polynomial;

    private:
        float coefficient;
        int exponent;

};

class Polynomial {
    
    private:
        static Term terms[];
        static int free;
        int start, finish;
};