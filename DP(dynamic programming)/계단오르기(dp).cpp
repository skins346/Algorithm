////2017-05-18
////2가지 방식 있음
//
//#include <iostream> 
//#define max(i,j) (( i > j ) ? ( i ) : ( j ))
//using namespace std;
//
//int n;
//int arr[300];
//int d[300][2];
//
//void solve(){
//	
//	d[0][0] = arr[0];
//	d[0][1] = 0;
//	d[1][0] = arr[1];
//	d[1][1] = arr[0] + arr[1];
//
//	for (int i = 2; i < n; i++){
//	
//		d[i][0] = max(d[i - 2][0], d[i - 2][1]) + arr[i];
//		d[i][1] = d[i - 1][0] + arr[i];
//	}
//
//}
//
//int main(){
//
//	cin >> n;
//	for (int i = 0; i < n; i++){
//		cin >> arr[i];
//	}
//
//	solve();
//	cout << max(d[n - 1][0], d[n - 1][1]);
//	return 0;
//}