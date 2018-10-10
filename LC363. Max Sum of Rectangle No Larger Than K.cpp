//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <set>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/96ms/PR90
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int maxSumSubmatrix(vector<vector<int>>&A, int K) {
//		if (A.empty()) return 0;
//		int R = A.size(), C = A[0].size();
//		int m = min(R, C), n = max(R, C);
//		bool CIsBig = C > R;
//		int Ret = INT_MIN;
//		for (int i = 0; i < m; i++) {
//			vector<int>Array(n);
//			for (int j = i; j >= 0; j--) {
//				int val = 0;
//				set<int> Set; Set.clear();
//				Set.insert(0);
//				for (int K = 0; K < n; K++) {
//					Array[K] += (CIsBig ? A[j][K] : A[K][j]);
//					val += Array[K];
//					auto it = Set.lower_bound(val - K);
//					if (it != Set.end()) {
//						Ret = max(Ret, val - *it);
//					}
//					Set.insert(val);
//				}
//			}
//		}
//		return Ret;
//	}
//};
////Sol: . Present: AC: Lines/12ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int maxSumSubmatrix(vector<vector<int>>&A, int K) {
//		int m = A.size(), n = A[0].size();
//		int Ret = INT_MIN;
//		for (int L = 0; L < n; L++) {
//			vector<int> Sum(m, 0);
//			for (int R = L; R < n; R++) {
//				int Total = 0; // This Sum
//				int MTot = INT_MIN; // Max of Total
//				for (int i = 0; i < m; i++) {
//					Sum[i] += A[i][R];
//					Total += Sum[i];
//					MTot = max(MTot, Total);
//					if (Total < 0) Total = 0;
//				}
//				if (MTot == K) return MTot;
//				if (MTot < K) {
//					Ret = max(Ret, MTot);
//					continue;
//				}
//				set<int> Set{ 0 };
//				Total = 0;
//				for (auto &u : Sum) {
//					Total += u;
//					auto it = Set.lower_bound(Total - K);
//					if (it != Set.end()) Ret = max(Ret, Total - *it);
//					Set.insert(Total);
//				}
//			}
//		}
//		return Ret;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 