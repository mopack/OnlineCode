//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
////Sol: . Present: AC: 13Lines/40ms/PR19
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int MaxWin(vector<int>& A, int s, int e) {
//		if (s == e) return A[s]; // s==e
//		int re1, re2;
//		re1 = A[s] - MaxWin(A, s + 1, e);
//		re2 = A[e] - MaxWin(A, s, e - 1);
//		return max(re1, re2);
//	}
//	bool PredictTheWinner(vector<int>& nums) {
//		return MaxWin(nums, 0, nums.size() - 1) >= 0;
//	}
//};
//
////Sol: . Present: AC: 19Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<vector<int>>d; //DP helping reduce D&C time
//	int MaxWin(int s, int e, vector<int>&A) {
//		int& ret = d[s][e];
//		if (ret < INT_MAX) return ret;
//		if (s == e) return A[s];
//
//		int re1, re2;
//		re1 = A[s] - MaxWin(s + 1, e, A);
//		re2 = A[e] - MaxWin(s, e - 1, A);
//		return ret = max(re1, re2);
//	}
//	bool PredictTheWinner(vector<int>&A) {
//		d.resize(A.size(), vector<int>(A.size(), INT_MAX));
//		return MaxWin(0, A.size() - 1, A) >= 0;
//	}
//};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int MaxWin(int s, int e, vector<int>& A, vector<vector<int>>& d) {
//		if (d[s][e] != INT_MIN) return d[s][e];
//		if (s == e) return d[s][e] = A[s];
//
//		int Ret1 = A[s] - MaxWin(s + 1, e, A, d);
//		int Ret2 = A[e] - MaxWin(s, e - 1, A, d);
//		return d[s][e] = max(Ret1, Ret2);
//	}
//	bool PredictTheWinner(vector<int>& A) {
//		vector<vector<int>>d(A.size(), vector<int>(A.size(), INT_MIN));
//		return MaxWin(0, A.size() - 1, A, d) >= 0;
//	}
//};
//
//int main() {
//	//Solution az;
//	//vector<int> x = { 1,1 };
//	//az.PredictTheWinner(x);
//	system("pause");
//	return 0;
//} 