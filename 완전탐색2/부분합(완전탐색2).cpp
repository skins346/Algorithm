////2017-04-14
//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//int arr[100000];
//int N, S;
//int ans = 0;
//
//void cal()
//{
//	int r=0, l=0;
//	int sum = arr[0]; 
//	
//	ans = N;
//
//	while (l <= r && r<N){
//			
//		if (sum < S){
//
//			r++;
//			sum += arr[r];
//			
//		}
//		else if (sum == S){
//		
//			if ((r - l + 1) < ans)		
//				ans = r - l + 1;
//		
//			r++;
//			sum += arr[r];
//
//		}
//		else if (sum > S){
//
//			if ((r - l + 1) < ans)
//				ans = r - l + 1;
//			
//			sum  -= arr[l];
//			l++;
//				
//		}	
//	}
//
//}
//
//int main()
//{
//	cin >> N >> S;
//	int num;
//
//	for (int i = 0; i < N; i++){
//		cin >> num;
//		arr[i] = num;
//	}
//	
//	cal();
//
//	cout << ans ;
//}
//
