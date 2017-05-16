////2017-05-16   
//#include <iostream> 
//using namespace std;
//int d[1001];
//int n;
//
////Bottom-up
////void solve(){
////
////	d[1] = 1;
////	d[2] = 2;
////
////	for (int i = 3; i <= n; i++){
////		d[i] = d[i - 1] + d[i - 2];
////		d[i] = d[i] % 10007;
////	}
////}
////
////int main(){
////
////	cin >> n;
////	solve();
////	cout << d[n];
////
////	return 0;
////
////}
//
////////Top-down 
//int solve(int i){
//
//	if (i == 1)
//		return 1; 
//	if (i == 2)
//		return 2;
//
//	if (d[i] > 0)
//		return d[i];
//
//	d[i] = solve(i-1) + solve(i-2);
//	d[i] = d[i] % 10007;
//	
//	return d[i];
//}
//int main(){
//
//	cin >> n;
//	cout << solve(n);
//	return 0;
//}