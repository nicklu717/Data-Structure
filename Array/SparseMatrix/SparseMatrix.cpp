#include "SparseMatrix.h"

SparseMatrix SparseMatrix::transpose() {

    SparseMatrix newMatrix;

    newMatrix.numberOfRow = numberOfColumn;
    newMatrix.numberOfColumn = numberOfRow;
    newMatrix.numberOfTerm = numberOfTerm;

    if (numberOfTerm > 0) {

        int newTermIndex = 0;

        for (int column = 0; column < numberOfColumn; column++) {
            for (int i = 0; i < numberOfTerm; i++) {
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
}