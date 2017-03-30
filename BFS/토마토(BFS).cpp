//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <queue>
//
//using namespace std;
//
//int M, N;
//int tomato[1001][1001];
//int dx[5] = {0, 0, 0, -1, 1 };   //x 방향
//int dy[5] = {0, -1, 1, 0, 0 };   //y 방향
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
//				struct Point p;   //안익은 토마토 큐에 저장
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
//			if (tomato[p.x + dx[i]][p.y + dy[i]] == 0 && (p.x + dx[i]) <= N && (p.x + dx[i]) >= 1 && (p.y + dy[i]) <= M && (p.y + dy[i]) >= 1)//안익은 토마토 찾기 
//			{
//				day = tomato[p.x][p.y] + 1;   //몇일 걸리는지 저장
//				tomato[p.x + dx[i]][p.y + dy[i]] = day;
//				
//				struct Point p2;
//				p2.x = p.x + dx[i];
//				p2.y = p.y + dy[i];				
//				q.push(p2);   //큐에 안익은 토마토 위치 저장
//			}			
//		}
//
//	}
//
//	//전체 토마토가 다 익었는지 검사
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= M; j++)		
//			if (tomato[i][j] == 0) //안익은 토마토 발견한 경우 -1 return
//					return -1;
//	}
//	
//	return day-1;  //day초기값이 1이라서 마지막에 1빼줌
//}
//
