////2017-05-07
//#include <iostream> 
//
//using namespace std;
//
//int T, N;
//int cnt = 0;
//
//void solve(int sum){
//
//	if (sum == N){
//		cnt++;
//		return;
//	}
//	if (sum > N)
//		return; 
//
//	
//	for (int i = 1; i <= 3; i++)		
//		solve(sum + i);
//}
//
//
//
//int main()
//{
//
//	cin >> T;
//
//	while (T--){
//	
//		cin >> N;
//		solve(0);
//		cout << cnt << "\n";
//		cnt = 0; 
//
//	}
//	
//	return 1;
//}