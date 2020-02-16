// Programmers 짝수와 홀수 - (https://programmers.co.kr/learn/courses/30/lessons/12937)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
	// 리턴할 값은 메모리를 동적 할당해주세요
	if (num % 2 == 0) {
		char* answer = (char*)malloc(sizeof(char) * 4);
		return answer = "Even";
	}
	else {
		char* answer = (char*)malloc(sizeof(char) * 3);
		return answer = "Odd";
	}
}