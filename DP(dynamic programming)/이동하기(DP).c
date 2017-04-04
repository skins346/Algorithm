//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int DP[1001][1001];
//int map[1001][1001];
//int N, M;
//
//void dp()
//{
//	for (int i = 1; i <= N; i++){
//		for (int j = 1; j <= M; j++){
//			
//			if (DP[i][j - 1] > DP[i - 1][j])
//				DP[i][j] = DP[i][j - 1] + map[i][j];
//			else
//				DP[i][j] = DP[i - 1][j] + map[i][j];
//		}
//	}
//}
//
//int main()
//{
//	scanf("%d %d", &N, &M);
//	for (int i = 1; i <= N; i++)
//		for (int j = 1; j <= M; j++)
//			scanf("%d", &map[i][j]);
//	
//	dp();
//	printf("%d", DP[N][M]);
//	return 0;
//}
