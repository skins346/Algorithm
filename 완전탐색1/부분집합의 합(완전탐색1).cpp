////2017-05-15
////��ͷ� Ǭ�� // �̰� ��Ʈ �������ε� Ǯ �� ���� (��Ʈ���� ���߿� �ٽú� �� ���ذ��ȵ�) 
//#include <iostream> 
//using namespace std;
//
//int N, S;
//int arr[20];
//int ans = 0; 
//
//void solve(int sum,int i){
///*                    //�߸� ������ �κ�
//	if (i == N)
//		return; 
//
//	if (sum == S){   //�̷��� �ϸ� �߰��� return�� (��ü�� ����� ���� ����)
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
//	if (S == 0)         //�������� ��� ����
//		ans -= 1;  
//
//	cout << ans;	
//	return 0;
//}