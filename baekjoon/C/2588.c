// Baekjoon 곱셈 (https://www.acmicpc.net/problem/2588)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int temp = b;
    printf("%d\n", (temp % 10) * a);
    temp /= 10;
    printf("%d\n", (temp % 10) * a);
    temp /= 10;
    printf("%d\n", (temp % 10) * a);
    printf("%d\n", a * b);

    return 0;
}