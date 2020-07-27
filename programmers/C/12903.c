// Programmers 가운데 글자 가져오기 - (https://programmers.co.kr/learn/courses/30/lessons/12903)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    if (strlen(s) % 2 != 0) {
        int len = strlen(s) / 2;
        char* answer = (char*)malloc(2);
        char c[2];
        strncpy(c, s + len, 1);
        c[1] = '\0';
        strcpy(answer, c);
        return answer;
    }
    else {
        int len = strlen(s) / 2;
        char* answer = (char*)malloc(3);
        char c[3];
        strncpy(c, s + len - 1, 2);
        c[2] = '\0';
        strcpy(answer, c);
        return answer;
    }
}

int main() {
    // Test case 1
    const char* s = "abcd";

    // Test case 2
    // const char* s = "abcde";

    printf("%s", solution(s));

    return 0;
}

