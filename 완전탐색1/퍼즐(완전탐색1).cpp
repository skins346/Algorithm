//못품

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <deque>
//
//using namespace std;
//
//int arr[10][10];
//int visited[10][10];
//
//deque<pair<int,int>> q;
//int dx[] = { 0, 1, 0, -1 };// 동남서북  //최소 경로기때문에 동쪽 남쪽부터 먼저 살펴야 
//int dy[] = { 1, 0, -1, 0 };
//
//void cal()
//{
//	
//	while (!q.empty()){
//		
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop_front();
//
//		for (int i = 0; i < 4; i++){
//			
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			
//			if (nx < 1 || ny < 1 || nx > 3 || ny > 3)
//				continue;
//			
//			if (visited[nx][ny] == 0){    //방문 하지 않았을때
//				q.push_back(make_pair(nx, ny));
//				visited[nx][ny] = visited[x][y] +  1;
//			}
//
//			if (nx == 3 && ny == 3)
//				return;
//		
//		}
//	}
//	
//}
//int main()
//{
//	for (int i = 1; i <= 3; i++)
//		for (int j = 1; j <= 3; j++){
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] == 0)
//				visited[i][j] = 1;
//		}
//		
//	
//	q.push_back(make_pair(1, 1));
//	cal();
//
//	if (visited[3][3] != 0)
//		printf("%d", visited[3][3] - 1);
//	else
//		printf("-1");
//
//}
//
