////2017-05-15
//#include <iostream> 
//using namespace std;
//int N, M;
//int A[10000];
//int ans = 0;
//
//void solve(int left, int right, int sum){
//	
//	while (left <= right && right < N){
//	
//		if (sum < M){
//		
//			right++;
//			sum += A[right];
//		}
//
///*		else if (sum == M){
//	
//			ans++;
//			sum -= A[left];
//			left++;
//		}*/ // 내가 처음 구현한 부분, 여기가 잘못됨. //L과 R이 같은경우가 있음
//		else if (sum == M){
//			ans++;
//			right++;
//			sum += A[right];
//		}
//
//
//		else if (sum > M){
//			sum -= A[left];
//			left++;
//		}			
//	}
//
//}
//
//int main()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		cin >> A[i];
//		
//	solve(0, 0, A[0]);
//	cout << ans; 
//
//
//	return 0;
//}