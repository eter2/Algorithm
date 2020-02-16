// Programmers - 직사각형 별찍기(https://programmers.co.kr/learn/courses/30/lessons/12969)

#include <stdio.h>

int main(void) {
	int n;
	int m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
