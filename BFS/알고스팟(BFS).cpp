////2017-04-07
////visited (�湮�ߴ��� ���� Ȯ�����ٰ�) 
////deque ���� make_pair
////scanf���� ���� �ϳ��� ������ 	scanf("%1d",&a[i][j]);
////deque�� ������ �ְ� �ڷ� �ְ� �ϴ� ������ �̿��ؼ� ǰ 		
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <deque>
//
//using namespace std;
//
//int M, N;
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//int D[101][101];
//int a[101][101];
//deque<pair<int, int>> q;
//
//void cal()
//{
//	while (!q.empty()){
//		int x = q.front().first;
//		int y = q.front().second;
//		
//		q.pop_front();
//		for (int m = 0; m < 4; m++){
//		
//			int nx = x + dx[m];
//			int ny = y + dy[m];
//
//			//if (nx < 1 || ny < 1 || nx > N || ny > M)  //���� �Ǽ� ����!
//			//	continue;
//		
//			if (1 <= nx && nx <= N && 1 <= ny && ny <= M){
//				if (D[nx][ny] == -1){
//					if (a[nx][ny] == 0){  //���� ������
//						D[nx][ny] = D[x][y];
//						q.push_front(make_pair(nx, ny));    //���� �������� ������ ���� �켱���� ���� deque�������! ���⼭ �ظ���
//					}
//					else{
//						D[nx][ny] = D[x][y] + 1;
//						q.push_back(make_pair(nx, ny));
//					}
//				}
//			}
//						
// 		}
//	}
//
//
//}
//int main()
//{
//	scanf("%d %d", &M, &N);
//	for (int i = 1; i <= N; i++){
//		for (int j = 1; j <= M; j++){
//			scanf("%1d",&a[i][j]);
//			D[i][j] = -1;
//		}
//	}
//
//	q.push_back(make_pair(1, 1));
//	D[1][1] = 0;
//	cal();
//
//	printf("%d\n", D[N][M]);
//	
//	return 1;
//
//}
