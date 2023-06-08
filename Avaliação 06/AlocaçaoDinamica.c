#include <stdio.h>
#include <stdlib.h>

int** createMatrix(int rows, int columns) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(columns * sizeof(int));
    }
    return matrix;
}

void fillMatrix(int** matrix, int rows, int columns) {
    printf("Preencha a matriz:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrices(int** matrixA, int** matrixB, int** matrixSum, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrixSum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

void displayMatrix(int** matrix, int rows, int columns) {
    printf("Matriz:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("[%d] ", matrix[i][j]);
        }
        printf("\n");
    }
}

void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int rows, columns;

    printf("Digite o número de linhas das matrizes: ");
    scanf("%d", &rows);

    printf("Digite o número de colunas das matrizes: ");
    scanf("%d", &columns);

    int** matrixA = createMatrix(rows, columns);
    int** matrixB = createMatrix(rows, columns);
    int** matrixSum = createMatrix(rows, columns);

    printf("Preencha a matriz A:\n");
    fillMatrix(matrixA, rows, columns);

    printf("Preencha a matriz B:\n");
    fillMatrix(matrixB, rows, columns);

    addMatrices(matrixA, matrixB, matrixSum, rows, columns);

    printf("Matriz A:\n");
    displayMatrix(matrixA, rows, columns);

    printf("Matriz B:\n");
    displayMatrix(matrixB, rows, columns);

    printf("Matriz Soma:\n");
    displayMatrix(matrixSum, rows, columns);

    freeMatrix(matrixA, rows);
    freeMatrix(matrixB, rows);
    freeMatrix(matrixSum, rows);

    return 0;
}
