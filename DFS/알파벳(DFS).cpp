	//#define _CRT_SECURE_NO_WARNINGS
	//#include <stdio.h>
	//
	//int R, C;
	//char map[21][21];
	//bool visited[26];

	//int dx[5] = {0, 0, 0, -1, 1 };   //x ����, �ε��� 1���� ��ȿ, 0�� ����
	//int dy[5] = {0, -1, 1, 0, 0 };   //y ����
	//int result = 0;

	//void DFS(int x, int y, int step)
	//{
	//	if (step > result)
	//		result = step;

	//	for (int i = 1; i <= 4; i++)
	//	{
	//		int n_x = x + dx[i];
	//		int n_y = y + dy[i];

	//		if (n_x < 1 || n_x > R || n_y < 1 || n_y > C)
	//			continue;
	//		if (visited[map[n_x][n_y] - 'A'] == true)  //�̹� �湮�Ѱ�
	//			continue;

	//		visited[map[n_x][n_y] - 'A'] = true;
	//		DFS(n_x, n_y, step + 1);
	//		visited[map[n_x][n_y] - 'A'] = false;
	//	}					
	//}
	//
	//int main()
	//{
	//	scanf("%d %d", &R, &C);
	//	char trash;
	//	scanf("%c", &trash);
	//	
	//	for (int i = 1; i <= R; i++)
	//	{
	//		for (int j = 1; j <= C; j++)
	//		{
	//			scanf("%c", &map[i][j]);
	//		}	
	//		scanf("%c", &trash);
	//	}
	//
	//	visited[map[1][1] - 'A'] = true;  //ù���� ������(1,1) �湮
	//	DFS(1,1,1);

	//	printf("%d", result);
	//	return 0;
	//}	