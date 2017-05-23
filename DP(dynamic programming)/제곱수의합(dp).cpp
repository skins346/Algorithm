//#include <iostream> 
////2017-05-21
//using namespace std;
//
//int N;
//int d[100001];
//void solve()
//{
//	for (int i = 1; i <= N; i++){
//		d[i] = i;
//
//		for (int j = 1; j*j <= i; j++){
//		
//			if (d[i] > d[i - j*j] + 1)
//				d[i] = d[i - j*j] + 1;			
//		}
//	}
//
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
//
