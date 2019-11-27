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
        SparseMatrix fastTranspose();

    private:
        int numberOfRows, numberOfColumns, numberOfTerms;
        MatrixTerm matrixTerms[];
};