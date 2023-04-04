#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double sum_Array(int A[], int n) {
    int* ptr = A; // �����ͷ� �迭�� ����
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += *ptr; // �����ͷ� �迭 ��� ����
        ptr++; // ���� ��ҷ� �̵�
    }
    return sum / n;
}

int main() {
    const int n = 500000;
    int* A = malloc(sizeof(int) * n); // ���� �޸� �Ҵ�
    srand(time(NULL)); // ���� ������ ���� �õ� ����
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 100; // 0���� 99������ ���� ����
    }
    double avg = sum_Array(A, n);
    printf("��հ�: %f\n", avg);
    free(A); // �Ҵ�� �޸� ����
    return 0;
}