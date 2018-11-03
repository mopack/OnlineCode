//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//class Solution {
//public:
//	int lengthOfLongestSubstring(string s) {
//		bool exist[128];
//		int ans = 0;
//
//		for (int i = 0; i < s.length(); i++) {
//			for (int j = 0; j < 128; j++) exist[j] = false;
//
//			for (int j = i; 1 ; j++) {
//				if (exist[s[j]] || j == s.length()) {
//					if (j - i > ans) ans = j - i;
//					break;
//				}
//				else {
//					exist[s[j]] = true;
//				}
//			}
//		}
//
//		return ans;
//	}
//
//};
//int main3() {
//	return 0;
//}