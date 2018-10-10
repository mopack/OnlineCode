//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_set>
//#include <unordered_map>
//using namespace std;
////DFS(unordered_set): 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int longestConsecutive(vector<int>&A){
//		unordered_set<int>Set(A.begin(), A.end());
//		int Ans = 0, S, E;
//		for (auto &a : A) {
//			if (!Set.count(a))continue;
//			for (S = a - 1; Set.count(S); S--) Set.erase(S);
//			for (E = a + 1; Set.count(E); E++) Set.erase(E);
//			Ans = max(Ans, E - S - 1);
//		}
//		return Ans;
//	}
//};
//
//// UnionFind: 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//	struct UnionFind {
//		int MaxSize;
//		vector<int>P, Max, Min;
//		UnionFind(vector<int>&A) : Max(A), Min(A){
//			MaxSize = 1;
//			P.resize(A.size());
//			for (int i = 0; i < A.size(); i++)P[i] = i;
//		}
//		int Find(int x) {
//			if (x == P[x]) return x;
//			return P[x] = Find(P[x]);
//		}
//		void Union(int x, int y) {
//			int Ux = Find(x), Uy = Find(y);
//			if (Ux == Uy)return;
//			if (Max[Ux] - Min[Ux] < Max[Uy] - Min[Ux]) swap(Ux, Uy); // Len: Ux >= Uy
//			Max[Ux] = max(Max[Ux], Max[Uy]);
//			Min[Ux] = min(Min[Ux], Min[Uy]);
//			MaxSize = max(MaxSize, Max[Ux] - Min[Ux] + 1);
//			P[Uy] = Ux;
//		}
//	};
//public:
//	int longestConsecutive(vector<int>&A) {
//		if (A.empty()) return 0;
//		UnionFind UF(A);
//		unordered_map<int, int>Ai2i;
//		for (int i = 0; i < A.size(); i++)Ai2i.emplace(A[i], i);
//
//		unordered_map<int, int>::iterator k;
//		for (int i = 0; i < A.size(); i++) {
//			if ((k = Ai2i.find(A[i] + 1)) != Ai2i.end()) UF.Union(k->second, i);
//			if ((k = Ai2i.find(A[i] - 1)) != Ai2i.end()) UF.Union(k->second, i);
//		}
//		return UF.MaxSize;
//	}
//};
//
//int main() {
//	vector<int> A = { 100, 4, 200, 1, 3, 2 };
//	class Solution az;
//	cout << az.longestConsecutive(A) << '\n';
//	system("pause");
//	return 0;
//} 