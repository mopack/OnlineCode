//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution { // AC (時間複雜度可以試試看計算)
//public:
//	string s;
//	bool Test(int p) {
//		string s1 = s.substr(0, p);
//		for (int i = p; i + p <= s.size(); i += p)
//			if (s1 != s.substr(i, p)) return 0;
//		return 1;
//	}
//	bool repeatedSubstringPattern(string s) {
//		if (s.size() <= 1)return 0;
//		Solution::s = s;
//		
//		if (Test(1)) return 1;
//		for (int p = 2; p * p <= s.size(); p++){ // p = len
//			if (s.size() % p == 0) {
//				if (Test(p)) return 1;
//				if (Test(s.size() / p)) return 1;
//			}
//		}
//		return 0;
//	}
//};
//int main() {
//	string a = "abcabc";
//	class Solution az;
//	cout << az.repeatedSubstringPattern(a);
//	system("pause");
//	return 0;
//} 