//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <sstream>
//#include <set>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/20ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	string replaceWords(vector<string>&D, string sentence) {
//		set<string>Set(D.begin(), D.end());
//
//		string Ans = "", s;
//		stringstream ss(sentence);
//		while (ss>>s) {
//			string a = s;
//			auto it = Set.lower_bound(string(1, s[0]));
//			for (; it != Set.end() && (*it) <= s; it++) {
//				int w = (*it).size();
//				if (s.size() >= w && w < a.size() && s.substr(0, w) == (*it))
//					a = (*it);
//			}
//			Ans += a + ' ';
//		}
//		if (Ans.back() == ' ')Ans.pop_back();
//		return Ans;
//	}
//};
////Sol:
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	struct TreeNode {
//		bool isEnd = 0;
//		vector<TreeNode*>Child = vector<TreeNode*>(26, nullptr);
//	};
//	string replaceWords(vector<string>& dict, string sentence) {
//		TreeNode *R = new TreeNode(), *t;
//		for (auto &s : dict) {
//			t = R;
//			for (auto &c : s) {
//				if (t->Child[c - 97]==nullptr) t->Child[c - 97] = new TreeNode();
//				t = t->Child[c - 97];
//			}
//			t->isEnd = 1;
//		}
//
//		string Ans = "", s;
//		stringstream ss(sentence);
//		while (ss >> s) {
//			t = R;
//			for (int i = 0; i < s.size() && t->Child[s[i] - 97] != nullptr; i++) {
//				t = t->Child[s[i] - 97];
//				if (t->isEnd) {
//					s.erase(i + 1);
//					break;
//				}
//			}
//			Ans += s + ' ';
//		}
//		if (Ans.back() == ' ')Ans.pop_back();
//		return Ans;
//	}
//};
//// NULL 28ms
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	struct TreeNode {
//		bool isEnd = 0;
//		vector<TreeNode*>Child = vector<TreeNode*>(26, NULL);
//	};
//	string replaceWords(vector<string>& dict, string sentence) {
//		TreeNode *R = new TreeNode(), *t;
//		for (auto &s : dict) {
//			t = R;
//			for (auto &c : s) {
//				if (!t->Child[c - 97]) t->Child[c - 97] = new TreeNode();
//				t = t->Child[c - 97];
//			}
//			t->isEnd = 1;
//		}
//
//		string Ans = "", s;
//		stringstream ss(sentence);
//		while (ss >> s) {
//			t = R;
//			for (int i = 0; i < s.size() && t->Child[s[i] - 97]; i++) {
//				t = t->Child[s[i] - 97];
//				if (t->isEnd) {
//					s.erase(i + 1);
//					break;
//				}
//			}
//			Ans += s + ' ';
//		}
//		if (Ans.back() == ' ')Ans.pop_back();
//		return Ans;
//	}
//};
////Sol: Coding: min. Present: AC: Lines/32ms/PR99.65
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	struct TrieNode {
//		bool isWord = 0;
//		vector<TrieNode*>children = vector<TrieNode*>(26, nullptr);
//	};
//	TrieNode* Root;
//	void Insert(string &word) {
//		TrieNode* Node = Root;
//		for (auto c : word) {
//			TrieNode* p = Node->children[c - 97];
//			if (p) Node = p;
//			else {
//				p = new TrieNode();
//				Node->children[c - 97] = p;
//				Node = p;
//			}
//		}
//		Node->isWord = 1;
//	}
//	string replaceWords(vector<string>& dict, string sentence) {
//		Root = new TrieNode();
//		for (auto &s : dict) Insert(s);
//
//		string Ans = "";
//		stringstream ss(sentence); string w;
//		while (ss >> w) {
//			TrieNode* Node = Root;
//			for (int i = 0; i < w.size(); i++) {
//				TrieNode* p = Node->children[w[i] - 97];
//				if (p) {
//					if (p->isWord) {
//						w.erase(i + 1);
//						break;
//					}else
//						Node = p;
//				}else
//					break;
//			}
//			Ans += w + ' ';
//		}
//		if (Ans.back() == ' ')Ans.pop_back();
//		return Ans;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<string>d = { "cat", "bat", "rat" }; string s = "the cattle was rattled by the battery";
//	cout<<'\n'<<az.replaceWords(d, s);
//
//	system("pause");
//	return 0;
//} 