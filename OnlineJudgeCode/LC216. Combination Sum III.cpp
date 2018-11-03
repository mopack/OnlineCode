//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	void go(int k, int n, int st, vector<int>&An, vector<vector<int>>&Ans) {
//		if (k == 1) {
//			if (n >= st && n < 10) {
//				An.push_back(n); Ans.push_back(An);
//				An.pop_back();
//			}
//			return;
//		}
//
//		for (int i = st; i + i + 1 <= n; i++) {
//			An.push_back(i);
//			go(k - 1, n - i, i + 1, An, Ans);
//			An.pop_back();
//		}
//	}
//	vector<vector<int>> combinationSum3(int k, int n) {
//		vector<vector<int>> Ans;
//		vector<int> An;
//		go(k, n, 1, An, Ans);
//		return Ans;
//	}
//};
//
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void go(int k, int n, int st, vector<int>&An, vector<vector<int>>&Ans) {
//		if (k == 0 && n == 0) {
//			Ans.push_back(An);
//			return;
//		}
//		if (st == 10) return;
//
//		go(k, n, st + 1, An, Ans);
//		An.push_back(st);
//		go(k - 1, n - st, st + 1, An, Ans);
//		An.pop_back();
//	}
//	vector<vector<int>> combinationSum3(int k, int n) {
//		vector<vector<int>> Ans;
//		vector<int> An;
//		go(k, n, 1, An, Ans);
//		return Ans;
//	}
//};
//
//int main() {
//	class Solution az;
//	az.combinationSum3(3, 7);
//	system("pause");
//	return 0;
//} 
