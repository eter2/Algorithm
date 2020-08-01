// Programmers 큰 수 만들기 - (https://programmers.co.kr/learn/courses/30/lessons/42883)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* number, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(number);
    char* answer = (char*)malloc(sizeof(char) * len);
    strcpy(answer, number);

    char max;
    int cnt = 0, idx = 0, temp = 0;
    while (cnt < k) {
        max = answer[temp];

        for (int i = temp + 1; i < k + temp + 1 - cnt; i++) {
            if (max < answer[i]) {
                max = answer[i];
                idx = i;
            }
        }

        if (idx - temp != 0) {
            for (int i = temp; i < len - cnt; i++)
                answer[i] = answer[i + idx - temp];

            cnt += idx - temp; 
            
            idx = temp;
        }
        else {
            temp++;
            idx = temp;
        }
    }

    while (strlen(answer) != len - k) {
        char min = answer[0];
        idx = 0;

        for (int i = 0; i < strlen(answer); i++) {
            if (min > answer[i]) {
                min = answer[i];
                idx = i;
            }
        }

        for (int i = idx; i < strlen(answer); i++)
            answer[i] = answer[i + 1];
    }

    return answer;
}

int main() {
    // Test case 1  
    const char* number = "1924";
    int k = 2;

    // Test case 2
    // const char* number = "1231234";
    // int k = 3;

    // Test case 3  
    // const char* number = "4177252841";
    // int k = 4;

    // Test case 4
    // const char* number = "9111111";
    // int k = 2;

    printf("%s", solution(number, k));

    return 0;
}

