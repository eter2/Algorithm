// Programmers 이상한 문자 만들기 - (https://programmers.co.kr/learn/courses/30/lessons/12930)

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
    *answer = NULL;

    int cnt = 0;
    for (int i = 0; i < len; i++) {
        if (cnt == len && s[cnt] == NULL)
            break;

        if (s[cnt] == ' ') {
            i = -1;
            strcat(answer, " ");
            cnt++;
            continue;
        }

        if (i == 0 || i % 2 == 0) {
            char temp[2];
            temp[0] = s[cnt];
            temp[1] = NULL;

            if (97 <= temp[0] && temp[0] <= 122) {
                temp[0] -= 32;
            }

            strcat(answer, temp);
            cnt++;
        }
        else {
            char temp[2];
            temp[0] = s[cnt];
            temp[1] = NULL;

            if (65 <= temp[0] && temp[0] <= 90) {
                temp[0] += 32;
            }

            strcat(answer, temp);
            cnt++;
        }
    }

    return answer;
}

int main() {
    // Test case 1
    const char* s = "try hello world";

    printf("%s", solution(s));

    return 0;
}

