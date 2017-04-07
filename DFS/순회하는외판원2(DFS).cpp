////2017-04-07
////41번쨰줄에서 해맴
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <limits.h>
//
//int	W[11][11];
//int visited[11];
//
//int N;
//int min= INT_MAX;
//
//void cal(int first, int cur, int sum, int cnt)
//{
//	if (cnt == N-1)  //외판원 순회완료(처음 지점으로 되돌아 가는 부분)
//	{
//		if (W[cur][first] != 0)
//		{
//			sum = sum + W[cur][first];
//			if (sum < min)
//				min = sum;
//		}
//
//		return;
//	}
//
//
//	for (int j = 1; j <= N; j++){
//	
//		if (visited[j] == 1 || W[cur][j] == 0)//갈수 있는 곳이면서 방문하지 않은 곳
//			continue;
//
//		visited[j] = 1;
//		sum = sum + W[cur][j];
//		cnt++;
//		
//		cal(first, j, sum, cnt);
//		
//		cnt--;               //다시 원상 복구 하는 부분을 캐치 못해서 해맸음
//		sum = sum - W[cur][j];
//		visited[j] = 0;
//
//	}
//	
//}
//
//int main()
//{	
//	scanf("%d", &N);
//	
//	for (int i = 1; i <= N; i++)
//		for (int j = 1; j <= N; j++)	
//			scanf("%d", &W[i][j]);
//
//	visited[1] = 1;
//	cal(1,1,0,0);
//
//	printf("%d\n", min);
//
//	return 1;
//}