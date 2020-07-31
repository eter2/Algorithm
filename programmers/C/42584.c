// Programmers 주식가격 - (https://programmers.co.kr/learn/courses/30/lessons/42584)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// prices_len은 배열 prices의 길이입니다.
int* solution(int prices[], size_t prices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * prices_len);

    for (int i = 0; i < prices_len; i++) {
        answer[i] = 0;
    }

    for (int i = 0; i < prices_len; i++) {
        int temp = prices[i];
        for (int j = i + 1; j < prices_len; j++) {
            if (temp <= prices[j])
                answer[i]++;
            else {
                answer[i]++;
                break;
            }
        }
    }

    return answer;
}

int main() {
    // Test case 1  
    int prices[5] = { 1, 2, 3, 2, 3 };
    size_t prices_len = 5;

    int* answer = solution(prices, prices_len);
    for (int i = 0; i < prices_len; i++) {
        printf("%d", answer[i]);
    }

    return 0;
}

