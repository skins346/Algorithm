////2017-04-06
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////D[N][L] = D[N-1][L-1] + D[N-1][L+1]
////int ���� ���� �Ű澵�� -> long long ���
//int N;
//long long  D[101][10];
//
//void cal()
//{
//	for (int i =1; i <= 9; i++)
//		D[1][i] = 1;
//
//	for (int i = 2; i <= N; i++)
//	{
//		for (int j = 0; j <= 9; j++)
//		{
//			if (j - 1 >= 0)  //�̺κ��� �߿�!
//				D[i][j] += D[i - 1][j - 1];
//			if (j+1 <= 9)
//				D[i][j] += D[i - 1][j + 1];
//			
//			D[i][j] %= 1000000000;
//		}
//	}
//}
//	
//int main()
//{
//	scanf("%d", &N);
//	cal();
//	long long result = 0;
//
//	for (int i = 0; i <= 9; i++)
//		result += D[N][i];
//	
//	result %= 1000000000;
//	printf("%ld",result );
//	return 1;
//}