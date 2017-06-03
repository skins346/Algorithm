////2017-06-03
//
//#include <iostream> 
//using namespace std;
//
//long long d[31];
//int N;
//
//void solve(){
//	
//	d[0] = 1;
//	d[2] = 3;
//
//	for (int i = 4; i <= N; i+=2){
//	
//		d[i] = 3 * d[i - 2];
//
//		for (int j = i - 4; j >= 0;j = j-2)
//			d[i] = d[i] + (2 * d[j]);
//	}	
//}
//
//int main(){
//	
//	cin >> N;
//	solve();
//	
//	cout << d[N];
//	return 0;
//}