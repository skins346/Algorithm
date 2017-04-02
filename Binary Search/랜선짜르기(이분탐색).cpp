//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <climits>
//int main(void){
//	int N, K;
//	long long lan[10001] = {0,};
//	long long max = 0;
//	scanf("%d %d", &K, &N);
//	for (int i = 0; i < K; i++)
//		scanf("%lld", &lan[i]);
//
//	long long left = 0;
//	long long right = LLONG_MAX;
//
//	while (left <= right){
//		long long mid = (left + right) / 2;
//		int result = 0;
//
//		for (int i = 0; i < K; i++)
//			result += lan[i] / mid;
//
//		if (result >= N)
//		{
//			left = mid + 1;
//			if (mid > max)
//				max = mid;
//		}
//		else
//			right = mid - 1;
//
//	}
//
//	printf("%lld\n", max);
//
//
//	return 0;
//}
//
////////////////////////////////////////////////////////////////////////////////
//내가 푼거   //데이터 크기 (int, llang 차이를 모르겠음)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <climits>

int N, K;
long long length[10000];
long long max = 0;

void cal(long long left, long long right)
{	
	while (left <= right)
	{
		long long  mid = (left + right) / 2;
		long long result = 0;

		for (int i = 0; i < K; i++)
			result = result + (length[i] / mid);

		if (result >= N)
		{
			left = mid + 1;
			
			if (mid > max)
				max = mid;
		}
		else
			right = mid - 1;
	}

}

int main()
{
	scanf("%d %d", &K, &N);

	for (int i = 0; i < K; i++)
		scanf("%ld", &length[i]);

	cal(0, LLONG_MAX);

	printf("%d", max);

	return 1;

}