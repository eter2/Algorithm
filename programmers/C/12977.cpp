// programmers - 소수 만들기(https://programmers.co.kr/learn/courses/30/lessons/12977)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool prime(int sum);

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
	int answer = 0;
	for (int i = 0; i < nums_len - 2; i++) {
		for (int j = i+1; j < nums_len - 1; j++) {
			for (int k = j + 1; k < nums_len; k++) {				
				if (prime(nums[i] + nums[j] + nums[k])) answer++;
			}
		}
	}
	return answer;
}

bool prime(int sum) {
	for (int i = 2; i < sum; i++) {
		if (sum % i == 0) return false;
	}
	return true;
}
