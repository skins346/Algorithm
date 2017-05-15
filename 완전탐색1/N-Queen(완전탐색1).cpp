//2017-05-09
//방법1
//#include <iostream> 
//#include <cstring> 
//
//using namespace std;
//int N;
//bool visited[15][15];
//int ans;
//
//bool check(int row, int col){
//
//	int x = row-1;
//	int y = col+1;
//
//	// 대각선 / 
//	while (x >= 0 && y  < N){
//		if (visited[x][y] == true)
//			return false;
//		
//		x--;
//		y++;
//	}
//		
//	// 대각선 /반대
//	x = row-1; 
//	y = col-1;
//	while (x >= 0 && y >= 0){
//		if (visited[x][y] == true)
//			return false;
//
//		x--;
//		y--;
//	}
//
//	//// 윗방향
//	x = row-1;
//	y = col;
//	while (x >= 0 ){
//		if (visited[x][y] == true)
//			return false;
//		x--;
//	}
//
//	return true;
//}
//
//void solve(int row){
//
//	if (row == N){
//		ans++;
//		return;
//	}
//	
//	for (int i = 0; i < N; i++){
//	
//		visited[row][i] = true;
//		if (check(row,i))
//			solve(row+1);
//
//		visited[row][i] = false;
//	}
//}
//
//int main(){
//
//	cin >> N;
//	memset(visited, false, sizeof(visited));
//	solve(0);
//	cout << ans;
//
//	return 0;
//}

