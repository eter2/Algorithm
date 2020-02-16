// Programmers 수박수박수박수박수박수? - (https://programmers.co.kr/learn/courses/30/lessons/12922)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
	// 리턴할 값은 메모리를 동적 할당해주세요.
	char* answer = (char*)malloc(sizeof(char) * (n * 3) + 1);
	strcpy(answer, "수");

	for (int i = 1; i < n; i++) {
		if (i % 2 == 1) strcat(answer, "박");
		else strcat(answer, "수");
	}

	return answer;
}