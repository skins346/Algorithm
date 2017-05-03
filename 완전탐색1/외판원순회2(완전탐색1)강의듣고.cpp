////2017-05-03
////0(N*N!)À¸·Î Ç¬°Í
//#include <iostream>
//#include <algorithm> 
//#include <vector>
//#include <climits>
//
//using namespace std;
//int N; 
//int W[10][10];
//vector<int> v; 
//int ans = INT_MAX; 
//
//void solve(){
//
//	do{
//		int sum = 0; 
//		bool check = false;
//		for (int i = 0; i < N - 1; i++){
//			if (W[v[i]][v[i + 1]] != 0){
//				sum += W[v[i]][v[i + 1]];
//			}
//			else
//				check = true;
//		}
//		
//		if (check == false && W[v[N-1]][v[0]] != 0){
//
//			sum += W[v[N-1]][v[0]];
//
//			if (sum < ans)
//				ans = sum;
//		}
//	
//
//	} while (next_permutation(v.begin(), v.end()));
//	 
//}
//int main(){
//
//	cin >> N; 
//
//	for (int i = 0; i < N; i++){
//		v.push_back(i);
//		for (int j = 0; j < N; j++)
//			cin >> W[i][j];
//	}
//
//	solve();
//
//	cout << ans; 
//
//	return 0; 
//}
//
