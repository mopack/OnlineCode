//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//// 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int>Col; // DP. -1:Uncheck, 0, 1 as Two Colors
//	bool BFS(int st, vector<vector<int>>& G) {
//		queue<int>q;
//		Col[st] = 1; q.push(st);
//		while (!q.empty()) {
//			int i = q.front(); q.pop();
//			for (auto j : G[i]) {
//				if (Col[j] == -1) {
//					Col[j] = 1 - Col[i];
//					q.push(j);
//				}else if (Col[i] == Col[j])
//					return 0;
//			}
//		}
//		return 1;
//	}
//	bool isBipartite(vector<vector<int>>& G) {
//		int N = G.size();
//		Col = vector<int>(N, -1);
//		for (int i = 0; i != N; i++) {
//			if (Col[i] == -1) {
//				if (!BFS(i, G)) return 0;
//			}
//		}
//		return 1;
//	}
//};
//
//// 8ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int>No; // DP
//	void DFS(int i, int NO, vector<vector<int>>& G) {
//		No[i] = NO;
//		for (auto &j : G[i]) {
//			if (!No[j]) DFS(j, NO + 1, G);
//		}
//	}
//	bool isBipartite(vector<vector<int>>& G) { // G as ConectedList
//		int N = G.size();
//		No = vector<int>(N, 0);
//		for (int i = 0; i != N; i++) {
//			if (!No[i]) DFS(i, 1, G);
//		}
//
//		for (int i = 0; i < N; i++) {
//			for (auto &j : G[i]) {
//				if (((No[i] + No[j]) & 1) == 0) return 0;
//			}
//		}
//		return 1;
//	}
//};
//
//int main() {
//	Solution az;
//	vector<vector<int>> x = { { 4 },{},{ 4 },{ 4 },{ 0,2,3 } };
//	cout << az.isBipartite(x) << '\n';
//
//	system("pause");
//	return 0;
//} 