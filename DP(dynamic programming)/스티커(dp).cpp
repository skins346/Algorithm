////2017-05-16
//#include <iostream> 
//#include <string.h> 
//using namespace std;
//
//int T, n;
//int a[2][100001];
//int d[100001][3];
//
//int solve(){
//	int ans;
//	for (int i = 2; i <= n; i++){
//
//		d[i][0] = d[i - 1][0];
//		if (d[i - 1][1] > d[i][0])
//			d[i][0] = d[i - 1][1];
//		if (d[i - 1][2] > d[i][0])
//			d[i][0] = d[i - 1][2];
//
//		d[i][1] = d[i - 1][0] + a[0][i];
//		if (d[i - 1][2] + a[0][i] > d[i][1])
//			d[i][1] = d[i - 1][2] + a[0][i];
//
//
//		d[i][2] = d[i - 1][0] + a[1][i];
//		if (d[i - 1][1] + a[1][i] > d[i][2])
//			d[i][2] = d[i - 1][1] + a[1][i];
//	}
//
//	ans = d[n][0];
//	for (int i = 1; i <= 2; i++){
//
//		if (d[n][i] > ans)
//			ans = d[n][i];
//	}
//
//	return ans;
//
//}
//
//int main(){
//
//	cin >> T;
//
//	while (T){
//		cin >> n;
//
//		for (int i = 1; i <= n; i++)
//			cin >> a[0][i];
//
//		for (int i = 1; i <= n; i++)
//			cin >> a[1][i];
//
//		d[1][0] = 0;
//		d[1][1] = a[0][1];
//		d[1][2] = a[1][1];
//		cout << solve() << "\n";
//
//		memset(a, 0, sizeof(a));
//		memset(d, 0, sizeof(d));
//		T--;
//	}
//
//	return 0;
//}
//
