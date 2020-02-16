// Programmers 피보나치 수 - (https://programmers.co.kr/learn/courses/30/lessons/12945)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
	int answer = 0;
	int num1 = 1, num2 = 0;

	for (int i = 0; i < n; i++) {
		if (n < 2) return n;
		else {
			answer = (num1 + num2) % 1234567;
			num1 = num2;
			num2 = answer;
		}
	}

	return answer % 1234567;
}
