////2017-05-15
//#include <iostream> 
//using namespace std;
//
//int N, S;
//int ans;
//int arr[100000];
//
//void solve(int left, int right, int sum){
//
//	while (left <= right && right < N){
//
//		if (sum < S){
//		
//			right++;
//			sum += arr[right];
//		}
//		else if (sum == S){
//		
//			if (right - left + 1 < ans)
//				ans = right - left + 1;
//
//			right++;
//			sum += arr[right];
//		}
//		else if (sum > S){
//
//			if (right - left + 1 < ans)   //문제좀 잘 읽어라 영송아.. 합이 S 이상
//				ans = right - left + 1;
//
//			sum -= arr[left];
//			left++;
//		}
//		
//	}
//}
//int main(){
//	
//	cin >> N >> S;
//	
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//
//	ans = N+1; 
//	solve(0, 0, arr[0]);
//
//	if (ans == N+1)
//		cout << 0;
//	else 
//		cout << ans; 
//
//	return 0; 
//}