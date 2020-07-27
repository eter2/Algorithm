// Programmers 문자열을 정수로 바꾸기 - (https://programmers.co.kr/learn/courses/30/lessons/12925)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int len = strlen(s);
    int answer = 0;

    if (s[0] == '+' || s[0] == '-') {
        for (int i = len - 1; i >= 1; i--)
            answer += (s[i] - '0') * pow(10, len - i - 1);

        if (s[0] == '-') {
            answer -= answer * 2;
        }
    }
    else {
        for (int i = len - 1; i >= 0; i--)
            answer += (s[i] - '0') * pow(10, len - i - 1);
    }

    return answer;
}

int main() {
    // Test case 1
    const char* s = "1234";

    // Test case 2
    // const char* s = "-1234";

    printf("%d", solution(s));

    return 0;
}

