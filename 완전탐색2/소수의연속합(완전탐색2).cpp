//2017-04-12

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//bool arr[4000001];
//vector <int> v;
//int N;
//
//void eratos()
//{
//	//false¸é ¼Ò¼ö
//
//	for (int i = 2; i <= 4000000; i++) {
//		if (arr[i] == true) {
//			continue;
//		}
//		else
//			v.push_back(i);
//
//		for (int j = i + i; j <= 4000000; j += i)  
//				arr[j] = true;				
//	}
//}
//
//int cal()
//{
//	int l=0, r=0;
//	int sum = 0;
//	int ans;
//	int cnt = 0;
//
//
//	while (l <= r && r < v.size()){
//	
//		if (sum < N ){
//			sum += v[r];
//			r++;
//		}
//		
//		else if (sum == N){
//
//			cnt++;
//			sum -= v[l];
//			l++;
//
//		}
//		else if (sum > N){
//			
//			sum -= v[l];
//			l++;
//		}
//	}
//
//	return cnt;
//
//}
//
//int main()
//{
//
//	cin >> N;
//
//	eratos();
//	
//	printf("%d", cal());
//
//	return 1; 
//}