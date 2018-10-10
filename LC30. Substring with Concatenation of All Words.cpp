//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//
//// 20ms/PR79
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> findSubstring(string s, vector<string>&W) {
//		if (W.empty()) return{};
//		int N = W.size(), M = W[0].size()/*Length*/; string t;
//		vector<int>Ans;
//		unordered_map<string, int>Map1; //Dictionary
//		for (auto &w : W) Map1[w]++;
//		for (int k = 0; k < M; k++) {
//			unordered_map<string, int>Map2; // Local Dictionary
//			int Count = 0;
//			for (int i = k, j = k; j < s.size(); j += M) {
//				if ((j - i) / M >= N) {
//					t = s.substr(i, M); // remove word
//					if (Map1.count(t)) {
//						if (Map2[t]-- <= Map1[t]) Count--;
//					}
//					i += M;
//				}
//
//				t = s.substr(j, M); // add word
//				if (Map1.count(t)) {
//					if (++Map2[t] <= Map1[t]) Count++;
//				}
//
//				if (Count == N) Ans.push_back(i);
//			}
//		}
//		return Ans;
//	}
//};
//
//// 212ms/PR25
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////class Solution {
////public:
////	vector<int> findSubstring(string s, vector<string>&W) {
////		if (s.empty() || W.empty()) return{};
////		vector<int>Ans;
////		unordered_map<string, int>Map1;
////		int N = W.size(), M = W[0].size(), NM = N * M;
////		for (auto &w : W) Map1[w]++;
////		for (int i = 0; i + NM <= s.size(); i++) {
////			unordered_map<string, int>Map2;
////			int j;
////			for (j = 0; j < N; j++) {
////				string t = s.substr(i + j * M, M);
////				if (!Map1.count(t)) break;
////				Map2[t]++;
////				if (Map2[t] > Map1[t]) break;
////			}
////			if (j == N) Ans.push_back(i);
////		}
////		return Ans;
////	}
////};
//
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
//
//
