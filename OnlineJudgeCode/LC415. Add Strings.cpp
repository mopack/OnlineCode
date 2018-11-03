//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	string addStrings(string s1, string s2) {
//		int n;
//		if (s1.size() > s2.size()) {
//			n = s1.size() - s2.size();
//			s2 = string(n, '0') + s2;
//		}
//		else if (s1.size() < s2.size()) {
//			n = s2.size() - s1.size();
//			s1 = string(n, '0') + s1;
//		}
//
//		n = 0;
//		for (int i = s1.size() - 1; i >= 0; i--) {
//			s1[i] = (s1[i] + s2[i] - 48 + n);
//			if (s1[i] >= 58) { s1[i] -= 10; n = 1; }
//			else n = 0;
//		}
//		if (n) s1 = "1" + s1;
//		return s1;
//	}
//}az;
//
//int main() {
//	cout << string(10, '0');
//	system("pause");
//	return 0;
//} 