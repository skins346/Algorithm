////2017-05-17
//#include <iostream> 
//using namespace std;
//
//int A[100000];
//int d[100000];
//int n;
//int ans;
//void solve(){
//	
//	for (int i = 0; i < n; i++){
//		
//		d[i] = A[i];
//
//		if (i == 0){
//			ans = d[0];
//			continue;
//		}
//		
//		if (d[i - 1] + A[i] > d[i])
//			d[i] = d[i - 1] + A[i];
//		
//		if (d[i] > ans)
//			ans = d[i];
//	}
//}
//
//int main(){
//
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> A[i];
//	
//	solve();
//	cout << ans;
//	
//	return 0;
//}