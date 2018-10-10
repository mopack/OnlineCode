//#include <iostream>
//#include <vector>
//using namespace std;
//
//// 56ms/PR98 (PR100=48ms) 
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//	void DFS1(int t, int Parent, const vector<vector<int>>& G, vector<int>& ChildN, vector<int>& DisSum) { // BottomUp Calculate
//		for (auto &c : G[t]) {
//			if (c == Parent) continue;
//			DFS1(c, t, G, ChildN, DisSum);
//			ChildN[t] += ChildN[c];
//			DisSum[t] += DisSum[c] + ChildN[c]; //for now, it's just DisSum of t's Child
//		}
//	}
//	void DFS2(int t, int Parent, const vector<vector<int>>& G, const vector<int>& ChildN, vector<int>& DisSum) { // TopDown Modify
//		for (auto c : G[t]) {
//			if (c == Parent) continue;
//			DisSum[c] = DisSum[t] - ChildN[c] + (G.size() - ChildN[c]);
//			DFS2(c, t, G, ChildN, DisSum);
//		}
//	}
//public:
//	vector<int> sumOfDistancesInTree(int N, vector<vector<int>>& edges) {
//		// Init
//		vector<vector<int>> G(N); //Adjacent List
//		for (auto &e : edges) {
//			G[e[0]].push_back(e[1]);
//			G[e[1]].push_back(e[0]);
//		}
//		vector<int> ChildN(N, 1); // include itself
//		vector<int> DisSum(N, 0);
//
//		// Calc
//		DFS1(0, -1, G, ChildN, DisSum);
//		DFS2(0, -1, G, ChildN, DisSum);
//
//		return DisSum;
//	}
//};
//
//// 104ms / PR18. (Old Version, Same Idea)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//	int N;
//	vector<int> ChildN, DisSum, Vis;
//	vector<vector<int>> G; //Adjacent List
//
//	void DFS1(int t) { // BottomUp Calculate
//		Vis[t] = 1;
//		for (auto c : G[t]) {
//			if (!Vis[c]) {
//				DFS1(c);
//				ChildN[t] += ChildN[c];
//				DisSum[t] += DisSum[c] + ChildN[c]; //for now, it's just DisSum of t's Child
//			}
//		}
//	}
//	void DFS2(int t) { // TopDown Modify
//		Vis[t] = 1;
//		for (auto c : G[t]) {
//			if (!Vis[c]) {
//				DisSum[c] = DisSum[t] - ChildN[c] + (N - ChildN[c]);
//				DFS2(c);
//			}
//		}
//	}
//public:
//	vector<int> sumOfDistancesInTree(int N, vector<vector<int>>& edges) {
//		// Init
//		Solution::N = N;
//		G.resize(N);
//		ChildN = vector<int>(N, 1); // include itself
//		DisSum = vector<int>(N, 0);
//
//		for (auto &e : edges) {
//			G[e[0]].push_back(e[1]);
//			G[e[1]].push_back(e[0]);
//		}
//		// Calc
//		Vis = vector<int>(N, 0);
//		DFS1(0);
//		Vis = vector<int>(N, 0);
//		DFS2(0);
//		
//		return DisSum;
//	}
//};
//
//int main() {
//	Solution az;
//	vector<vector<int>> gt = { {1,2}, { 2,0 }, {0,3} };
//	vector<int> a = az.sumOfDistancesInTree(4, gt);
//	for (int i = 0; i < a.size(); i++)cout << a[i] << ' ';
//	system("pause");
//	return 0;
//} 