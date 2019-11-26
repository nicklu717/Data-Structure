class SparseMatrix;

class MatrixTerm {

    friend class SparseMatrix;

    private:
        int row, column, value;
};

class SparseMatrix {

    public:
        SparseMatrix();
        SparseMatrix transpose();

    private:
        int numberOfRow, numberOfColumn, numberOfTerm;
        MatrixTerm matrixTerms[];
};