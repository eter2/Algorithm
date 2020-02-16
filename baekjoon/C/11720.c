//Baekjoon 숫자의 합 (https://www.acmicpc.net/problem/11720)

#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);

	char arr[101];
	scanf("%s", arr);

	int length = strlen(arr);
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i] - '0';

	printf("%d", sum);

	return 0;
}
