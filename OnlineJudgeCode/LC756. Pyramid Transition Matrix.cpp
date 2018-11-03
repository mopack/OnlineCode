//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	vector<char>d[7][7];
//	bool found = 0;
//
//	void go(string S, string s) {
//		if (found)return;
//		if (s.size() + 1 == S.size())
//			if (s.size() == 1) { found = 1; return; }
//			else go(s, "");
//
//		int i = s.size();
//		if(i+1 < S.size()){
//			for (auto x : d[S[i]][S[i + 1]]) {
//				go(S, s + x);
//			}
//		}
//	}
//	bool pyramidTransition(string bottom, vector<string>& allowed) {
//		for (auto &s : allowed) d[s[0] - 65][s[1] - 65].push_back(s[2] - 65);
//		for (auto &c : bottom) c -= 65;
//		go(bottom, "");
//		return found;
//	}
//}az;
//
//int main() {
//	vector<string> x = { "AAA", "AAB", "ABA", "ABB", "BAC" };
//	string y = "AABA";
//	cout<<az.pyramidTransition(y, x);
//
//	system("pause");
//	return 0;
//} 