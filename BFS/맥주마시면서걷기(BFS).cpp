//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h> 
//#include <queue>
//#include <vector>
//#include <stdlib.h>
//using namespace std;
//struct Data{
//	int x;
//	int y;
//	int visted;
//};
//
//deque<pair<int ,int>> q; 
//vector<Data> v;
//
//int t;
//int a, b;
//int n;
//
//int solve()
//{
//	while (!q.empty()){
//		int x = q.front().first;
//		int y = q.front().second;
//
//		q.pop_front();
//
//		if (x == v[v.size() - 1].x && y == v[v.size() - 1].y){
//
//			return 1;
//		}
//
//
//		for (int i = 0; i < v.size(); i++){
//
//			int nx = v[i].x;
//			int ny = v[i].y;
//
//			if (v[i].visted == 1)
//				continue;
//
//			if (abs(x - nx) + abs(y - ny) <= 1000){
//				v[i].visted = 1;
//				q.push_back(make_pair(nx, ny));
//			}
//		}
//	}
//
//	return 0;
//
//}
//
//int main()
//{	
//	scanf("%d", &t); 
//	
//	while (t != 0){
//
//		scanf("%d", &n);
//		for (int i = 0; i < n+2; i++){
//			scanf("%d %d", &a, &b);
//			if (i != 0){
//			
//				struct Data data;
//				data.x = a;
//				data.y = b;
//				v.push_back(data);
//			}
//			else
//			    q.push_back(make_pair(a, b));
//		}
//
//		if (solve() == 1)
//			printf("happy\n");
//		else
//			printf("sad\n");
//		
//		v.clear();
//		q.clear();
//		t--;
//			
//	}
//
//	return 1;
//}
//
//
//
