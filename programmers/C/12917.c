// Programmers 문자열 내림차순으로 배치하기 - (https://programmers.co.kr/learn/courses/30/lessons/12917)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(s);
    char* answer = (char*)malloc(sizeof(char) * len);
    strcpy(answer, s);

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (answer[j] < answer[j + 1]) {
                char temp = answer[j];
                answer[j] = answer[j + 1];
                answer[j + 1] = temp;
            }
        }
    }
    return answer;
}

int main() {
    // Test case 1
    const char* s = "Zbcdefg";

    printf("%s", solution(s));

    return 0;
}

