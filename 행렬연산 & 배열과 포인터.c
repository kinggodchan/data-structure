#include <stdio.h>
#define M 3
#define N 2

void matrix_add(double A[M][N], double B[M][N], double C[M][N]) {
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void matrix_multiply(double A[M][N], double B[N][M], double C[M][M]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            double sum = 0;
            for (int k = 0; k < N; k++)
                sum += A[i][k] * B[k][j];
            C[i][j] = sum;
        }
    }
}


void print_matrix(double matrix[M][N]) {
    printf("=============\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("=============\n");
}

int main() {
    double A[M][N] = {{1, 2}, {3, 4}, {5, 6}};
    double B[M][N] = {{7, 8}, {9, 10}, {11, 12}};
    double C[M][N];
    double D[N][M] = { {1, 2, 3}, {4, 5, 6} };
    double E[M][M];
    matrix_add(A, B, C);
    printf("A + B =\n");
    print_matrix(C);
    matrix_multiply(A, D, E);
    printf("A * D =\n");
    print_matrix(E);
    return 0;
}
