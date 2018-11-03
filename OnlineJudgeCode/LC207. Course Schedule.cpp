//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <tuple>
//#include <queue>
//using namespace std;
//
//// DFS (Parameter Form): 8ms/PR99 & 4ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool DFS(int i, const vector<vector<int>>& Front, vector<int>& DP) {
//		if (DP[i] != -1) return DP[i];
//		DP[i] = 0; // Avoiding Loop, set as can't first.
//		for (auto &f : Front[i]) {
//			if (!DFS(f, Front, DP)) return 0;
//		}
//		return DP[i] = 1;
//	}
//	bool canFinish(int N, vector<pair<int, int>>& Back) {
//		vector<vector<int>>Front(N);
//		for (auto p : Back) {
//			int f, b; tie(f, b) = p;
//			Front[b].push_back(f);
//		}
//
//		vector<int> DP(N, -1); // -1: Unchck, 1: Able, 0: Can't
//		for (int i = 0; i < N; i++) {
//			if (!DFS(i, Front, DP)) return 0;
//		}
//		return 1;
//	}
//};
//
//static int fast = []() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool DFS(int i, vector<vector<int>>&Front, vector<int>&DP) {
//		if (DP[i] != -1) return DP[i];
//		DP[i] = 0;
//		for (auto &f : Front[i]) {
//			if (!DFS(f, Front, DP)) return 0;
//		}
//		return DP[i] = 1;
//	}
//	bool canFinish(int N, vector<pair<int, int>>& L2F) {
//		vector<vector<int>>Front(N);
//		for (auto &p : L2F) {
//			int L, F; tie(L, F) = p;
//			Front[L].push_back(F);
//		}
//
//		vector<int>DP(N, -1);
//		for (int i = 0; i < N; i++) {
//			if (!DFS(i, Front, DP)) return 0;
//		}
//		return 1;
//	}
//};
//
//static int fast = []() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool Can(int i, vector<char>& d, vector<vector<int>>& Before) {
//		if (d[i] != 2) return d[i];
//		d[i] = 0;
//		for (auto Be : Before[i]) {
//			if (!Can(Be, d, Before)) return 0;
//		}
//		return d[i] = 1;
//	}
//	bool canFinish(int N, vector<pair<int, int>>& A2B) {
//		vector<char> d(N, 2); // 2:unknown
//		vector<vector<int>> Before(N);
//		for (auto &p : A2B) {
//			int Af, Be; tie(Af, Be) = p;
//			Before[Af].push_back(Be);
//		}
//
//		for (int i = 0; i < N; i++) {
//			if (!Can(i, d, Before)) return 0;
//		}
//		return 1;
//	}
//};
// Former/Later Before/After
//static int fast = []() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool canFinish(int N, vector<pair<int, int>>& L2F) {
//		vector<vector<int>>Later(N);
//		vector<int>FormerN(N);
//		for (auto &p : L2F) {
//			int L, F; tie(L, F) = p;
//			Later[F].push_back(L);
//			FormerN[L]++;
//		}
//
//		queue<int> q;
//		for (int i = 0; i < N; i++) {
//			if (FormerN[i] == 0) q.push(i);
//		}
//
//		int Count = 0;
//		while (!q.empty()) {
//			int F = q.front(); q.pop();
//			Count++;
//			for (auto L : Later[F]) {
//				if ((--FormerN[L]) == 0) q.push(L);
//			}
//		}
//		return Count == N;
//	}
//};

//// BFS(one queue form): 4ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool canFinish(int N, vector<pair<int, int>>&pre) {
//		int Done = 0;
//		vector<vector<int>>Front(N);
//		vector<int>Back(N, 0);
//		for (auto &p : pre) {
//			int f, b; tie(f, b) = p;
//			Front[b].push_back(f);
//			Back[f]++;
//		}
//
//		queue<int>q;
//		for (int i = 0; i < N; i++) {
//			if (Back[i] == 0) q.push(i);
//		}
//
//		while (!q.empty()) {
//			int x = q.front(); q.pop();
//			Done++;
//			for (auto y : Front[x]) {
//				if ((--Back[y]) == 0) q.push(y);
//			}
//		}
//		return Done == N;
//	}
//};
//
//// BFS(2 queue form): 8ms / PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	bool canFinish(int N, vector<pair<int, int>>&pre) {
//		vector<vector<int>>Front(N);
//		vector<int>Back(N, 0);
//		for (auto &p : pre) {
//			int f, b; tie(f, b) = p;
//			Front[b].push_back(f);
//			Back[f]++;
//		}
//			
//		vector<int> a, b;
//		for (int i = 0; i < N; i++) {
//			if (Back[i] == 0) a.push_back(i);
//		}
//			
//		int Done = 0;
//		while (!a.empty()) {
//			Done += a.size();
//			for (auto x : a) {
//				for (auto y : Front[x]) {
//					if ((--Back[y]) == 0) b.push_back(y);
//				}
//			}	
//			swap(a, b); b = {};
//		}
//		return Done == N;
//	}
//};
//
//int main() {
//	Solution az;
//	vector<pair<int, int>> p = { make_pair(0,1) };
//	cout << az.canFinish(2, p);
//	system("pause");
//	return 0;
//} 