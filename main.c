#include <stdio.h>

#define N 3 


void calcularSoma(int n, int *matrix1, int *matrix2, int *matrixsoma) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            *(matrixsoma + i * n + j) = *(matrix1 + i * n + j) + *(matrix2 + i * n + j);
        }
    }
}

void exibirMatriz(int n, int *mat) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", *(mat + i * n + j));
        }
        printf("\n");
    }
}

int main() {
    int n = 3;
   	int matrix1[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int matrixsoma[N][N];

   

    calcularSoma(n, (int *)matrix1, (int *)matrix2, (int *)matrixsoma);

    printf("Matriz A:\n");
    exibirMatriz(n, (int *)matrix1);

    printf("\nMatriz B:\n");
    exibirMatriz(n, (int *)matrix2);

    printf("\nMatriz Soma C:\n");
    exibirMatriz(n, (int *)matrixsoma);

    return 0;
}
