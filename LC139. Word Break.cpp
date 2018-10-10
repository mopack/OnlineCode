//#include <iostream>
//#include <vector>
//#include <string>
//#include <unordered_set>
//#include <algorithm>
//using namespace std;
//// Notes: Just a Yes/No(Bool) Question. Figure out a solution isn't needed!!!!!
//// 0ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	bool wordBreak(string s, vector<string>& wordDict) {
////		unordered_set<string>Dict(wordDict.begin(), wordDict.end());
////		vector<bool>d(s.size() + 1, 0);
////		d[0] = 1;
////		for (int i = 0; i < s.size(); i++) {
////			for (int j = i; j >= 0; j--) {
////				if (d[j] && Dict.count(s.substr(j, i - j + 1))) {
////					d[i + 1] = 1;
////					break;
////				}
////			}
////		}
////		return d[s.size()];
////	}
////};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool wordBreak(string s, vector<string>& wordDict) {
//		vector<bool>d(s.size() + 1, 0);
//		d[0] = 1;
//		for (int i = 0; i < s.size(); i++) {
//			for (const auto &w : wordDict) {
//				if (i >= w.size() && d[i - w.size()] && s.substr(i - w.size(), w.size()) == w) d[i] = 1;
//			}
//		}
//		return d[s.size()];
//	}
//};
//
//
//// TLE
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////class Solution {
////	struct TreeNode {
////		bool isEnd = 0;
////		vector<TreeNode*>Child = vector<TreeNode*>(26, NULL);
////	};
////	TreeNode *Root = new TreeNode();
////	void addWord(string &s) {
////		TreeNode *t = Root;
////		for (auto &c : s) {
////			if (t->Child[c - 97] == NULL) t->Child[c - 97] = new TreeNode();
////			t = t->Child[c - 97];
////		}
////		t->isEnd = 1;
////	}
////public:
////	bool Ans = 0;
////	void go(int i, TreeNode* t, string &s) {
////		if (i == s.size() || Ans) { if (t->isEnd) Ans = 1; return; }
////		if (t->Child[s[i] - 97]) 
////			go(i + 1, t->Child[s[i] - 97], s);
////		if (t->isEnd) go(i, Root, s);
////		return;
////	}
////	bool wordBreak(string s, vector<string>& wordDict) {
////		for (auto &x : wordDict) addWord(x);
////		go(0, Root, s);
////		return Ans;
////	}
////};
//
//int main() {
//	class Solution az;
//	vector<string> x = { "b", "a", "bbb","bbbb" };
//	cout<<"\nAns="<<az.wordBreak("bb", x);
//	system("pause");
//	return 0;
//} 
