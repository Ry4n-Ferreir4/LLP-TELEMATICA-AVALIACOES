#include <stdio.h>

#define N 3


void calcularMatriz(int matrix1[][N], int matrix2[][N], int matrixsoma[][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrixsoma[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}


void exibirMatriz(int mat[][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int matrixsoma[N][N];

    calcularMatriz(matrix1, matrix2, matrixsoma);

    printf("Matriz A:\n");
    exibirMatriz(matrix1);

    printf("\nMatriz B:\n");
    exibirMatriz(matrix2);

    printf("\nMatriz Soma C:\n");
    exibirMatriz(matrixsoma);

    return 0;
}
