//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//// BFS: 12ms / PR100 (using 2-queue-LevelBFS is more easier than 1-queue-BFS & DFS)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> findMinHeightTrees(int N, vector<pair<int, int>>&edges) {
//		if (N == 1) return{ 0 };
//		vector<vector<int>>G(N); // Connected List (Front)
//		for (auto &p : edges) {
//			G[p.first].push_back(p.second);
//			G[p.second].push_back(p.first);
//		}
//		vector<int>Degree(N); // Degree = 1 means you only have parent. (BackN)
//		vector<int>a, b; //queue
//		for (int i = 0; i < N; i++) {
//			if ((Degree[i] = G[i].size()) == 1) a.push_back(i);
//		}
//
//		int Done = a.size();
//		while (Done != N) {
//			for(auto &x : a) {
//				for (auto &y : G[x]) {
//					if ((--Degree[y]) == 1) b.push_back(y);
//				}
//			}
//			swap(a, b), b = {};
//			Done += a.size();
//		}
//		return a;
//	}
//};
//int main() {
//	class Solution az;
//	vector<pair<int, int>> x = { }; int N = 1;
//	vector<int> y = az.findMinHeightTrees(N, x);
//	cout << y[0] << '\n';
//	system("pause");
//	return 0;
//} 