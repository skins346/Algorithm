////2017-04-09
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stack>
//#include <queue>
//#include <set>
//
//using namespace std;
//
//struct Data{
//	int n;
//	int num[13];
//	vector<int> s;  //stack
//};
//
//queue<struct Data> dataSet;
//
//void DFS(int from, struct Data data)
//{
//	if (data.s.size() == 6){  //when stack is full
//		for (int i = 0; i < data.s.size(); i++)
//			printf("%d ", data.s[i]);
//
//		printf("\n");
//	}
//	else{
//	
//		for (int j = from + 1; j < data.n; j++ ){
//			data.s.push_back(data.num[j]);  //push
//			DFS(j,data);
//			data.s.pop_back();
//		}
//	}
//		
//}
//
//int main()
//{
//	struct Data temp;
//
//	while (scanf("%d", &temp.n), temp.n != 0){
//		
//		for (int i = 0; i < temp.n; i++)
//			scanf("%d", &temp.num[i]);
//
//		dataSet.push(temp);
//	}
//
//	//Ãâ·Â
//	while (!dataSet.empty()){
//		
//		temp = dataSet.front();
//		dataSet.pop();
//	
//		for (int i = 0; (temp.n) - i >= 6; i++){
//			temp.s.push_back(temp.num[i]);  //push
//			DFS(i,temp);
//			temp.s.pop_back();
//		}	
//	
//		printf("\n");
//	}
//	
//
//	return 0;
//}
//
//
//
