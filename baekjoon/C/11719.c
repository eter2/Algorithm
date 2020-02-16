//Baekjoon 그대로 출력하기 2 (https://www.acmicpc.net/problem/11719)

#include <stdio.h>

int main() {
	char input[101];
	while (fgets(input, 101, stdin))
		printf("%s", input);
	return 0;
}