////#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//#define pc (p[i]-97)
//#define wc (w[i]-97)
//	vector<string> findAndReplacePattern(vector<string>& words, string p) {
//		vector<string> Ans;
//		for (auto &w : words) {
//			if (w.size() != p.size()) continue;
//			vector<int>w2p(26, -1), p2w(26,-1);
//			for (int i = 0; i != w.size(); i++) {
//				if (w2p[wc] == -1 && p2w[pc] == -1) w2p[wc] = pc, p2w[pc] = wc;
//				else if (w2p[wc]!=pc || p2w[pc]!=wc) goto Next;
//			}
//			Ans.push_back(w);
//		Next:;
//		}
//		return Ans;
//	}
//};
//
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
