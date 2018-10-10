//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <tuple>
//using namespace std;
//
//// 8ms / PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> findOrder(int N, vector<pair<int, int>>&pre) {
//		vector<vector<int>>Front(N);
//		vector<int>Back(N, 0), Ans;
//		for (auto &p : pre) {
//			int f, b; tie(f, b) = p;
//			Front[b].push_back(f);
//			Back[f]++;
//		}
//
//		queue<int>q;
//		for (int i = 0; i < N; i++)
//			if (Back[i] == 0) q.push(i);
//
//		while (!q.empty()) {
//			int x = q.front(); q.pop();
//			Ans.push_back(x);
//			for (auto y : Front[x])
//				if ((--Back[y]) == 0) q.push(y);
//		}
//		return (Ans.size() == N) ? Ans : vector<int>();
//	}
//};
//
//// 12ms / PR69
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> findOrder(int N, vector<pair<int, int>>&pre) {
//		vector<vector<int>>Front(N);
//		vector<int>Back(N, 0), Ans;
//		for (auto &p : pre) {
//			int f, b; tie(f, b) = p;
//			Front[b].push_back(f);
//			Back[f]++;
//		}
//
//		vector<int> a, b;
//		for (int i = 0; i < N; i++)
//			if (Back[i] == 0) a.push_back(i);
//		while (!a.empty()) {
//			for (auto x : a) {
//				Ans.push_back(x);
//				for (auto y : Front[x])
//					if ((--Back[y]) == 0) b.push_back(y);
//			}
//			swap(a, b); b = {};
//		}
//		return (Ans.size() == N) ? Ans : vector<int>();
//	}
//};
//int main() {
//	Solution az;
//	system("pause");
//	return 0;
//} 