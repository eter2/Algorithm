//Baekjoon X보다 작은 수 (https://www.acmicpc.net/problem/10871)

#include <stdio.h>
#include <string.h>

int main() {
	int n, x;
	int arr[10000];
	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] < x) printf("%d ", arr[i]);
	}

	return 0;
}