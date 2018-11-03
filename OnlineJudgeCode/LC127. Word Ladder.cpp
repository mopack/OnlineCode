//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_set>
//using namespace std;
//
//// BFS 16ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int ladderLength(string st, string ed, vector<string>&w) {
//		unordered_set<string>Dict(w.begin(), w.end()), A, B, C;
//		if (!Dict.count(ed)) return 0;
//		A.insert(st); B.insert(ed);
//		int Level = 1;
//		while (!A.empty()) {
//			for (auto &a : A) {
//				string s = a;
//				for (auto &c : s) {
//					char c0 = c;
//					for (c = 'a'; c <= 'z'; c++) {
//						if (c == c0)continue;
//						if (B.count(s)) return Level + 1;
//						if (Dict.count(s)) {
//							Dict.erase(s);
//							C.insert(s);
//						}
//					}
//					c = c0;
//				}
//			}
//			Level++;
//			swap(A, C); C.clear();
//			if (B.size() < A.size()) swap(A, B);
//		}
//		return 0;
//	}
//};
//
//// BFS 16ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int go(unordered_set<string> &Set1, unordered_set<string>& Set2, unordered_set<string>&Dict, int Level) {
//		if (Set1.empty()) return 0;
//		if (Set2.size() < Set1.size()) return go(Set2, Set1, Dict, Level);
//
//		unordered_set<string> Set3;
//		for (auto &W : Set1) {
//			string w = W;
//			for (auto &c : w) {
//				char c0 = c;
//				for (c = 'a'; c <= 'z'; c++) {
//					if (c == c0) continue;
//					if (Set2.count(w)) return Level + 1;
//					if (Dict.count(w)) {
//						Dict.erase(w);
//						Set3.insert(w);
//					}
//				}
//				c = c0;
//			}
//		}
//		return go(Set2, Set3, Dict, Level + 1);
//	}
//	int ladderLength(string st, string ed, vector<string>&w) {
//		unordered_set<string>Dict(w.begin(), w.end()), Set1, Set2;
//		if (!Dict.count(ed)) return 0;
//		Set1.insert(st); Set2.insert(ed);
//		return go(Set1, Set2, Dict, 1);
//	}
//};
//
//// 116ms/PR55
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//	bool Dif1(string &a, string &b) {
//		int dif = 0;
//		for (int i = 0; i != a.size(); i++) {
//			if (a[i] != b[i]) {
//				if (++dif > 1) return 0;
//			}
//		}
//		return dif == 1;
//	}
//public:
//	int ladderLength(string st, string ed, vector<string>&w) {
//		auto it = find(w.begin(), w.end(), ed);
//		if (it == w.end()) return 0;
//		int AnsId = it - w.begin(), N = w.size(), Count = 1;
//
//		vector<int>S(N), A = {N}, B;
//		for (int i = 0; i < N; i++) S[i] = i;
//		w.push_back(st);
//		while (!A.empty()) {
//			for (auto &a : A) {
//				for (int i = 0; i < S.size();) {
//					if (Dif1(w[a], w[ S[i] ])) {
//						if (S[i] == AnsId) return Count + 1;
//						B.push_back(S[i]); 
//						S[i] = S.back(); S.pop_back();
//					}else 
//						i++;
//				}
//			}
//			Count++; A.swap(B); B = {};
//		}
//		return 0;
//	}
//};
//
//int main() {
//	class Solution az;
//	vector<string> x = { "hot","dot","dog","lot","log","cog" };
//	cout<<"\nAns="<<az.ladderLength("hit", "cog", x);
//	system("pause");
//	return 0;
//} 