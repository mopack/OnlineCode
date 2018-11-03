//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// 76ms/PR33
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	string longestPalindrome(string s) {
//		if (s.size() <= 1) return s;
//		vector<vector<bool>>p(s.size(), vector<bool>(s.size())); // isPalindrome
//		int MaxSt = 0, MaxLen = 0;
//		for (int i = s.size() - 1; i >= 0; i--) {
//			for (int j = i; j < s.size(); j++) {
//				if (s[i] == s[j] && (j - i <= 2 || p[i + 1][j - 1])) {
//					p[i][j] = 1;
//					if (MaxLen < j - i + 1) {
//						MaxLen = j - i + 1, MaxSt = i;
//					}
//				}
//			}
//		}
//		return s.substr(MaxSt, MaxLen);
//	}
//};
//
////0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	string longestPalindrome(string s) {
//		int MaxLen = 0, MaxSt = 0;
//		for (int i = 0; i < s.size() && (s.size() - i > MaxLen / 2);) {
//			int L = i - 1, H = i + 1;
//			
//			while (H < s.size() && s[H] == s[H - 1]) H++;
//			i = H;
//
//			while (L >= 0 && H < s.size() && s[L] == s[H]) L--, H++;
//
//			int NewLen = H - L - 1;
//			if (NewLen > MaxLen) MaxLen = NewLen, MaxSt = L + 1;
//		}
//		return s.substr(MaxSt, MaxLen);
//	}
//};
//
//
//int main() {
//	class Solution az;
//	cout<<"\nAns="<<az.longestPalindrome("abcda");
//	system("pause");
//	return 0;
//} 
