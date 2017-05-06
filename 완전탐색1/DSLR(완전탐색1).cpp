//
////2017-05-06
////how를 출력하는게 어렵네.. 
//
//#include <iostream> 
//#include <deque>
//#include <string> 
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//bool check[100000];
//char how[100000];
//int from[100000];
////int dist[100000];
//
//deque < int> q;
//int T;
//int A, B;
//
//void solve(){
//	
//	while (!q.empty()){
//	
//		int now = q.front();
//		q.pop_front();
//		
//		int next = (2 * now) % 10000;
//		if (check[next] == false){
//			q.push_back(next);
//			how[next] = 'D';
//			from[next] = now;
//			//dist[next] = dist[now] + 1;
//			check[next] = true;
//		}
//		
//		next = now - 1;
//		if (now == 0)
//			next = 9999;
//		if (check[next] == false){
//			q.push_back(next);
//			how[next] = 'S';
//			from[next] = now;
//			//dist[next] = dist[now] + 1;
//			check[next] = true;
//		}
//		
//		next = (now % 1000) * 10 + (now / 1000);
//		if (check[next] == false){
//			q.push_back(next);
//			how[next] = 'L';
//			from[next] = now;
//			//dist[next] = dist[now] + 1;
//			check[next] = true;
//		}
//
//		next = (now / 10) + (now % 10) * 1000;
//		if (check[next] == false){
//			q.push_back(next);
//			how[next] = 'R';
//			from[next] = now;
//			//dist[next] = dist[now] + 1;
//			check[next] = true;
//		}
//	}
//
//	string ans = "";
//	while (B != A){
//		ans += how[B];
//		B = from[B];
//	}
//
//	reverse(ans.begin(), ans.end());
//	cout << ans << "\n";
//
//	
//}
//
//int main()
//{	
//
//	cin >> T;
//	while(T--){
//
//		cin >> A >> B;
//		memset(check, false, sizeof(check));
//	//	memset(dist, 0, sizeof(dist));
//		memset(how, 0, sizeof(how));
//		memset(from, 0, sizeof(from));
//		check[A] = true;
//	//	dist[A] = 0;
//		from[A] = -1;	
//
//		q.push_back(A);
//		solve();
//		
//	}
//	
//	return 0; 
//}
//
