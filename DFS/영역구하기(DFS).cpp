////2017-06-03
//
//#include <iostream>
//#include <string.h>
//#include <vector> 
//#include <algorithm>
//
//using namespace std;
//
//vector < int > v;
//int M, N, K;
//int arr[100][100];
//bool visited[100][100];
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//int sum = 1;
//int cnt = 0;
//
//void dfs(int x, int y){
//
//	visited[x][y] = true;
//
//	for (int i = 0; i < 4; i++){
//
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//		if (nx >= 0 && nx < M && ny >= 0 && ny < N){
//
//			if (arr[nx][ny] == 0 && visited[nx][ny] == false){
//				sum++;
//				dfs(nx, ny);
//			}
//		}
//	}
//
//	
//}
//int main(){
//
//
//	cin >> M >> N >> K;
//
//	for (int i = 0; i < K; i++){
//
//		int a, b, c, d;
//		cin >> a >> b >> c >> d;
//
//		c--;
//		d--;
//
//		for (int i = b; i <= d; i++){
//			for (int j = a; j <= c; j++){
//				arr[M-1-i][j] = 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < M; i++){
//	
//		for (int j = 0; j < N; j++){
//		
//			if (arr[i][j] == 0 && visited[i][j] == false){
//				dfs(i, j);
//				v.push_back(sum);
//				sum = 1;
//				cnt++;
//			}
//			
//		}
//	}
//
//	sort(v.begin(), v.end());
//
//	cout << cnt <<"\n";
//	for (int i = 0; i < v.size(); i++){
//		cout << v[i] << " ";
//	}
//
//	return 0;
//}