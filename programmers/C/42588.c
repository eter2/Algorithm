// Programmers 탑 - (https://programmers.co.kr/learn/courses/30/lessons/42588)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// heights_len은 배열 heights의 길이입니다.
int* solution(int heights[], size_t heights_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * heights_len);
    answer = heights;

    for (int i = heights_len - 1; i >= 0; i--) {
        for (int j = i; j >= 0; j--) {
            if (heights[i] < heights[j - 1]) {
                answer[i] = j;
                break;
            }

            if (j == 0) {
                answer[i] = 0;
                break;
            }
        }
    }

    return answer;
}

int main() {
    // Test case 1
    int heights[5] = { 6,9,5,7,4 };
    size_t heights_len = 5;

    // Test case 2
    // int heights[7] = { 3,9,9,3,5,7,2 };
    // size_t heights_len = 7;

    // Test case 3
    // int heights[7] = { 1,5,3,6,7,6,5 };
    // size_t heights_len = 7;

    int* answer = solution(heights, heights_len);

    for (int i = 0; i < heights_len; i++) {
        printf("%d", answer[i]);
    }
    return 0;
}

