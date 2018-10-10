//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//	inline char t(char c) {
//		if (c >= 97 && c <= 123)return c;
//		if (c >= 65 && c <= 91)return c + 32;
//		if (c >= 48 && c <= 57)return c;
//		return 0;
//	}
//public:
//	bool isPalindrome(string a) {
//		int s = 0, e = a.size();
//		char c1, c2;
//		for (e--; s < e; ) {
//			c1 = t(a[s]); if (c1 == 0) { s++; continue; }
//			c2 = t(a[e]); if (c2 == 0) { e--; continue; }
//			if (c1 != c2) return 0;
//			s++; e--;
//		}
//		return 1;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 