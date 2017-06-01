//#define _CRT_SECURE_NO_WARNINGS
//// 2017-06-01
//#include <iostream> 
//#include <vector> 
//#include <algorithm>
//
//using namespace std;
//
//int N;
//int cnt=0;
//int arr[25][25];
//bool visited[25][25];
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//
//vector<int> v;
//
//int cnt2 = 0;
//
//void dfs(int x, int y , int cnt){
//	
//	cnt2++;
//
//	visited[x][y] = true;
//
//	for (int i = 0; i < 4; i++){
//		
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//		if (nx >= 0 && nx < N && ny >= 0 && ny < N){
//		
//			if (arr[nx][ny] == 1 && visited[nx][ny] == false)
//				dfs(nx, ny, cnt);
//		}
//	}
//	
//	
//
//}
//int main(){
//	
//	cin >> N;
//	
//	for (int i = 0; i < N; i++){	
//		for (int j = 0; j < N; j++){
//			//cin >> arr[i][j]; //이렇게 사용하면 input 못받음
//			scanf("%1d", &arr[i][j]);
//			visited[i][j] = false;
//		}
//	}
//	
//
//	for (int i = 0; i < N;i++){
//		for (int j = 0; j < N; j++){
//			if (arr[i][j] == 1 && visited[i][j] == false){
//				dfs(i, j, ++cnt);
//				v.push_back(cnt2);
//				cnt2 = 0;
//			}
//				
//		}
//	}
//
//	cout << cnt << "\n";
//
//	sort(v.begin(), v.end());
//
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << "\n";
//
//	return 0;
//}