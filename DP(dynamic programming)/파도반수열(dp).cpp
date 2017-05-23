////2017-05-21
//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//int T, N;
//long long d[101];
//
//void solve(){
//
//	d[1] = 1;
//	d[2] = 1;
//	d[3] = 1;
//	d[4] = 2;
//
//	for (int i = 5; i <= N; i++)
//		d[i] = d[i - 1] + d[i - 5];
//
//}
//int main(){
//	
//	cin >> T;
//
//	while (T--){
//	
//		cin >> N;
//		solve();
//		cout << d[N] << "\n";
//		memset(d, 0, sizeof(int));
//	}
//
//	return 0;
//}
//
