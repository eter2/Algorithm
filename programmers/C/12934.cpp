// Programmers ���� ������ �Ǻ� - (https://programmers.co.kr/learn/courses/30/lessons/12934)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
	long long answer = -1;

	for (long long i = 1; i * i <= n; i++) {
		if (i * i == n) {
			answer = (i + 1) * (i + 1);
			break;
		}
	}

	return answer;
}