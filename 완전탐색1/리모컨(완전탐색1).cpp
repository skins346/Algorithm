////2017-05-03
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <stdlib.h> 
//
//using namespace std;
//
//int ch; 
//int n;
//int n2;
//bool broken[10];
//int ans ;
//
//int possible(int c)
//{
//	int len = 0; 
//
//	if (c == 0){
//		if (broken[c])
//			return 0;
//		else
//			return 1;
//	}
//
//
//	while (c != 0){
//		
//		if (broken[c % 10])
//			return 0;
//
//		c /= 10;
//		len++;
//
//	}
//
//	return len ;
//}
//
//void solve()
//{
//	for (int i = 0; i < 1000000; i++){
//	
//		int c = i; 
//		int len = possible(c);	
//		
//		if (len != 0){
//			if (ans > len + abs(c - ch))
//				ans = len + abs(c - ch);
//		}
//
//	} 
//}
//
//
//int main(){
//
//	cin >> ch; 
//	cin >> n; 
//
//	for (int i = 0; i < n; i++){
//		cin >> n2;
//		broken[n2] = true; 
//	}	
//
//	ans = abs(100 - ch);	
//	solve();
//    cout << ans;	
//
//	return 0; 
//}