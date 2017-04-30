//2017-04-12

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <deque>
//#include <iostream>
//
//using namespace std;
//
//deque<pair<int, int>> q;
//int result;
//int arr[10000];
//int first, last;
//
////소수 체크 해놓기
//void eratos(){
//
//	for (int i = 2; i <= 9999; i++) {
//		arr[i] = i;
//	}
//
//	for (int i = 2; i <= 9999; i++) {    //값이 0이 아니면 소수임.
//		if (arr[i] == 0) // 이미 체크된 수의 배수는 확인하지 않는다
//			continue;
//		for (int j = i + i; j <= 9999; j += i) { // i를 제외한 i의 배수들은 0으로 체크
//			arr[j] = 0;
//		}
//	}
//
//}
//
//int BFS(int visited[10000])
//{
//	int current, cnt;
//
//	while (!q.empty())
//	{
//		current = q.front().first;
//		cnt = q.front().second;
//		q.pop_front();
//
//		if (current == last)
//		{
//			q.clear();  //다음번 테스트케이스를 위해 큐값 초기화
//			return cnt;
//		}
//
//		int temp = current;
//		int digit[4];
//		int d[4] = { 1000, 100, 10, 1 };
//
//		for (int i = 0; i < 4; i++){
//			digit[i] = temp / d[i];
//			temp = temp % d[i];
//		}
//
//		for (int i = 0; i < 4; i++){
//			temp = current - digit[i] * d[i];
//			for (int j = 0; j <= 9; j++){
//
//				if (i == 0 && j == 0)
//					continue;
//
//				int compareNum = (j* d[i]) + temp;  //소수인지 판별할 새로운 수 
//
//				if (arr[compareNum] != 0 && visited[compareNum] == 0){ //소수면서 방문하지 않은곳
//					q.push_back(make_pair(compareNum, cnt + 1));
//					visited[compareNum] = 1;
//				}
//			}
//		}
//	}
//
//	return -1;
//}
//
//
//int main()
//{
//
//	int testCase;
//	cin >> testCase;
//
//	eratos();
//
//	for (int i = 0; i < testCase; i++){
//
//		result = -1;
//		int visited[10000] = {};
//
//		cin >> first >> last;
//		q.push_back(make_pair(first, 0));
//		visited[first] = 1;
//		result = BFS(visited);
//
//		if (result == -1)
//			printf("impossible\n");
//		else
//			printf("%d\n", result);
//
//	}
//
//	return 1;
//}