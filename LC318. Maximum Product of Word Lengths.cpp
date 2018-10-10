//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <bitset>
//
//using namespace std;
//
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//class Solution {
//public:
//	vector<bitset<26>> b;
//
//	bool EX(int i, int j) {
//		for (int k = 0; k < 26; k++)
//			if (b[i].test(k) && b[j].test(k)) return 0;
//		return 1;
//	}
//	int maxProduct(vector<string>& words) {
//		// init
//		for (auto s: words) {
//			bitset<26> x;
//			for (auto c : s) x.set(c - 97);
//			b.push_back(x);
//		}
//
//		// calculate
//		int ans = 0;
//		for (int i = 0; i < words.size(); i++)
//			for (int j = 0; j < words.size(); j++)
//				if (EX(i, j)) ans = max(ans, words[i].size()*words[j].size());
//		return ans;
//	}
//};
//
//static int fast = []() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int maxProduct(vector<string>& A) {
//		vector<int> Key(A.size(), 0);
//		for (int i = 0; i < A.size(); i++) {
//			for (auto c : A[i]) {
//				Key[i] |= (1 << (c - 'a'));
//			}
//		}
//		int Ans = 0;
//		for (int i = 0; i < A.size(); i++) {
//			for (int j = i + 1; j < A.size(); j++) {
//				if (!(Key[i] & Key[j])) Ans = max(Ans, int(A[i].size() * A[j].size()));
//			}
//		}
//		return Ans;
//	}
//};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool exclusive(int i, int j, vector<vector<bool>>& d) {
//		for (int k = 0; k < 26; k++) {
//			if (d[i][k] && d[j][k]) return 0;
//		}
//		return 1;
//	}
//	int maxProduct(vector<string>& A) {
//		if (A.size() <= 1) return 0;
//		vector<vector<bool>> d(A.size(), vector<bool>(26, 0));
//		for (int i = 0; i < A.size(); i++) {
//			for (auto c : A[i]) {
//				d[i][c - 'a'] = 1;
//			}
//		}
//
//		int Ans = 0;
//		for (int i = 0; i < A.size(); i++) {
//			for (int j = i + 1; j < A.size(); j++) {
//				if (exclusive(i, j, d)) {
//					Ans = max(Ans, int(A[i].size()* A[j].size()));
//				}
//			}
//		}
//		return Ans;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 