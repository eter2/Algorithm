// Programmers ���ڼ��ڼ��ڼ��ڼ��ڼ�? - (https://programmers.co.kr/learn/courses/30/lessons/12922)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
	// ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
	char* answer = (char*)malloc(sizeof(char) * (n * 3) + 1);
	strcpy(answer, "��");

	for (int i = 1; i < n; i++) {
		if (i % 2 == 1) strcat(answer, "��");
		else strcat(answer, "��");
	}

	return answer;
}