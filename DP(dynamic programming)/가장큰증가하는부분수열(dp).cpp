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
//		d[i] = A[i];
//
//	
//	for (int i = 1; i < N; i++){
//		for (int j = 0; j < i; j++){
//		
//			if (A[j] < A[i] && d[j] + A[i] > d[i])
//				d[i] = d[j] + A[i] ;
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