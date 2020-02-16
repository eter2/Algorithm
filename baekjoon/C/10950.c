//Baekjoon A+B-3 (https://www.acmicpc.net/problem/10950)

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