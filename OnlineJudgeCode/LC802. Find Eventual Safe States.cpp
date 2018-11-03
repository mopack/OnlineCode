//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//// DFS: 68ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//	vector<int>DP; // DP, 0:uncheck, 1:Safe, 2:Unsafe
//	bool DFS(int x, const vector<vector<int>>&Back) { //Back
//		if (DP[x]) return DP[x] == 1;
//		DP[x] = 2;
//		for (auto &y : Back[x]) {
//			if (!DFS(y, Back)) return 0;
//		}
//		return DP[x] = 1;
//	}
//public:
//	vector<int> eventualSafeNodes(vector<vector<int>>&Back) {
//		int N = Back.size();
//		DP = vector<int>(N, 0);
//
//		vector<int>Ans;
//		for (int i = 0; i < N; i++) {
//			if (DFS(i, Back)) Ans.push_back(i);
//		}
//		return Ans;
//	}
//};
//
//// BFS(1Queue) : 76ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> eventualSafeNodes(vector<vector<int>>& Back) {
//		int N = Back.size();
//		vector<vector<int>> Front(N);
//		vector<int> BackN(N);
//		queue<int> q;
//		for (int x = 0; x != N; x++) {
//			if ((BackN[x] = Back[x].size()) == 0) q.push(x);
//			for (auto &y : Back[x]) {
//				Front[y].push_back(x);
//			}
//		}
//
//		while (!q.empty()) {
//			int x = q.front(); q.pop();
//			for (auto &y : Front[x]) {
//				if (--BackN[y] == 0) q.push(y);
//			}
//		}
//
//		vector<int>Ans;
//		for (int i = 0; i != N; i++) {
//			if (BackN[i] == 0) Ans.push_back(i);
//		}
//		return Ans;
//	}
//};
//
//int main() {
//	vector<vector<int>> x = { { 1,2 },{ 2,3 },{ 5 },{ 0 },{ 5 },{},{} };
//	Solution az;
//	vector<int> y = az.eventualSafeNodes(x);
//	//for (auto Y : y)cout << Y << ' ';
//
//	system("pause");
//	return 0;
//} 
//
//
