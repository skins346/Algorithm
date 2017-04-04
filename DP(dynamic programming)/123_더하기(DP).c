//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int D[10];
//int result[10];
//
//int main()
//{
//	int cal(int);
//
//	int T;
//	int num;
//	scanf("%d", &T);
//
//	D[1] = 1;
//	D[2] = 2;
//	D[3] = 4;
//
//	for (int i = 0; i < T; i++)
//	{
//		scanf("%d", &num);
//		result[i] = cal(num);
//	}
//
//	for (int i = 0; i < T; i++)
//		printf("%d\n", result[i]);
//
//	return 0;
//}
//
//int cal(int num){
//
//	for (int i = 3; i<= num;i++)
//	{
//		if (D[i] > 0)
//			continue;
//
//		D[i] = D[i - 1] + D[i - 2] + D[i - 3];
//	}
//	
//	return D[num];
//}