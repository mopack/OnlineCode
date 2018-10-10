//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// 28ms/PR86 O(N^2)
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////#define F(i, j) f(i, j, s, d)
////	int f(int i, int j, string &s, vector<vector<int>>&d) {
////		if (i > j) return 0;
////		if (i == j) return 1;
////		if (d[i][j] != -1) return d[i][j];
////		if (s[i] == s[j]) { // Longer
////			return d[i][j] = F(i + 1, j - 1) + 2;
////		}
////		return d[i][j] = max(F(i + 1, j), F(i, j - 1)); // Delete Left or Right
////	}
////	int longestPalindromeSubseq(string s) {
////		int N = s.size();
////		vector<vector<int>>d(N, vector<int>(N, -1));
////		return F(0, N - 1);
////	}
////};
//
////16ms/PR97 O(N^2)
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	int longestPalindromeSubseq(string s) {
////		if (s.empty()) return 0;
////		int N = s.size();
////		vector<int>d(N);
////		d[0] = 1;
////
////		for (int i = 1; i != N; i++) {
////			int MaxLen = 0;
////			for (int j = i - 1; j >= 0; j--) {
////				int PreviousMaxLen = MaxLen;
////				if (d[j] > MaxLen) {
////					MaxLen = d[j];
////				}
////				if (s[j] == s[i]) {
////					d[j] = PreviousMaxLen + 2; // Update
////				}
////			}
////		}
////
////		int MaxLen = 0;
////		for (int i = 0; i != N; i++) {
////			MaxLen = max(MaxLen, d[i]);
////		}
////		return MaxLen;
////	}
////};
//
//// If you want one of the solution of the longestPalindromeSubseq
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////#define F(i, j) f(i, j, s, d, p)
////	int f(int i, int j, string &s, vector<vector<int>>&d, vector<vector<int>>&p) {
////		if (i > j) return 0;
////		if (i == j) return 1;
////		if (d[i][j] != -1) return d[i][j];
////
////		if (s[i] == s[j]) { // Longer
////			d[i][j] = F(i + 1, j - 1) + 2, p[i][j] = 0;
////			return d[i][j];
////		}
////
////		int DL = F(i + 1, j), DR = F(i, j - 1); //Delete Left or Right
////		if (DL > DR) { // Delete Left is better
////			d[i][j] = DL, p[i][j] = 1;
////		}
////		else {
////			d[i][j] = DR, p[i][j] = 2;
////		}
////		return d[i][j];
////	}
////	void Print(int i, int j, string &s, vector<vector<int>>&p, string &Ans) {
////		if (i > j) return;
////		if (i == j) { Ans.push_back(s[i]); return; }
////
////		if (p[i][j] == 0) {
////			Ans.push_back(s[i]);
////			Print(i + 1, j - 1, s, p, Ans);
////			Ans.push_back(s[j]);
////		}
////		else if (p[i][j] == 1) {
////			Print(i + 1, j, s, p, Ans);
////		}
////		else {
////			Print(i, j - 1, s, p, Ans);
////		}
////	}
////	string longestPalindromeSubseq(string s) {
////		if (s.empty()) return s;
////		int N = s.size();
////		vector<vector<int>>d(N, vector<int>(N, -1));
////		vector<vector<int>>p(N, vector<int>(N));
////		F(0, N - 1);
////
////		string Ans;
////		Print(0, N - 1, s, p, Ans);
////		return Ans;
////	}
////};
//
//
//int main() {
//	class Solution az;
//	cout << "\nAns=" << az.longestPalindromeSubseq("abcda");
//	system("pause");
//	return 0;
//}
