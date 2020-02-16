// Programmers 2016�� - (https://programmers.co.kr/learn/courses/30/lessons/12901)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
	// ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
	char* answer = (char*)malloc(sizeof(char));
	int day = b;

	for (int i = 0; i < a - 1; i++) {
		if (i == 1) day += 29;
		else if (i < 7) {
			if (i % 2 == 0) day += 31;
			else day += 30;
		}
		else {
			if (i % 2 == 0) day += 30;
			else day += 31;
		}
	}

	switch (day % 7) {
	case 0:
		answer = "THU";
		break;
	case 1:
		answer = "FRI";
		break;
	case 2:
		answer = "SAT";
		break;
	case 3:
		answer = "SUN";
		break;
	case 4:
		answer = "MON";
		break;
	case 5:
		answer = "TUE";
		break;
	case 6:
		answer = "WED";
		break;
	}
	return answer;
}