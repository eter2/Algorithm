//Baekjoon 빠른 A+B (https://www.acmicpc.net/problem/15552)

#include <stdio.h>

int main() {
	int t;

	scanf("%d", &t);

	while (t--) {
		int a, b;

		scanf("%d %d", &a, &b);

		printf("%d\n", a + b);
	}

	return 0;
}
