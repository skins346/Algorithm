////2017-06-01
//dfs
////(x,y), (row,col) 방향 헷갈리지 말것!
//#include <iostream> 
//#include <string.h>
//
//using namespace std;
//
//int T;
//int M, N, K;
//int arr[50][50];
//bool visited[50][50];
//
//
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//
//void dfs(int x, int y, int cnt){
//
//	visited[x][y] = true;
//
//	for (int i = 0; i < 4; i++){
//	
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//		if (nx >= 0 && nx < N && ny >= 0 && ny < M){
//		
//			if (visited[nx][ny] == false && arr[nx][ny] == 1)
//				dfs(nx, ny, cnt);
//			
//		}
//
//	}
//	
//}
//
//int main(){
//
//	cin >> T;
//
//	for (int i = 0; i < T; i++){
//
//		cin >> M >> N >> K;
//		memset(arr, 0, sizeof(arr));
//		memset(visited, false, sizeof(visited));
//		int cnt = 0;
//
//		for (int i = 0; i < K; i++){
//
//			int m, n;
//			cin >> m >> n;
//			arr[n][m] = 1;
//		}
//
//		for (int i = 0; i < N; i++){
//		
//			for (int j = 0; j < M; j++){
//				
//				if (visited[i][j] == false  && arr[i][j] == 1 )
//					dfs(i, j, ++cnt );
//			
//			}
//		}
//
//		cout << cnt << "\n"; 
//
//	}
//
//
//	return 0;
//}