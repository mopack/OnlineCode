//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <list>
//using namespace std;
//// UnionFindm,  0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int Find(int x, vector<int>& P) {
//		if (x == P[x]) return x;
//		return P[x] = Find(P[x], P);
//	}
//	vector<int> findRedundantConnection(vector<vector<int>>& E) {
//		int N = E.size();
//		vector<int>P(N + 1);
//		for (int i = 0; i <= N; i++)P[i] = i;
//		for (auto &e : E) {
//			int Ux = Find(e[0], P), Uy = Find(e[1], P);
//			if (Ux == Uy) return e;
//			else P[Uy] = Ux; // or P[Ux] = Uy
//		}
//	}
//};
//
////// Sol1(V2): find bridge algorithm. T(E+V).S(E).   AC 12ms/4ms PR28.38
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	vector<vector<int>>G;
////	vector<int> no, low, parent;
////	int id, N;
////	void go(int u) { // DFS
////		no[u] = low[u] = ++id;
////		for (auto v : G[u])
////			if (!no[v]) {
////				parent[v] = u; go(v);
////				low[u] = min(low[u], low[v]);
////			}else if (v != parent[u]) 
////				low[u] = min(low[u], no[v]);
////	}
////	vector<int> findRedundantConnection(vector<vector<int>>&E) {
////		N = E.size(); G.resize(N + 1);
////		no.resize(N + 1); low.resize(N + 1); parent.resize(N + 1);
////		for (int i = 0; i < N; i++)
////			G[E[i][0]].push_back(E[i][1]), G[E[i][1]].push_back(E[i][0]);
////		// go DFS
////		id = 0; go(1);
////		// find Bridge. after DFS has completed, we can now confirm wheather (u, v) is a bridge or not: bool isBridge(u, v) = if(low[v] > no[u])  
////		for (int i = N - 1; i >= 0; i--) {
////			int u = E[i][0], v = E[i][1];
////			if (u != parent[v]) swap(u, v);
////			if (low[v] <= no[u]) return E[i];
////		}
////	}
////};
////
////// Sol1(V1): find bridge algorithm. T(E+V).S(V^2).  AC 12ms/4ms PR28.38
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	vector<vector<int>>G;
////	vector<int> no, low, parent;
////	int id, N;
////	bool bridge[1001][1001] = {};
////
////	void go(int u) { // DFS
////		no[u] = low[u] = ++id;
////		for (auto v : G[u])
////			if (!no[v]) { // not visited
////				parent[v] = u; go(v);
////				low[u] = min(low[u], low[v]);
////				if (low[v] > no[u]) { bridge[u][v] = bridge[v][u] = 1; }
////			}else if (v != parent[u])
////				low[u] = min(low[u], no[v]);
////	}
////	vector<int> findRedundantConnection(vector<vector<int>>&E) {
////		N = E.size(); G = vector<vector<int>>(N + 1);
////		no = vector<int>(N + 1); low = vector<int>(N + 1); parent = vector<int>(N + 1);
////		for (auto e : E)
////			G[e[0]].push_back(e[1]), G[e[1]].push_back(e[0]);
////		// find Bridge
////		id = 0; go(1);
////		// return
////		for (int i = N - 1; i >= 0; i--)
////			if (bridge[E[i][0]][E[i][1]] == 0) return E[i];
////	}
////};
//
//int main() {
//	Solution az;
//
//	vector<vector<int>> t = { { 21,22 },{ 4,7 },{ 12,13 },{ 13,25 },{ 12,15 },{ 17,23 },{ 15,16 },{ 8,21 },{ 23,24 },{ 3,9 },{ 19,21 },{ 13,21 },{ 4,10 },{ 5,6 },{ 1,20 },{ 10,16 },{ 1,4 },{ 10,14 },{ 5,20 },{ 1,2 },{ 3,24 },{ 2,11 },{ 11,24 },{ 24,25 },{ 17,18 } };
//	vector<int> u = az.findRedundantConnection(t);
//	cout <<endl<< u[0] << ' ' << u[1];
//	system("pause");
//	return 0;
//}