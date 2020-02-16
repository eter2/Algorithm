// Programmers 자릿수 더하기 - (https://programmers.co.kr/learn/courses/30/lessons/12931)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
	int answer = 0;

	while (1) {
		if (n <= 0) break;
		else {
			answer += n % 10;
			n = n / 10;
		}
	}
	return answer;
}
