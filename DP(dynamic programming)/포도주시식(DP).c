//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int arr[10001];
//int A[10001];
//int D[10000][3];
//
//int main()
//{
//	int cal(int);
//	int num;
//	scanf("%d", &num);
//
//	for (int i = 1; i <= num; i++)
//	{
//		scanf("%d", &arr[i]);
//		A[i] = arr[i];	
//	}
//
//	printf("%d", cal(num));
//
//	return 1;
//}
//
//int cal(int num){
//
//	int max;
//	
//	for (int i = 1; i <= num; i++)
//	{
//
//		for (int j = 0; j <= 2; j++)
//		{
//			if (j == 0){
//				max = D[i - 1][0];
//				
//				for (int k = 1; k < 3; k++)
//				{
//					if (D[i - 1][k] > max)
//						max = D[i - 1][k];
//				}
//				D[i][j] = max;
//			}
//			else if (j == 1 ){
//				D[i][j] = D[i - 1][0] + A[i];
//			}
//			else if (j == 2 ){
//				D[i][j] = D[i - 1][1] + A[i];
//			}
//		
//		}
//	}
//
//	max = D[num][0];
//
//	for (int i = 1; i <= 2; i++)
//	{
//		if (D[num][i] > max)
//			max = D[num][i];
//	}
//
//	return max;
//}
//	
