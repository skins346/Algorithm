////2017-05-07
//
//#include <iostream> 
//#include <vector> 
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//int L, C;
//vector <char> v;
//
//int  check(string str){
//
//	int mo = 0; 
//	int ja = 0;
//
//	for (int i = 0; i < str.size(); i++){
//	
//		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//			mo++;
//		else
//			ja++;
//	}
//
//	if (mo >= 1 && ja >= 2)
//		return 1; 
//	else 
//		return 0;
//}
//
//void solve(int i, string str){
//	
//	if (str.size() == L){
//		if (check(str))
//			cout << str << '\n';
//
//		return; 
//	}
//	
//	if (i == v.size())
//		return;
//
//	solve(i + 1, str + v[i]);
//	solve(i + 1, str);
//
//}
//int main(){
//
//	cin >> L >> C;
//	
//	for (int i = 0; i < C; i++){
//		char ch;
//		cin >> ch;
//		v.push_back(ch);
//	}
//	
//	sort(v.begin(), v.end());
//
//	solve(0, "");
//	
//	return  0;
//}
//
