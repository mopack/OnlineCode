//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution { //Sol1: AC
//public:
//	string toHex(int N) {
//		if (N == 0)return "0";
//		string s = ""; int x;
//		while (N && s.size() < 8) {
//			x = N & 0x0000000F;
//			if (x >= 10) s.push_back(char(x + 97 - 10));
//			else s.push_back(char(x + 48));
//			N >>= 4;
//		}
//		reverse(s.begin(), s.end());
//		return s;
//	}
//}az;
//
//class Solution { //Sol2
//public:
//	inline char n2c(int x) { return (x >= 10) ? (x + 97 - 10) : (x + 48); }
//	string toHex(int N) {
//		if (N == 0)return "0";
//		string s;
//		for (s = "";  N && s.size() < 8; N >>= 4) s.push_back(n2c(N & 0x0000000F));
//		reverse(s.begin(), s.end());
//		return s;
//	}
//}az;
//
//
//int main() {
//	cout << az.toHex(-1);
//	system("pause");
//	return 0;
//} 