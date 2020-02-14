// programmers - 소수 만들기(https://programmers.co.kr/learn/courses/30/lessons/12977)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int nums[], size_t nums_len);
bool prime(int sum);

int main() {
	int array1[] = { 1,2,7,6,4 };
	printf("%d", solution(array1, sizeof(array1) / sizeof(int)));
	return 0;
}

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
