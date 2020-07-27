// Programmers 문자열 다루기 기본 - (https://programmers.co.kr/learn/courses/30/lessons/12918)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    int len = strlen(s);
    if (len != 4 && len != 6) {
        return false;
    }

    bool answer = true;

    char* str = (char*)malloc(sizeof(char) * len);
    strcpy(str, s);

    for (int i = 0; i < len; i++) {
        int temp = s[i] - '0';

        if (temp < 0 || temp > 9) {
            answer = false;
            break;
        }
    }

    return answer;
}

int main() {
    // Test case 1
    const char* s = "a234";

    // Test case 2
    // const char* s = "1234";

    printf("%s", solution(s) ? "true" : "false");

    return 0;
}

