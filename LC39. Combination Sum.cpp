//#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// 4ms
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void BT(int i, int K, vector<int>&A, vector<int> &An, vector<vector<int>> &Ans) {
//		if (K == 0) { Ans.push_back(An); return; }
//		for (; i < A.size() && A[i] <= K; i++) {
//			An.push_back(A[i]);
//			BT(i, K - A[i], A, An, Ans);
//			An.pop_back();
//		}
//	}
//	vector<vector<int>> combinationSum(vector<int>&A, int K) {
//		vector<vector<int>> Ans; vector<int> An;
//		sort(A.begin(), A.end());
//		BT(0, K, A, An, Ans);
//		return Ans;
//	}
//};
//
////8ms
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	void BT(int i, int K, vector<int>&A, vector<int> An, vector<vector<int>> &Ans) {
//		if (i == A.size() || K < A[i]) {
//			if (K == 0) { Ans.push_back(An); }
//			return;
//		}
//
//		while (K >= 0) {	
//			BT(i + 1, K, A, An, Ans);
//			An.push_back(A[i]); K -= A[i];
//		}
//	}
//	vector<vector<int>> combinationSum(vector<int>&A, int K) {
//		vector<vector<int>> Ans; vector<int> An;
//		sort(A.begin(), A.end());
//		BT(0, K, A, An, Ans);
//		return Ans;
//	}
//};
//
////Other's
//class Solution {
//private:
//	void combinationSum(const vector<int>& candidates, int pos, int target,
//		vector<int>& cur, vector<vector<int>>& result) {
//		if (pos == candidates.size()) {
//			if (target == 0) {
//				result.push_back(cur);
//			}
//			return;
//		}
//		// Use 0 times
//		combinationSum(candidates, pos + 1, target, cur, result);
//		if (target >= candidates[pos]) {
//			// Use n times
//			cur.push_back(candidates[pos]);
//			combinationSum(candidates, pos, target - candidates[pos], cur, result);
//			cur.pop_back();
//		}
//	}
//public:
//	vector<vector<int>> combinationSum(const vector<int>& candidates, int target) {
//		vector<vector<int>> result;
//		vector<int> cur;
//		combinationSum(candidates, 0, target, cur, result);
//		return result;
//	}
//};
//
////Other's
//static int x = []() { std::ios::sync_with_stdio(false); cin.tie(NULL); return 0; }();
//class Solution {
//	void traverse(const vector<int>& c, int target, int min_pos, vector<int>&partial, vector<vector<int>>& rst) {
//		if (target == 0) {
//			rst.push_back(partial);
//			return;
//		}
//
//		for (int i = min_pos; i<c.size() && c[i] <= target; i++) {
//			partial.push_back(c[i]);
//			traverse(c, target - c[i], i, partial, rst);
//			partial.pop_back();
//		}
//	}
//
//public:
//	vector<vector<int>> combinationSum(vector<int>& c, int target) {
//		sort(c.begin(), c.end());
//		vector<vector<int>> rst;
//		vector<int> partial;
//		traverse(c, target, 0, partial, rst);
//		return rst;
//	}
//
//};
//int main() {
//	class Solution az;
//	vector<int> x = { 2,3,6,7 };
//	az.combinationSum(x, 7);
//	system("pause");
//	return 0;
//} 
