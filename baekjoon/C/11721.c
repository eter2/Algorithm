//Baekjoon 열 개씩 끊어 출력하기 (https://www.acmicpc.net/problem/11721)

#include <stdio.h>
#include <string.h>

int main() {
	char arr[101];
	scanf("%s", arr);

	int length = strlen(arr);
	int k = 0;
	for (int i = 0; i < length; i++) {
		printf("%c", arr[i]);
		k++;
		if (k == 10) {
			printf("\n");
			k = 0;
		}
	}

	return 0;
}