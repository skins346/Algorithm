////2017-05-06
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <algorithm>
//#include <queue>
//#include <stack> 
//#include <cstring> 
//
//
//using namespace std;
//
//int N, M, start;
//queue <int >  q;
//int arr[1001][1001];
//bool visited[1001];
//
//void dfs(int v)
//{
//	visited[v] = true;
//	printf("%d ", v);
//	for (int i = 1; i < 1001; i++){
//
//		if (!visited[i] && arr[v][i] == 1){
//			dfs(i);
//		}
//
//	}
//
//}
//
//void bfs()
//{
//	while (!q.empty()){
//
//		int v = q.front();
//		q.pop();
//		printf("%d ", v);
//		
//		for (int i = 1; i < 1001; i++){
//
//			if (!visited[i] && arr[v][i] == 1){
//				q.push(i);
//				visited[i] = true;
//			}
//		}
//	}
//
//
//}
//int main()
//{
//
//	scanf("%d %d %d", &N, &M, &start);
//	memset(visited, false, sizeof(visited));
//
//	for (int i = 0; i < M; i++){
//		int n, n2;
//		scanf("%d %d", &n, &n2);
//		
//		arr[n][n2] = 1;
//		arr[n2][n] = 1;
//		
//		if (i == 0){
//			q.push(start);
//		}
//	}
//	
//	dfs(start);
//	printf("\n");
//	
//	memset(visited, false, sizeof(visited));
//	visited[start] = true; 
//	bfs();
//
//	return 0;
//}
//
