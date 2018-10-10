//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//using namespace std;
//
////DFS, Greedy. 4ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void DFS(int &Ans, vector<int> &Coin, int Target, int i, int Count) {
//		if (i < 0) return;
//		if (Target % Coin[i] == 0) {
//			Ans = min(Ans, Count + Target / Coin[i]);
//			return;
//		}
//		if (Count + Target / Coin[i] < Ans - 1) { // Pruing
//			for (int k = Target / Coin[i]; k >= 0; k--) {
//				DFS(Ans, Coin, Target - k * Coin[i], i - 1, Count + k);
//			}
//		}
//	}
//	int coinChange(vector<int>&Coin, int N) {
//		int Ans = INT_MAX;
//		sort(Coin.begin(), Coin.end());
//		DFS(Ans, Coin, N, Coin.size() - 1, 0);
//		return (Ans == INT_MAX) ? -1 : Ans;
//	}
//};
//
//////DP, 12ms/PR98
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int coinChange(vector<int>&Coin, int N) {
//		vector<int>d(N + 1, INT_MAX);
//		d[0] = 0;
//
//		for (auto &c : Coin) {
//			for (int i = c; i <= N; i++) {
//				if (d[i - c] != INT_MAX) d[i] = min(d[i], d[i - c] + 1);
//			}
//		}
//		return (d[N] == INT_MAX) ? -1 : d[N];
//	}
//};
//
//int main() {
//	vector<int>Coin = { 1,3,5};
//	class Solution az;
//	az.coinChange(Coin, 8);
//	system("pause");
//	return 0;
//} 
//
//
