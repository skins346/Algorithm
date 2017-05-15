////2017-05-15
////재귀로 푼거 // 이거 비트 연산으로도 풀 수 있음 (비트연산 나중에 다시봐 좀 이해가안되) 
//#include <iostream> 
//using namespace std;
//
//int N, S;
//int arr[20];
//int ans = 0; 
//
//void solve(int sum,int i){
///*                    //잘못 생각한 부분
//	if (i == N)
//		return; 
//
//	if (sum == S){   //이렇게 하면 중간에 return됨 (전체의 경우의 수를 못봄)
//		ans++;
//		return;
//	}*/
//
//	if (i == N){
//		if (sum == S)
//			ans++;
//		return; 
//	}
//
//
//	solve(sum + arr[i],i+1);
//	solve(sum,i+1);
//
//	return;
//}
//
//int main(){
//	
//	cin >> N >> S;
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//
//	solve(0, 0);
//	if (S == 0)         //공집합의 경우 빼줌
//		ans -= 1;  
//
//	cout << ans;	
//	return 0;
//}