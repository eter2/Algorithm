// Baekjoon 별찍기 - 1 (https://www.acmicpc.net/problem/2438)

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
