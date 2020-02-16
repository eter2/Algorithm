// Programmers - N개의 최소공배수(https://programmers.co.kr/learn/courses/30/lessons/12953)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
	int answer = 0;

	for (int i = 0; i < arr_len; i++) {
		if (i == 0 || i == 1) answer = (arr[0] * arr[1]) / gcd(arr[0], arr[1]);
		else answer = (answer * arr[i]) / gcd(answer, arr[i]);
	}

	return answer;
}

int gcd(int num1, int num2) {
	if (num2 == 0) return num1;
	else return gcd(num2, num1 % num2);
}