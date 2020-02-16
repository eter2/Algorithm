//Baekjoon 그대로 출력하기 (https://www.acmicpc.net/problem/11718)

#include <stdio.h>

int main() {
	char input[101];
	while (fgets(input, 101, stdin))
		printf("%s", input);
	return 0;
}
