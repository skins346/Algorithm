//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int D[1000000];
//int main()
//{
//	int num;
//	int cal(int);
//	scanf("%d", &num);
//	printf("%d", cal(num));
//}
//
//int cal(int num)
//{
//	int temp;
//
//	D[1] = 0;
//	
//	for (int i = 2; i <= num; i++)
//	{
//	
//		D[i] = D[i - 1] + 1;
//
//		if (i % 3 == 0)
//		{
//			temp = D[i / 3] + 1;
//			if (temp < D[i])
//				D[i] = temp;		
//		}
//		else if (i % 2 == 0)
//		{
//			temp = D[i / 2] + 1;
//			if (temp < D[i])
//				D[i] = temp;
//		}
//	}
//
//	return D[num];
//	
//}