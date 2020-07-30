// Programmers 스킬트리 - (https://programmers.co.kr/learn/courses/30/lessons/49993)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// skill_trees_len은 배열 skill_trees의 길이입니다.
int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len) {
    int answer = 0;

    for (int i = 0; i < skill_trees_len; i++) {
        int idx = strlen(skill_trees[i]);
        int flag = 1;
        int cnt = 0;

        for (int j = strlen(skill) - 1; j >= 0; j--) {
            for (int k = 0; k < strlen(skill_trees[i]); k++) {
                if (skill[j] == skill_trees[i][k]) {
                    if (idx < k) {
                        flag = 0;
                        break;
                    }

                    idx = k;
                    break;
                }

                if (idx != strlen(skill_trees[i]) && k == strlen(skill_trees[i]) - 1)
                    flag = 0;
            }

            if (flag == 0)
                break;
            
            cnt++;

            if (idx == 0)
                break;
        }
        
        if (cnt != strlen(skill))
            continue;

        if (idx == strlen(skill_trees[i]) || flag == 1)
            answer++;
    }

    return answer;
}

int main() {
    // Test case 1
    const char* skill = "CBD";
    const char* skill_trees[4] = { "BACDE", "CBADF", "AECB", "BDA" };
    size_t skill_trees_len = 4;

    printf("%d", solution(skill, skill_trees, skill_trees_len));

    return 0;
}

