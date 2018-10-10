//#include <iostream>
//#include <string>
//using namespace std;
//// (66^n) Mod 100 = 0,66,56,96,36,76,16,56...
////                       2  3  4  5  6  7
//// => n Mod 5 = 76,16,56,96,36...  (10 Mod 5 =  0)
//// => ­Ó¦ì¼Æ Mod 5 = 76,16,56,96,36... 
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int TaskN, L, Ans, d[5] = { 76,16,56,96,36 };
//	cin >> TaskN;
//	while(TaskN--){
//		string s;
//		cin >> s;
//		L = s.back() - 48;
//
//		if (s.size() == 1 && L == 0) Ans = 1;
//		else if (s.size() == 1 && L == 1) Ans = 66;
//		else Ans = d[L % 5];
//		cout << Ans << '\n';
//	}
//	return 0;
//}