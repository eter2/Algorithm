// Programmers ¦���� Ȧ�� - (https://programmers.co.kr/learn/courses/30/lessons/12937)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
	// ������ ���� �޸𸮸� ���� �Ҵ����ּ���
	if (num % 2 == 0) {
		char* answer = (char*)malloc(sizeof(char) * 4);
		return answer = "Even";
	}
	else {
		char* answer = (char*)malloc(sizeof(char) * 3);
		return answer = "Odd";
	}
}