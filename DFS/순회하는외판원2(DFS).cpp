////2017-04-07
////41�����ٿ��� �ظ�
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
//	if (cnt == N-1)  //���ǿ� ��ȸ�Ϸ�(ó�� �������� �ǵ��� ���� �κ�)
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
//		if (visited[j] == 1 || W[cur][j] == 0)//���� �ִ� ���̸鼭 �湮���� ���� ��
//			continue;
//
//		visited[j] = 1;
//		sum = sum + W[cur][j];
//		cnt++;
//		
//		cal(first, j, sum, cnt);
//		
//		cnt--;               //�ٽ� ���� ���� �ϴ� �κ��� ĳġ ���ؼ� �ظ���
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