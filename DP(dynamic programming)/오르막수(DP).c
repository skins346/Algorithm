////이문제도 int 범위 넘어가서 mod연산 해주는거 필요 !
////2017-04-06
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////D[N][L] = D[N-1][K] 0<=K<=L
//
//int N;
//long long D[1001][10];
//
//void cal(){
//
//
//	for (int i = 1; i <= N; i++)
//		for (int j = 0; j <= 9; j++)
//			for (int k = 0; k <= j; k++)
//			{
//				D[i][j] = D[i][j] + D[i - 1][k];
//				D[i][j] %= 10007;
//			}	
//	
//	
//}
//
//int main()
//{
//	scanf("%d", &N);
//	D[0][0] = 1;
//
//	cal();
//
//	long long result = 0;
//	for (int i = 0; i <= 9; i++)
//		result += D[N][i];
//	
//	result %= 10007;
//
//	printf("%ld", result);
//	return 1;
//}
