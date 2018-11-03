//#include <iostream>
//#include <vector>
//#include <string>
//#include <unordered_set>
//#include <queue>
//using namespace std;
//
//// UnionFind (no Balancing) + BFS / (最高: 68ms, 76ms(PR100), 平均: 100ms, 200ms以內都可接受)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//	struct UnionFind {
//		int GroupN, N;
//		vector<int>P;
//
//		int Find(int x) {
//			if (P[x] == x) return x;
//			return P[x] = Find(P[x]);
//		}
//		void Union(int x, int y) {
//			int Ux = Find(x), Uy = Find(y);
//			if (Ux == Uy) return;
//			P[Uy] = Ux; GroupN--;
//		}
//		int GetGroupN(vector<string>& A) {
//			// Init
//			N = A.size(), GroupN = N;
//			P.resize(N);
//			for (int i = 0; i != N; i++) P[i] = i;
//
//			for (int i = 0; i < N; i++) {
//				for (int j = i + 1; j < N; j++) {
//					if (Similar(A[i], A[j])) {
//						Union(i, j);
//					}
//				}
//			}
//			return GroupN;
//		}
//		bool Similar(string &s1, string &s2) {
//			int Diff = 0;
//			for (int i = 0; i != s1.size(); i++) {
//				if (s1[i] != s2[i]) {
//					if (++Diff > 2) return 0;
//				}
//			}
//			return 1;
//		}
//	};
//
//	int OneChangeBFS_GetGroupN(vector<string>& A) {
//		int GroupN = 0;
//		unordered_set<string>Set(A.begin(), A.end());
//		queue<string>q;
//		while (!Set.empty()) {
//			q.push(*Set.begin()); Set.erase(Set.begin());
//			GroupN++;
//			while (!q.empty()) {
//				string s = q.front(); q.pop();
//				for (int i = 0; i < s.size(); i++) {
//					for (int j = i + 1; j < s.size(); j++) {
//						if (s[i] != s[j]) {
//							swap(s[i], s[j]);
//							auto it = Set.find(s);
//							if (it != Set.end()) {
//								q.push(s); Set.erase(it);
//								if (Set.empty()) return GroupN;
//							}
//							swap(s[i], s[j]);
//						}
//					}
//				}
//			}
//		}
//		return GroupN;
//	}
//
//public:
//	int numSimilarGroups(vector<string>& A) {
//		if (A[0].size() < 20) return OneChangeBFS_GetGroupN(A);
//		return UnionFind().GetGroupN(A);
//	}
//};
//
//// UnionFind( with Balancing) + BFS / 100ms
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//	struct UnionFind {
//		int GroupN, N;
//		vector<int>P, Size;
//
//		int Find(int x) {
//			if (P[x] == x) return x;
//			return P[x] = Find(P[x]);
//		}
//		void Union(int x, int y) {
//			int Ux = Find(x), Uy = Find(y);
//			if (Ux == Uy) return;
//			if (Size[Ux] < Size[Uy]) swap(Ux, Uy); // Size[Ux] >= Size[Uy]
//			P[Uy] = Ux; Size[Ux] += Size[Uy]; GroupN--;
//		}
//		int GetGroupN(vector<string>& A) {
//			// Init
//			N = A.size(), GroupN = N;
//			Size = vector<int>(N, 1);
//			P.resize(N);
//			for (int i = 0; i != N; i++) P[i] = i;
//
//			for (int i = 0; i < N; i++) {
//				for (int j = i + 1; j < N; j++) {
//					if (Similar(A[i], A[j])) {
//						Union(i, j);
//					}
//				}
//			}
//			return GroupN;
//		}
//		bool Similar(string &s1, string &s2) {
//			int Diff = 0;
//			for (int i = 0; i != s1.size(); i++) {
//				if (s1[i] != s2[i]) {
//					if (++Diff > 2) return 0;
//				}
//			}
//			return 1;
//		}
//	};
//
//	int OneChangeBFS_GetGroupN(vector<string>& A) {
//		int GroupN = 0;
//		unordered_set<string>Set(A.begin(), A.end());
//		queue<string>q;
//		while (!Set.empty()) {
//			q.push(*Set.begin()); Set.erase(Set.begin());
//			GroupN++;
//			while (!q.empty()) {
//				string s = q.front(); q.pop();
//				for (int i = 0; i < s.size(); i++) {
//					for (int j = i + 1; j < s.size(); j++) {
//						if (s[i] != s[j]) {
//							swap(s[i], s[j]);
//							auto it = Set.find(s);
//							if (it != Set.end()) {
//								q.push(s); Set.erase(it);
//								if (Set.empty()) return GroupN;
//							}
//							swap(s[i], s[j]);
//						}
//					}
//				}
//			}
//		}
//		return GroupN;
//	}
//
//public:
//	int numSimilarGroups(vector<string>& A) {
//		if (A[0].size() < 20) return OneChangeBFS_GetGroupN(A);
//		return UnionFind().GetGroupN(A);
//	}
//};
//
//// DFS 320ms / PR63
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//	bool Similar(string &s1, string &s2) {
//		int Diff = 0;
//		for (int i = 0; i != s1.size(); i++) {
//			if (s1[i] != s2[i]) {
//				if (++Diff > 2) return 0;
//			}
//		}
//		return 1;
//	}
//public:
//	vector<vector<int>> D;
//	vector<bool> Vis;
//	void DFS(int i) {
//		Vis[i] = 1;
//		for (auto j : D[i]) {
//			if (!Vis[j]) DFS(j);
//		}
//	}
//	int numSimilarGroups(vector<string>& A) {
//		// Create Adjacent List
//		int N = A.size();
//		D = vector<vector<int>>(N);
//		for (int i = 0; i < N; i++) {
//			for (int j = i + 1; j < N; j++) {
//				if (Similar(A[i], A[j])) {
//					D[i].push_back(j);
//					D[j].push_back(i);
//				}
//			}
//		}
//		// DFS
//		int GroupN = 0;
//		Vis = vector<bool>(N, 0);
//		for (int i = 0; i != N; i++) {
//			if (!Vis[i]) {
//				GroupN++;
//				DFS(i);
//			}
//		}
//		return GroupN;
//	}
//};
//
//
//int main() {
//	//vector<string> x = { "tars","rats","arts","star" };
//	vector<string> x = { "kccomwcgcs","socgcmcwkc","sgckwcmcoc","coswcmcgkc","cowkccmsgc","cosgmccwkc","sgmkwcccoc","coswmccgkc","kowcccmsgc","kgcomwcccs" };
//	Solution az;
//	cout<<"\nAns="<<az.numSimilarGroups(x);
//	system("pause");
//	return 0;
//} 
//
////   the following code i saw from sample solutions which are fastest and is very good
////   the solution is made fast by using union find instead of dfs to check number of components in the helper 1 method 
////which is used when {number of words< (word length)^2} i.e. when n is small-> see solution why
////as and when you discover that one string is the neighbour of another, add it to the subset of that
////   in helper method 2 which is used when individual word length is more, the queue is used to bfs simultaneously on discovering a node
//// to all nodes connected to it and whenever the queue runs empty, we increment the number of components and pick a new word from set