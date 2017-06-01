////2017-05-23
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//int N, M;
//int a[2001];
//int d[2001][2001];
//
//void solve(){
//
//	for (int i = 1; i <= N; i++)   //길이가 1
//		d[i][i] = 1;
//
//	for (int i = 1; i <= N-1; i++){   //길이가 2
//
//		if (a[i] == a[i + 1])
//			d[i][i + 1] = 1;
//	}
//
//	for (int k = 3; k <= N; k++){
//	
//		for (int i = 1; i <= N-k+1; i++){
//			int j = i + k - 1;
//			if (a[i] == a[j] && d[i + 1][j - 1])
//				d[i][j] = 1;
//		}	
//	}
//		
//
//}
//
//int main(){
//
//	scanf("%d",&N);
//
//	for (int i = 1; i <= N; i++)
//		scanf("%d",&a[i]);
//
//	scanf("%d",&M);
//
//	solve();
//
//	for (int i = 0; i < M; i++){
//		int a, b;
//		scanf("%d %d",&a,&b);
//		printf("%d\n", d[a][b]);
//	}
//	
//	return 0;
//}