//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int longestPalindrome(string s) {
//		int midone = 0, ans = 0, d[128] = {};
//		for (auto c : s)d[c]++;
//		for (int i = 65; i <= 122; i++) {
//			if (d[i] & 1) midone = 1;
//			ans += d[i] / 2;
//		}
//		return ans * 2 + midone;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 