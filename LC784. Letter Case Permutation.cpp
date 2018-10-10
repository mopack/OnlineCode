//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//// 4ms/PR100/17Lines. O(2^N)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void BT(int i, string &s, vector<string>&Ans) { // Backtracking
//		if (i == s.size()) { Ans.push_back(s);  return; }
//		if (!isalpha(s[i])) { BT(i + 1, s, Ans); return; }
//		s[i] = tolower(s[i]);
//		BT(i + 1, s, Ans);
//		s[i] = toupper(s[i]);
//		BT(i + 1, s, Ans);
//	}
//	vector<string> letterCasePermutation(string s) {
//		vector<string> Ans;
//		BT(0, s, Ans);
//		return Ans;
//	}
//};
//
//// 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	inline char Flip(char c) {
//		return  (c >= 97) ? (c - 97 + 65) : (c + 97 - 65);
//	}
//	vector<string> letterCasePermutation(string &s) {
//		vector<string> Ans = { s }, LAns;
//		for (int i = 0; i < s.size(); i++) {
//			if (!isalpha(s[i])) continue;
//
//			LAns = Ans;
//			char c = Flip(s[i]);
//			for (auto &s2 : LAns) {
//				s2[i] = c;
//			}
//			Ans.insert(Ans.end(), LAns.begin(), LAns.end());
//		}
//		return Ans;
//	}
//};
//
//int main() {
//	Solution az;
//	system("pause");
//	return 0;
//} 