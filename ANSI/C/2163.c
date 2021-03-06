/*
Description


아주대학교 소학회 A.N.S.I.의 회장을 맡고 있는 대현이는 사람들에게 웃음을 주는 것을 좋아하지만 치명적인 약점을 가지고 있다. 그건 바로 개그를 하면 항상 썰렁한 분위기가 되어버리는 것이다! 이런 행동을 보다못해 소학회 회원들은 대현이에게 웃음을 선사할 수 있도록 도와주었지만 대현이는 나아질 기미가 없어 다들 포기했다.

하지만 포기하지 않고 N명의 착한 A.N.S.I. 회원들은 대현이를 재미있는 사람으로 만들기 위한 DHGM (DaeHyun GagMan) 프로젝트를 기획하였다. N명은 각자 M개씩 업무를 맡아서 프로젝트를 진행하기로 계획하였다. 총 N*M개의 업무들은 처리하는데 걸리는 시간이 각각 다르며, 각 업무를 마치는데 걸리는 예상 최소시간 A와 최대시간 B를 알고있다.

모든 입력 값이 주어졌을 때 전체 프로젝트가 끝나는 예상 시간의 최솟값과 최댓값을 출력하시오.


Input


첫 줄에 테스트케이스 T (1 ≦ T ≦ 100) 가 주어진다.

각 테스트케이스의 첫 번째 줄에는 프로젝트를 진행하기 위한 회원의 수 N (1 ≦ N ≦ 30) 과 각자 맡은 업무의 수 M (1 ≦ M ≦ 10) 이 주어진다.
그 다음 줄부터 N+1 번째 줄까지는 각 회원의 업무 M개가 주어진다. 각 업무는 처리하는 데 걸리는 최소시간 A와 최대시간 B가 주어진다. (A ≦ B, 1 ≦ A, B ≦ 100)

T
N M
A11 B11 ... A1M B1M
A21 B21 ... A2M B2M
︙
AN1 BN1 ... ANM BNM


Output


각 테스트 케이스마다 한 줄씩 프로젝트가 전체적으로 끝나는 최솟값 Pmin 과 최댓값 Pmax를 출력한다.
*/

#include <stdio.h>

int main()
{
	int T, N, M, k, min, max;
	int A[100], B[100];

	scanf("%d", &T);

	while (T--)
	{
		min = 0;
		max = 0;

		scanf("%d %d", &N, &M);

		for (int i = 0; i < N; i++)
		{
			k = 0;

			for (int j = 0; j < M; j++)
			{
				scanf("%d", &A[j]);
				scanf("%d", &B[j]);
			}

			for (int j = 0; j < M; j++)
			{
				k += A[j];
			}

			if (k >= min)
			{
				min = k;
			}

			k = 0;

			for (int j = 0; j < M; j++)
			{
				k += B[j];
			}

			if (k >= max)
			{
				max = k;
			}
		}

		printf("%d %d\n", min, max);
	}

	return 0;
}