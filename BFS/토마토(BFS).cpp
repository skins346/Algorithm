//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <queue>
//
//using namespace std;
//
//int M, N;
//int tomato[1001][1001];
//int dx[5] = {0, 0, 0, -1, 1 };   //x ����
//int dy[5] = {0, -1, 1, 0, 0 };   //y ����
//
//struct Point{
//	int x, y;
//};
//
//queue<Point> q;
//
//
//int main()
//{
//	int cal();
//
//	scanf("%d %d", &M, &N);
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= M; j++)
//		{
//			scanf("%d", &tomato[i][j]);
//			if (tomato[i][j] == 1)
//			{
//				struct Point p;   //������ �丶�� ť�� ����
//				p.x = i;
//				p.y = j;
//				q.push(p);
//			}
//			
//		}	
//	}
//	
//	printf("%d", cal());
//	
//	return 1;
//}
//
//int cal()
//{
//	int day;
//	
//	while (! q.empty())
//	{
//		struct Point p = q.front();
//		q.pop();
//
//		for (int i = 1; i <= 4; i++)
//		{
//
//			if (tomato[p.x + dx[i]][p.y + dy[i]] == 0 && (p.x + dx[i]) <= N && (p.x + dx[i]) >= 1 && (p.y + dy[i]) <= M && (p.y + dy[i]) >= 1)//������ �丶�� ã�� 
//			{
//				day = tomato[p.x][p.y] + 1;   //���� �ɸ����� ����
//				tomato[p.x + dx[i]][p.y + dy[i]] = day;
//				
//				struct Point p2;
//				p2.x = p.x + dx[i];
//				p2.y = p.y + dy[i];				
//				q.push(p2);   //ť�� ������ �丶�� ��ġ ����
//			}			
//		}
//
//	}
//
//	//��ü �丶�䰡 �� �;����� �˻�
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= M; j++)		
//			if (tomato[i][j] == 0) //������ �丶�� �߰��� ��� -1 return
//					return -1;
//	}
//	
//	return day-1;  //day�ʱⰪ�� 1�̶� �������� 1����
//}
//
