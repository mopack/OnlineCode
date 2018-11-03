//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <set>
//#include <bitset>
//using namespace std;
//
////Sol: . Present: AC: Lines/84ms/PR16
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////class Solution {
////public:
////	vector<string> findRepeatedDnaSequences(string s) {
////		set<string> Set, Ans;
////		for (int i = 0; i + 10 <= s.size(); i++) {
////			string ss = s.substr(i, 10);
////			if (Set.find(ss) != Set.end()) Ans.insert(ss);
////			else Set.insert(ss);
////		}
////
////		vector<string> Ret;
////		for (auto a : Ans) Ret.push_back(a);
////		return Ret;
////	}
////};
//
////Sol: . Present: AC: 28Lines/4ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int c2n(char c) {
//		if (c == 'A') return 0;
//		if (c == 'T') return 1;
//		if (c == 'C') return 2;
//		return 3;
//	}
//	vector<string> findRepeatedDnaSequences(string s) {
//		if (s.size() <= 9) return{};
//		vector<string> Ans;
//		bitset<1 << 20> has, exceed; // bitset as hash. same as hash<bitset>
//		int mask = (1 << 20) - 1, key = 0, i;
//		for (i = 0; i <= 8; i++) 
//			key = (key << 2 ) | c2n(s[i]);
//		for (; i < s.size(); i++) {
//			key = (key << 2) & mask | c2n(s[i]);
//			if (exceed[key]) continue;
//			if (has[key]) {
//				Ans.push_back(s.substr(i - 9, 10));
//				exceed.set(key);
//			}
//			else has.set(key);
//		}
//		return Ans;
//	}
//};
//int main() {
//	Solution az;
//	az.findRepeatedDnaSequences("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT");
//
//	system("pause");
//	return 0;
//} 