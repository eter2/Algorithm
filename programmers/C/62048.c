// Programmers 멀쩡한 사각형 - (https://programmers.co.kr/learn/courses/30/lessons/62048)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long gcd(long long a, long long b) {
    long long temp;

    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

long long solution(long long w, long long h) {
    long long answer = w * h;
    long long num = gcd(w, h);
    w = w / num;
    h = h / num;

    answer -= (w + h - 1) * num;

    return answer;
}

int main() {
    // Test case 1  
    int w = 8, h = 12;

    printf("%d", solution(w, h));

    return 0;
}

