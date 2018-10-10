//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//// 0ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	string longestCommonPrefix(vector<string>&S) {
//		if (S.empty()) return "";
//		for (int i = 0; i != S[0].size(); i++) {
//			for (auto &s : S) {
//				if (i == s.size() || S[0][i] != s[i]) {
//					S[0].resize(i);
//					return S[0];
//				}
//			}
//		}
//		return S[0];
//	}
//};
//
//// 4ms / PR97
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	string longestCommonPrefix(vector<string>&S){
//		if (S.empty()) return "";
//		string Ans = "", s0 = S[0];
//		for (int i = 0; i != s0.size(); i++) {
//			for (auto &s : S) {
//				if (i == s.size() || s0[i] != s[i]) return Ans;
//			}
//			Ans.push_back(s0[i]);
//		}
//		return Ans;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 