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
////�Ҽ� üũ �س���
//void eratos(){
//
//	for (int i = 2; i <= 9999; i++) {
//		arr[i] = i;
//	}
//
//	for (int i = 2; i <= 9999; i++) {    //���� 0�� �ƴϸ� �Ҽ���.
//		if (arr[i] == 0) // �̹� üũ�� ���� ����� Ȯ������ �ʴ´�
//			continue;
//		for (int j = i + i; j <= 9999; j += i) { // i�� ������ i�� ������� 0���� üũ
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
//			q.clear();  //������ �׽�Ʈ���̽��� ���� ť�� �ʱ�ȭ
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
//				int compareNum = (j* d[i]) + temp;  //�Ҽ����� �Ǻ��� ���ο� �� 
//
//				if (arr[compareNum] != 0 && visited[compareNum] == 0){ //�Ҽ��鼭 �湮���� ������
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