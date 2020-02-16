// Programmers 자연수 뒤집어 배열로 만들기 - (https://programmers.co.kr/learn/courses/30/lessons/12932)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
	// 리턴할 값은 메모리를 동적 할당해주세요.
	int* answer = (int*)malloc(sizeof(int) * 11);

	for (int i = 0; i < 11; i++) {
		answer[i] = n % 10;
		n = n / 10;
	}

	return answer;
}