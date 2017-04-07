////2017-04-07
////int 범위 조심!
////2가지 방법 
////1.  D[N][0] = D[N-1][0] + D[N-1][1] , D[N][1] = D[N-1][0]
////2.  D[N] = D[N-1] + D[N-2]
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int N;
//long long D[91][2];
//
//void cal()
//{
//	for (int i = 2; i <= N; i++){
//
//		D[i][0] = D[i-1][0] + D[i - 1][1];
//		D[i][1] = D[i - 1][0];
//	}
//	
//}
//
//int main()
//{
//	D[1][0] = 0;
//	D[1][1] = 1;
//	scanf("%d", &N);
//	
//	cal();
//	printf("%ld", D[N][0] + D[N][1]);
//}