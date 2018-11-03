//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_set>
//using namespace std;
//
//bool com(string s1, string s2) { return (s1.size() == s2.size()) ? (s1 > s2) : (s1.size() < s2.size()); }
//class Solution {
//public:
//	unordered_set<string> Set;
//
//	string longestWord(vector<string>&w) {
//		sort(w.begin(), w.end(), com);
//		if (w[0].size() != 1) return "";
//
//		int i; string s, ans = "";
//		for (i = 0; i < w.size() && w[i].size() == 1; i++)Set.insert(w[i]);
//		for (; i < w.size(); i++) {
//			s = w[i]; s.pop_back();
//			if (Set.find(s) != Set.end()) Set.insert(w[i]);
//		}
//
//		for (auto x : Set)
//			if (com(ans, x)) ans = x;
//
//		return ans;
//	}
//}az;
//
//int main() {
//	vector<string> w = { "m","mo","moc","moch","mocha","l","la","lat","latt","latte","c","ca","cat" };
//	//sort(w.begin(), w.end());
//	//for (auto &s : w)cout << s << endl;
//	cout << az.longestWord(w);
//	system("pause");
//	return 0;
//} 