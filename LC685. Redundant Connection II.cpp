//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////Sol1: UnionFind, 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//	struct UnionFind {
//	public:
//		vector<int> Size, P;
//		UnionFind(int N) {
//			Size = vector<int>(N + 1, 1);
//			P.resize(N + 1);
//			for (int i = 1; i <= N; i++)P[i] = i;
//		}
//		int Find(int x) {
//			if (P[x] == x) return x;
//			return P[x] = Find(P[x]);
//		}
//		bool Union(int x, int y) { // return 1 if it is a cycle creator
//			int Ux = Find(x), Uy = Find(y);
//			if (Ux == Uy)return 1;
//			if (Size[Ux] < Size[Uy]) swap(Ux, Uy);
//			Size[Ux] += Size[Uy];
//			P[Uy] = Ux;
//			return 0;
//		}
//	};
//public:
//	vector<int> findRedundantDirectedConnection(vector<vector<int>>&Edge) {
//		int N = Edge.size();
//		vector<int>Ans1, Ans2, Parent(N + 1, 0);
//		for (auto &e : Edge) {
//			if (Parent[e[1]]) {
//				Ans1 = { Parent[e[1]], e[1] };
//				Ans2 = e;
//			}else Parent[e[1]] = e[0];
//		}
//			
//		// Cycle Check
//		UnionFind UF(N);
//		for (auto &e : Edge) {
//			if (e == Ans2)continue; // Cutoff Ans2
//			if (UF.Union(e[0], e[1]))
//				return (Ans1.empty()) ? e : Ans1;
//		}
//		return Ans2;
//	}
//};
//
//int main() {
//	Solution az;
//	vector<vector<int>> s = { { 1,2 },{ 1,3 },{ 2,3 } };
//	vector<vector<int>> t = { {1, 2}, { 2,3 }, { 3,4 }, { 4,1 }, { 1,5 } };
//	vector<int> u = az.findRedundantDirectedConnection(t);
//	for (auto &x:u) cout << x << ' ';
//	system("pause");
//	return 0;
//}