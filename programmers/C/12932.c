// Programmers �ڿ��� ������ �迭�� ����� - (https://programmers.co.kr/learn/courses/30/lessons/12932)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
	// ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
	int* answer = (int*)malloc(sizeof(int) * 11);

	for (int i = 0; i < 11; i++) {
		answer[i] = n % 10;
		n = n / 10;
	}

	return answer;
}