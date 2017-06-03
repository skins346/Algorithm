////2017-06-03
////비가 안내리는 경우도 고려해야함 
//
//
//#include <iostream> 
//#include <queue>
//#include <string.h>
//
//using namespace std;
//
//queue<pair<int,int>> q;
//
//int N;
//int arr[100][100];
//bool visited[100][100];
//int dx[] = { -1, 1, 0, 0 };
//int dy[] = { 0, 0, 1, -1 };
//int ans = 0;
//int cnt = 0;
//
//void bfs(int h){
//
//	while (!q.empty()){
//	
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//
//		for (int i = 0; i < 4; i++){
//			
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//		
//			if (nx >= 0 && ny >= 0 && nx < N && ny < N){
//			
//				if (arr[nx][ny] > h && visited[nx][ny] == false){
//					visited[nx][ny] = true;
//					q.push(make_pair(nx, ny));
//				}
//			}
//		}
//		
//	
//	}
//}
//
//int main(){
//
//	cin >> N;
//	int max = 0;
//
//	for (int i = 0; i < N; i++){
//	
//		for (int j = 0; j < N; j++){
//			cin >> arr[i][j];
//			if (arr[i][j] > max)
//				max = arr[i][j];
//
//		}
//	}
//	
//	
//	for (int h = max; h >= 0; h--){
//
//		while (!q.empty())
//			q.pop();
//		memset(visited, false, sizeof(visited));
//		cnt = 0;
//
//		for (int i = 0; i < N; i++){
//
//			for (int j = 0; j < N; j++){
//
//				if (arr[i][j] > h && visited[i][j] == false){
//					q.push(make_pair(i, j));
//					visited[i][j] = true;
//					bfs(h);
//					cnt++;
//				}
//			}
//		}
//
//		if (cnt > ans)
//			ans = cnt;
//
//	}
//	
//
//	cout << ans;
//		
//	return 0;
//}
