//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <climits>
//
//int N, M;
//long long arr[1000000];
//long long max = 0;
//
//void cal(long long left, long long right)
//{
//	while (left <= right)
//	{
//		long long result = 0;
//
//		long long mid = (left + right) / 2;
//		
//		for (int i = 0; i < N; i++){
//			long long temp = arr[i] - mid;
//			
//			if (temp > 0 )
//				result = result + temp;
//		}
//
//		if (result >= M){
//			left = mid + 1;
//			if (mid > max)
//				max = mid;
//		}
//		
//		else
//			right = mid - 1;		
//	}
//
//}
//
//int main()
//{
//	scanf("%d %d",&N,&M);
//	
//	for (int i = 0; i < N; i++)
//		scanf("%ld", &arr[i]);
//
//	cal(0,  LLONG_MAX);
//
//	printf("%d",max);
//	
//	return 1; 
//
//}
//
