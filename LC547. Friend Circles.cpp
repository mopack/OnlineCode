//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//// DFS, 8ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void DFS(int x, const vector<vector<int>>& A, vector<bool>& Vis) {
//		Vis[x] = 1;
//		for (int y = 0; y < A.size(); y++) {
//			if (A[x][y] && !Vis[y]) DFS(y, A, Vis);
//		}
//	}
//	int findCircleNum(vector<vector<int>>& A) {
//		int GroupN = 0;
//		vector<bool>Vis(A.size(), 0);
//
//		for (int i = 0; i < A.size(); i++) {
//			if (!Vis[i]) {
//				GroupN++;
//				DFS(i, A, Vis);
//			}
//		}
//		return GroupN;
//	}
//};
//
//// UnionFind, 8ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//	struct UnionFind {
//		int UN;
//		vector<int>P, Size;
//		UnionFind(int N) {
//			UN = N;
//			P.resize(N);
//			for (int i = 0; i < N; i++) P[i] = i;
//			Size = vector<int>(N, 1);
//		}
//		int Find(int x) {
//			if (x == P[x]) return x;
//			return P[x] = Find(P[x]);
//		}
//		void Union(int x, int y) {
//			int Ux = Find(x), Uy = Find(y);
//			if (Ux == Uy)return;
//			if (Size[Ux] < Size[Uy]) swap(Ux, Uy);
//			Size[Ux] += Size[Uy];
//			P[Uy] = Ux; UN--;
//		}
//	};
//public:
//	int findCircleNum(vector<vector<int>>& A) {
//		int N = A.size();
//		UnionFind UF(N);
//		for (int i = 0; i < N; i++) {
//			for (int j = i + 1; j < N; j++) {
//				if (A[i][j]) UF.Union(i, j);
//			}
//		}
//		return UF.UN;
//	}
//};
//
//int main() {
//	class Solution az;
//	vector<vector<int>> x = { {1, 1, 1}, { 1,1,1 }, { 1,1,1 } };
//	az.findCircleNum(x);
//	system("pause");
//	return 0;
//} 