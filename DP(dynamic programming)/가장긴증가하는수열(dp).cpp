////2017-05-17
//
//#include <iostream> 
//
//using namespace std;
//
//int A[1000];
//int d[1000];
//int N;
//int ans = 1;
//
//void solve(){
//	
//	for (int i = 0; i < N; i++)
//		d[i] = 1;
//
//	
//	for (int i = 1; i < N; i++){
//		for (int j = 0; j < i; j++){
//		
//			if (A[j] < A[i] && d[j] + 1 > d[i])
//				d[i] = d[j] + 1 ;
//		
//		}
//
//		if (d[i]> ans)
//			ans = d[i];
//	}
//
//}
//
//int main(){
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> A[i];
//
//	solve();
//	cout << ans; 
//
//	return 0;
//}