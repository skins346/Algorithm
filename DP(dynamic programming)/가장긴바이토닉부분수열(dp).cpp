////2017-05-17
//
//#include <iostream> 
//
//using namespace std;
//
//int A[1000];
//int d[1000];
//int d2[1000];
//int N;
//int ans = 0;
//void solve(){ //가장 긴 증가하는 부분수열
//
//	for (int i = 0; i < N; i++)
//		d[i] = 1;
//
//
//	for (int i = 1; i < N; i++){
//		for (int j = 0; j < i; j++){
//
//			if (A[j] < A[i] && d[j] + 1 > d[i])
//				d[i] = d[j] + 1;
//
//		}
//
//	}
//
//}
//
//void solve2(){  // 가장 긴 감소하는 부분 수열
//
//	for (int i = N - 1; i >= 0; i--){
//
//		d2[i] = 1;
//		for (int j = N - 1; j > i; j--){
//
//			if (A[i] > A[j] && d2[j] + 1 > d2[i])
//				d2[i] = d2[j] + 1;
//		}
//
//	}
//}
//
//int main(){
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> A[i];
//
//	solve();
//	solve2();
//
//	for (int i = 0; i < N; i++){
//	
//		if (d[i] + d2[i] - 1 > ans)
//			ans = d[i] + d2[i] - 1;
//	}
//
//	cout << ans;
//
//	return 0;
//}