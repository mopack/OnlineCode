//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////40ms/PR99.59
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class WordDictionary {
//public:
//	struct TreeNode {
//		bool isEnd = 0;
//		vector<TreeNode*>Child = vector<TreeNode*>(26, NULL);
//	};
//	TreeNode* Root = new TreeNode();
//	void addWord(string s) {
//		TreeNode* t = Root;
//		for (auto &c : s) {
//			if (!t->Child[c - 97]) t->Child[c - 97] = new TreeNode();
//			t = t->Child[c - 97];
//		}
//		t->isEnd = 1;
//	}
//	bool go(string &s, int i, TreeNode *t) {
//
//		if (!t) return 0;
//		if (i == s.size()) return t->isEnd;
//		if (s[i] != '.') return go(s, i + 1, t->Child[s[i] - 97]);
//		
//		for (int k = 0; k < 26; k++) {
//			if (go(s, i + 1, t->Child[k])) return 1;
//		}
//		return 0;
//	}
//	bool search(string s) {
//		return go(s, 0, Root);
//	}
//};
//
////24ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class WordDictionary {
//public:
//	unordered_map<int, vector<string>> Map;
//	void addWord(string s) {
//		Map[s.size()].push_back(s);
//	}
//	bool search(string w) {
//		auto it = Map.find(w.size());
//		if (it == Map.end()) return 0;
//
//		for (auto &s : it->second) {
//			for (int i = 0; i != w.size(); i++) {
//				if (w[i] == '.') continue;
//				if (w[i] != s[i]) goto Next;
//			}
//			return 1;
//		Next:;
//		}
//		return 0;
//	}
//};
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	vector<string> x = { { "bad" },{ "dad" },{ "mad" } }, y = { { "pad" },{ "bad" },{ ".ad" },{ "b.." } ,""};
//	WordDictionary az;
//	for (auto &s : x) az.addWord(s);
//	for (auto &s : y) cout<<int(az.search(s))<<' ';
//	system("pause");
//	return 0;
//} 