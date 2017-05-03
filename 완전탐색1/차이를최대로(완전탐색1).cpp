////2017-05-03
//
//#include <iostream> 
//#include <algorithm>
//#include <vector> 
//#include <stdlib.h>
//
//using namespace std;
//
//int N; 
//vector<int> A;
//int ans=0; 
//
//int calculate(){
//
//	int sum = 0;
//
//	for (int i = 0; i < (int)A.size() - 1; i++)   //int type casting 왜해주지? 	
//		sum += abs(A[i] - A[i + 1]);
//
//	return sum;
//
//}
//
//void solve()
//{
//	do{
//		int temp = calculate();
//		if (temp > ans)
//			ans = temp;
//
//	} while (next_permutation(A.begin(), A.end()));
//}
//
//int main()
//{
//	cin >> N; 
//
//	for (int i = 0; i < N; i++){
//		int x;
//		cin >> x;
//		A.push_back(x);
//	}
//	
//	sort(A.begin(),A.end());
//	solve();
//
//	cout << ans;
//	return 0;
//}
