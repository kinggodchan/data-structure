#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double sum_Array(int A[], int n) {
    int* ptr = A; // 포인터로 배열에 접근
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += *ptr; // 포인터로 배열 요소 접근
        ptr++; // 다음 요소로 이동
    }
    return sum / n;
}

int main() {
    const int n = 500000;
    int* A = malloc(sizeof(int) * n); // 동적 메모리 할당
    srand(time(NULL)); // 난수 생성을 위한 시드 설정
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 100; // 0부터 99까지의 난수 생성
    }
    double avg = sum_Array(A, n);
    printf("평균값: %f\n", avg);
    free(A); // 할당된 메모리 해제
    return 0;
}