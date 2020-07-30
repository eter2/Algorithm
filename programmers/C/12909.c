// Programmers 올바른 괄호 - (https://programmers.co.kr/learn/courses/30/lessons/12909)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    int len = strlen(s);
    bool answer = true;

    int front = -1;
    int rear = -1;

    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            rear++;
            continue;
        }

        if (front == rear) {
            answer = false;
            return answer;
        }

        if (s[i] == ')') {
            front++;
        }
    }

    if (front != rear)
        answer = false;

    return answer;
}

int main() {
    // Test case 1
    // const char* s = "()()";

    // Test case 2
    // const char* s = ")()(";

    // Test case 3
    const char* s = "(()(";

    printf("%s", solution(s) ? "true" : "false");

    return 0;
}

