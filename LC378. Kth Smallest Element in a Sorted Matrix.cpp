//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//#include <functional>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/44ms/PR13
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////class Solution {
////public:
////	vector<int>Merge(vector<int>&a, vector<int>&b) {
////		vector<int>ans;
////		int i = 0, j = 0;
////		while (i < a.size() && j < b.size()) {
////			if (a[i] <= b[j]) ans.push_back(a[i++]); 
////			else ans.push_back(b[j++]);
////		}
////		while (i < a.size())
////			ans.push_back(a[i++]);
////		while (j < b.size()) 
////			ans.push_back(b[j++]);
////
////		return ans;
////	}
////	int kthSmallest(vector<vector<int>>&a, int k) {
////		vector<int>all;
////		for (auto &x : a) all = Merge(all, x);
////		return all[k-1];
////	}
////};
////8ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	int kthSmallest(vector<vector<int>>&A, int K) {
////		int L = A.front().front(), R = A.back().back(), M;
////		while (L < R) {
////			M = (L + R) / 2;
////			int Count = 0;
////			for (auto &a : A) {
////				auto Lit = upper_bound(a.begin(), a.end(), M);
////				Count += distance(a.begin(), Lit);
////			}
////			if (Count < K) L = M + 1;
////			else R = M;
////		}
////		return L;
////	}
////};
//// 16ms/PR98
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int kthSmallest(vector<vector<int>>&A, int K) {
//		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q; // (A[i][c], i)
//		for (int i = 0; i < A.size(); i++) q.push({ A[i][0], i });
//		vector<int>c(A.size(), 0);
//
//		for (int k = 1; k < K; k++) {
//			int i = q.top().second; q.pop();
//			if(++c[i] < A[0].size())
//				q.push({A[i][c[i]], i});
//		}
//		return q.top().first;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<vector<int>>x = {
//		{ 1,  5,  9 },
//		{ 10, 11, 13 },
//		{ 12, 13, 15 }
//	}; int k = 8;
//	cout << "\nAns="<< az.kthSmallest(x, k);
//
//	system("pause");
//	return 0;
//} 