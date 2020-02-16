// Programmers - 콜라츠 추측 (https://programmers.co.kr/learn/courses/30/lessons/12943)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long num) {
	int answer = -1;
	int t = 0;

	while (t < 500) {
		if (num == 1) return t;
		else if (num % 2 == 0) num = num / 2;
		else num = num * 3 + 1;
		t++;

		if (num == 1) return t;
	}

	return answer;
}
