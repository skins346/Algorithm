//����� ����� (��ȭ�� ����Ⱑ ��ư�, �޸� �Ҵ緮 ��� �����) 
//ù��° ���� �޸� ��� ���ϰ� Ǭ��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int N, K;
//int coin[101];
//int dp[101][10001];
//
//void cal()
//{
//	for (int i = 1; i <= K; i++)
//		if (i % coin[1] == 0)
//			dp[1][i] = 1;
//
//
//	for (int i = 2; i <= N; i++)
//	{
//		for (int j = 1; j <= K; j++)
//		{
//			if (j - coin[i] < 0)  //K���� �����϶��� ���� 
//				dp[i][j] = dp[i - 1][j];
//
//			else if (j - coin[i] == 0)  //0���� ����� ����� ���� �ƹ��͵� ������ ���ϴ� 1����
//				dp[i][j] = 1 + dp[i - 1][j];
//
//			else
//				dp[i][j] = dp[i][j - coin[i]] + dp[i - 1][j];   //dp[n][k] -> n���� �������� k���� ����� �ִ� ����� �� 
//		}
//	}
//}
//
//int main()
//{
//	scanf("%d %d", &N, &K);
//
//	for (int i = 1; i <= N; i++)
//		scanf("%d", &coin[i]);
//
//	cal();
//
//	printf("%d", dp[N][K]);
//}
//////////////////////////////////////////////////////////////////////////

//�ι������� �޸𸮰���ؼ� �迭 �ٽ� �����ؼ� Ǭ��(�̰ɷ� ����)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int N, K;
//int coin[101];
//int dp[2][10001];
//
//void cal()
//{
//	for (int i = 1; i <= K; i++)
//		if (i % coin[1] == 0)
//			dp[1][i] = 1;
//
//
//	for (int i = 2; i <= N; i++)
//	{
//		for (int q = 1; q <= K; q++)
//			dp[0][q] = dp[1][q];
//
//		for (int j = 1; j <= K; j++)
//		{
//			int temp = j - coin[i];
//
//			if (temp < 0)  //K���� �����϶��� ���� 
//				dp[1][j] = dp[0][j];
//
//			else if (temp == 0)  //0���� ����� ����� ���� �ƹ��͵� ������ ���ϴ� 1����
//				dp[1][j] = 1 + dp[0][j];    
//			
//			else 
//				dp[1][j] = dp[1][temp] + dp[0][j];   //dp[n][k] -> n���� �������� k���� ����� �ִ� ����� �� 
//		}
//	}
//}
//
//int main()
//{
//	scanf("%d %d",&N,&K);
//
//	for (int i = 1; i <= N; i++)
//		scanf("%d",&coin[i]);
//
//	cal();
//
//	printf("%d", dp[1][K]);
//}