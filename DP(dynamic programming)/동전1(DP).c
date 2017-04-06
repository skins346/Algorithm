//상당히 어려움 (점화식 세우기가 어렵고, 메모리 할당량 고려 어려움) 
//첫번째 꺼는 메모리 고려 안하고 푼거
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
//			if (j - coin[i] < 0)  //K원이 음수일때는 무시 
//				dp[i][j] = dp[i - 1][j];
//
//			else if (j - coin[i] == 0)  //0원을 만드는 경우의 수는 아무것도 선택을 안하는 1가지
//				dp[i][j] = 1 + dp[i - 1][j];
//
//			else
//				dp[i][j] = dp[i][j - coin[i]] + dp[i - 1][j];   //dp[n][k] -> n개의 동정으로 k원을 만들수 있는 경우의 수 
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

//두번쨰꺼는 메모리고려해서 배열 다시 생각해서 푼거(이걸로 제출)
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
//			if (temp < 0)  //K원이 음수일때는 무시 
//				dp[1][j] = dp[0][j];
//
//			else if (temp == 0)  //0원을 만드는 경우의 수는 아무것도 선택을 안하는 1가지
//				dp[1][j] = 1 + dp[0][j];    
//			
//			else 
//				dp[1][j] = dp[1][temp] + dp[0][j];   //dp[n][k] -> n개의 동정으로 k원을 만들수 있는 경우의 수 
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