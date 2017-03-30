//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <queue>
//using namespace std;
//
//
//int N, K;
//queue<int> q;
//int visited[100001];
//
//int main()
//{
//	int BFS();
//	scanf("%d %d", &N, &K);
//	printf("%d", BFS());
//		
//	return 1;
//}
//
//int BFS()
//{
//	int p;
//
//	q.push(N);
//	visited[N] = 1;
//
//	while (!q.empty()){
//		
//		p = q.front();
//		q.pop();
//		if (p == K)
//			return visited[K] - 1;
//	
//		//세 가지 경우 모두 탐색(모든 경우의 수 따짐)
//		if (p - 1 >= 0 && visited[p - 1] == 0)
//		{
//			q.push(p - 1);
//			visited[p - 1] = visited[p] + 1;
//		}
//		if (p + 1 <= 100000 && visited[p + 1] == 0)
//		{
//			q.push(p + 1);
//			visited[p + 1] = visited[p] + 1;
//		}
//		if (p * 2 <= 100000 && visited[p * 2] == 0)
//		{
//			q.push(p * 2);
//			visited[p * 2] = visited[p] + 1;
//		}
//	}
//
//}