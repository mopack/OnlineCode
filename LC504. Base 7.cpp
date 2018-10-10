//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	string convertToBase7(int n) {
//		string s = "", sign = "";
//		if (n == 0)return "0";
//		if (n < 0) sign = "-", n = -n;
//		for (; n; n /= 7)
//			s.push_back(n % 7 + 48);
//		reverse(s.begin(), s.end());
//		return sign + s;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 