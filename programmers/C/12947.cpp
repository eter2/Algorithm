// Programmers 하샤드 수 - (https://programmers.co.kr/learn/courses/30/lessons/12947)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int solution(int num);

int main()
{
	int num;

	scanf("%d", &num);

	if (solution(num) == 1) printf("true");
	else printf("false\n");


	return 0;
}

int solution(int num) {
	if (num <= 0) return 0;
	else if (num < 10) return 1;
	else {
		int locate = 0;
		int arr[5] = { 0 };
		int num2 = num;
		int sum = 0;
		
		while (num2 > 0) {
			arr[locate] = num2 % 10;
			num2 = num2 / 10;
			locate++;
		}

		locate = 0;

		while (1) {
			if (locate == 0 && arr[locate] == 0) {
				locate++;
				continue;
			}
			else if (locate == 5) break;
			else {
				sum += arr[locate];
				locate++;
			}
		}

		if (num % sum == 0) return 1;
		else return 0;

	}
} 
