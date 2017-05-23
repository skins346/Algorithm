////2017-05-23
//#include <iostream>
//using namespace std;
//
//int N;
//long long d[101][101];
//int a[101][101];
//
//void solve()
//{
//	d[1][1] = 1;
//	for (int i = 1; i <= N; i++){
//		for (int j = 1; j <= N; j++){
//			for (int k = 1; k < j; k++){
//				if (j - k == a[i][k])
//					d[i][j] += d[i][k];
//			}
//			for (int k = 1; k < i; k++){
//				if (i - k == a[k][j])
//					d[i][j] += d[k][j];
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> N;
//
//	for (int i = 1; i <= N; i++){
//		for (int j = 1; j <= N; j++)
//			cin >> a[i][j];
//	}
//
//	solve();
//	cout << d[N][N];
//	return 0;
//}
//
