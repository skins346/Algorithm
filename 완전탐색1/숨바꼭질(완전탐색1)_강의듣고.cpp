////2017-05-04
////강의와 다르게 MAX의 범위 상관없을것 같음(MAX포함이어도 상관 없을것 같음)
//#include <iostream> 
//#include <deque>
//using namespace std; 
//
//const int MAX = 200000;
//bool check[MAX + 1];
//int dist[MAX + 1];
//deque<int> q; 
//int N, K;
//
//void solve(){
//
//	while (!q.empty()){
//	
//		int x = q.front();
//		q.pop_front();
//
//		if (x + 1 <= MAX && check[x+1] == false ){
//			q.push_back(x + 1);
//			check[x + 1] = true;
//			dist[x + 1] = dist[x] + 1;
//		}
//		if (x - 1 >= 0 && check[x-1] == false){
//			q.push_back(x - 1);
//			check[x - 1] = true;
//			dist[x - 1] = dist[x] + 1;
//		}
//		if (2 * x <= MAX && check[2*x] == false){
//			q.push_back(2 * x);
//			check[2 * x] = true;
//			dist[2 * x] = dist[x] + 1;
//		}		
//	}
//}
//
//
//int main()
//{
//	cin >> N >> K;
//	q.push_back(N);
//	check[N] = true;
//	
//	solve();
//
//	cout << dist[K];
//
//	return 0; 
//}