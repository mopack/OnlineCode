//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//using namespace std;
//class Solution {
//public:
//	unordered_set<string> ban;
//	unordered_map<string, int> sum;
//
//	inline bool isAlpha(char c) { return c >= 97 && c <= 97 + 25; }
//	string mostCommonWord(string s, vector<string>& banned) {
//		for (auto b : banned) ban.insert(b);
//		for (auto &c : s) if (c >= 65 && c <= 65 + 25) c += 32; // 97-65
//
//		int f = 0, L = 0; string t;
//		for (; f < s.size(); f++) {
//			if (isAlpha(s[f])) {
//				L = f;
//				while (f + 1 < s.size() && isAlpha(s[f + 1]))f++;
//				t = s.substr(L, f - L + 1);
//				if (ban.find(t) == ban.end()) sum[t]++;
//				f++;
//			}
//		}
//
//		t = ""; f = 0;
//		for (auto x : sum) 
//			if (x.second > f) { f = x.second; t = x.first;}
//		return t;
//	}
//}az;
//
//int main() {
//	vector<string> x = { "hit" };
//	cout<<az.mostCommonWord("Bob hit a ball, the hit BALL flew far after it was hit.", x);
//	system("pause");
//	return 0;
//} 