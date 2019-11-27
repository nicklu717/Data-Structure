#include "SparseMatrix.hpp"

SparseMatrix SparseMatrix::transpose() {

    SparseMatrix newMatrix;

    newMatrix.numberOfRows = numberOfColumns;
    newMatrix.numberOfColumns = numberOfRows;
    newMatrix.numberOfTerms = numberOfTerms;
    
    if (numberOfTerms > 0) {

        int newTermIndex = 0;
        for (int column = 0; column < numberOfColumns; column++) {
            for (int i = 0; i < numberOfTerms; i++) {
                if (matrixTerms[i].column == column) {

                    newMatrix.matrixTerms[newTermIndex].row = matrixTerms[i].column;
                    newMatrix.matrixTerms[newTermIndex].column = matrixTerms[i].row;
                    newMatrix.matrixTerms[newTermIndex].value = matrixTerms[i].value;

                    newTermIndex++;
                };
            };
        };
    };

    return newMatrix;
};

SparseMatrix SparseMatrix::fastTranspose() {

    int *rowNumbers = new int[numberOfColumns];
    int *rowStartIndexes = new int[numberOfColumns];

    SparseMatrix newMatrix;
    
    newMatrix.numberOfRows = numberOfColumns;
    newMatrix.numberOfColumns = numberOfRows;
    newMatrix.numberOfTerms = numberOfTerms;

    int i;
    if (numberOfTerms > 0) {

        for (i = 0; i < numberOfColumns; i++) {
            rowNumbers[i] = 0;
        };

        for (i = 0; i < numberOfTerms; i++) {
            rowNumbers[matrixTerms[i].column]++;
        };

        rowStartIndexes[0] = 0;
        for (i = 1; i < numberOfColumns; i++) {
            rowStartIndexes[i] = rowStartIndexes[i - 1] + rowNumbers[i - 1];
        };

        int j;
        for (i = 0; i < numberOfTerms; i++) {

            j = rowStartIndexes[matrixTerms[i].column];

            newMatrix.matrixTerms[j].row = matrixTerms[i].column;
            newMatrix.matrixTerms[j].column = matrixTerms[i].row;
            newMatrix.matrixTerms[j].value = matrixTerms[i].value;

            rowStartIndexes[matrixTerms[i].column]++;
        };
    };
    
    delete [] rowNumbers;
    delete [] rowStartIndexes;

    return newMatrix;
};