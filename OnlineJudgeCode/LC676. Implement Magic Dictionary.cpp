//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <set>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Compare {
//public:
//	bool operator()(const string &s1, const string &s2) {
//		if (s1.size() != s2.size()) return s1.size() < s2.size();
//		return s1 < s2;
//	}
//};
//class MagicDictionary {
//public:
//	set<string, Compare> Set;
//	void buildDict(vector<string>D) {
//		for (auto &d : D) {
//			Set.insert(d);
//		}
//	}
//	bool Diff1(const string &s, const string &w) {
//		bool dif1 = 0;
//		for (int i = 0; i != s.size(); i++) {
//			if (s[i] != w[i]) {
//				if (dif1) return 0;
//				else      dif1 = 1;
//			}
//		}
//		return dif1;
//	}
//	bool search(string w) {
//		auto it = Set.lower_bound(string(w.size(), 'a'));
//		for (; it != Set.end() && (*it).size() == w.size(); it++) {
//			if (Diff1(*it, w)) return 1;
//		}
//		return 0;
//	}
//};
//int main() {
//	//freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	MagicDictionary az;
//	vector<string> x = { "a","b","ab","abc","abcabacbababdbadbfaejfoiawfjaojfaojefaowjfoawjfoawj" };
//	vector<string> y = { { "a" }, { "b" }, { "c" }, { "d" }, { "e" }, { "f" }, { "ab" }, { "ba" }, { "abc" }, { "cba" }, { "abb" }, { "bb" }, { "aa" }, { "bbc" }, { "abcd" }};
//	vector<bool> ans = { 1,1,1,1,1,1,0,0,0,0,1,1,1,1,0 };
//
//	az.buildDict(x);
//	for (int i = 0; i != y.size();i++) {
//		cout << int(az.search(y[i])) << ',';
//		//if (az.search(y[i]) != ans[i]) {
//		//	cout << y[i] << ',';
//		//}
//	}
//	system("pause");
//	return 0;
//}