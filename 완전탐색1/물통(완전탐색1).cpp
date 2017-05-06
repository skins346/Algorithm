////2017-05-06
////memeset 쓸라면 cstring 헤더파일 사용해야함 !
//#include <iostream> 
//#include <queue> 
//#include <cstring>
//
//using namespace std;
//
//queue <pair<int, int>> q;
//
//int a, b, c;
//int sum; 
//bool check[201];
//bool visited[201][201];
//
//void solve(){
//
//	while (!q.empty()){
//	
//		int x = q.front().first;
//		int y = q.front().second;
//		int z = sum - (x + y);
//
//		q.pop();
//
//		// x-> y
//		int nx = 0;
//		int ny = y + x;		
//		int nz = z; 	
//		if (ny > b){	
//			nx = ny - b;
//			ny = b;
//		}
//		if (visited[nx][ny] == false){
//			
//			visited[nx][ny] = true; 
//			q.push(make_pair(nx, ny));
//			if (nx == 0 )
//				check[nz] = true;
//		}
//		
//		// x->z
//		nx = 0; 
//		ny = y; 
//		nz = z + x; 
//		if (nz > c){
//			nx = nz - c;
//			nz = c;
//		}
//		if (visited[nx][ny] == false){
//		
//			visited[nx][ny] = true;
//			q.push(make_pair(nx, ny));
//			if (nx == 0)
//			check[nz] = true;
//		}
//			
//
//		// y->z
//		nx = x; 
//		ny = 0;
//		nz = z + y;
//		if (nz > c){
//			ny = nz - c;
//			nz = c;
//		}
//		if (visited[nx][ny] == false){
//			visited[nx][ny] = true;
//			q.push(make_pair(nx, ny));
//			if (nx == 0)
//			check[nz] = true;
//		}
//
//
//		// y->x
//		nx = x + y;
//		ny = 0;
//		nz = z;
//		if (nx > a){
//			ny = nx - a ;
//			nx = a;
//
//		}
//		if (visited[nx][ny] == false){
//			visited[nx][ny] = true;
//			q.push(make_pair(nx, ny));
//			if (nx == 0)
//			check[nz] = true;
//		}
//
//		// z->x
//		nx = x + z;
//		ny = y;
//		nz = 0;
//		if (nx > a){
//			nz = nx - a;
//			nx = a;
//		}
//		if (visited[nx][ny] == false){
//			visited[nx][ny] = true;
//			q.push(make_pair(nx, ny));
//			if (nx == 0)
//			check[nz] = true;
//		}
//		
//		// z->y
//		nx = x; 
//		ny = y + z;
//		nz = 0;
//		if (ny > b){
//			nz = ny - b;
//			ny = b;
//		}
//		if (visited[nx][ny] == false){
//			visited[nx][ny] = true;
//			q.push(make_pair(nx, ny));
//			
//			if (nx == 0)
//			check[nz] = true;
//		}
//
//
//	}
//	
//
//}
//
//int main(){
//
//	cin >> a >> b >> c;
//
//	sum =  c;
//	memset(visited, false, sizeof(visited));
//	memset(check, false, sizeof(check));
//	visited[0][0] = true;
//	check[c] = true;
//	q.push(make_pair(0, 0));
//
//
//	solve();
//
//	for (int i = 0; i <= c; i++)
//		if (check[i] == true)
//			cout << i << " ";
//
//
//	return 0;
//}
