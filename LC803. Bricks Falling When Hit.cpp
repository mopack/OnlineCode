//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//// UnionFind 60ms/PR100 
//#define GetP(x, y) (x*M+y)
//#define Valid(x, y) (x >= 0 && y >= 0 && x < N && y < M && A[x][y])
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int N, M, NM;
//	vector<int>Fa, Size, Ans;
//	vector<bool>Pf;
//	int Find(int x) {
//		if (Fa[x] == -1) return x;
//		return Fa[x] = Find(Fa[x]);
//	}
//	void Union(int i, int j, vector<vector<int>>& A, vector<pair<int, int>>& moves, int k) {
//		int Ua = Find(GetP(i, j)), An = 0;
//		for (auto &u : moves) {
//			int x = i + u.first, y = j + u.second;
//			if (Valid(x, y)) {
//				int Ub = Find(GetP(x, y));
//				if (Ua != Ub) {
//					if (k >= 0) { if (!Pf[Ub]) An += Size[Ub]; }
//					Size[Ua] += Size[Ub];
//					Pf[Ua] = Pf[Ub] = Pf[Ua] | Pf[Ub];
//					Fa[Ub] = Ua;
//				}
//			}
//		}
//		if (k >= 0) { A[i][j] = 1; if (Pf[Ua]) Ans[k] = An; }
//	}
//	vector<int> hitBricks(vector<vector<int>>& A, vector<vector<int>>& hits) {
//		N = A.size(), M = A[0].size(), NM = N*M;
//		// BreakDown
//		for (auto &h : hits) {
//			if (A[h[0]][h[1]]) A[h[0]][h[1]] = 0;
//			else h[0] = -1;
//		}
//		// UnionFind Init
//		Fa.assign(NM, -1); Pf.assign(NM, 0); Size.assign(NM, 1);
//		for (int j = 0; j < M; j++) Pf[j] = 1;
//		// UnionFind: 
//		vector<pair<int, int>>move1 = { { 1, 0 },{ 0, 1 } };
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (A[i][j]) Union(i, j, A, move1, -1);
//			}
//		}			
//		// Recover
//		Ans.assign(hits.size(), 0);
//		vector<pair<int, int>>move2 = { { 0, 1 },{ 0, -1 },{ 1, 0 },{ -1, 0 } };
//		for (int k = hits.size() - 1; k >= 0; k--) {
//			if (hits[k][0] != -1) {
//				Union(hits[k][0], hits[k][1], A, move2, k);
//			}
//		}
//		return Ans;
//	}
//};
//
//
//int main() {
//	class Solution az;
//	vector<vector<int>>grid1 = { { 1,0,0,0 },{ 1,1,1,0 } };
//	vector<vector<int>>hits1 = { { 1,0 } };
//	vector<vector<int>>grid2 = { { 1,0,0,0 },{ 1,1,0,0 } };
//	vector<vector<int>>hits2 = { { 1,1 },{ 1,0 } };
//	vector<vector<int>> g = { { 0,1,1,1,1,1,1,1,1 },{ 1,1,1,1,1,1,1,1,1 },{ 0,0,0,1,0,0,1,1,1 },{ 0,0,1,1,0,1,1,1,0 },{ 0,0,0,0,0,1,1,1,1 },{ 0,0,0,0,0,0,0,1,0 } };
//	vector<vector<int>> h = { { 1,8 },{ 2,1 },{ 1,4 },{ 3,0 },{ 3,4 },{ 0,7 },{ 1,6 },{ 0,8 },{ 2,5 },{ 3,2 },{ 2,0 },{ 0,2 },{ 0,5 },{ 0,1 },{ 4,8 },{ 3,7 },{ 0,6 },{ 5,7 },{ 5,3 },{ 2,6 },{ 2,2 },{ 5,8 },{ 2,8 },{ 4,0 },{ 3,3 },{ 1,1 },{ 0,0 },{ 4,7 },{ 0,3 },{ 2,4 },{ 3,1 },{ 1,0 },{ 5,2 },{ 3,8 },{ 4,2 },{ 5,0 },{ 1,2 },{ 1,7 },{ 3,6 },{ 4,1 },{ 5,6 },{ 0,4 },{ 5,5 },{ 5,4 },{ 1,5 },{ 4,4 },{ 3,5 },{ 4,6 },{ 2,3 },{ 2,7 } };
//	vector<int>ans1 = az.hitBricks(grid2, hits2);
//	for (auto &x : ans1)cout << x << ' ';
//	system("pause");
//	return 0;
//} 
//
