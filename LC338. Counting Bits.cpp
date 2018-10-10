//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
///*
//Dynamic programming
//Reoccurence relation:
//dp[i] = dp[i & (i - 1)]] + 1 where i & (i - 1) erases right most bit
//i & -i gives rightmost bit => i - (i & -i) erases rightmost bit
//O(n)
//*/
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> countBits(int N) {
//		vector<int> d(N + 1, 0);
//		for (int i = 1; i < N + 1; i++) {
//			d[i] = d[i & (i - 1)] + 1;
//		}
//		return d;
//	}
//};
//
////Sol: . Present: AC: 15Lines/44ms/PR97
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> countBits(int N) {
//		if (N == 0) return { 0 };
//		if (N == 1) return { 0, 1 };
//		vector<int> d(N+1, 0);
//		d[1] = 1;
//		for (int i = 1; 1; i++) 
//			for (int j = 0; j < (1<<i); j++) {
//				d[j + (1<<i)] = d[j] + 1;
//				if (j + (1<<i) == N) return d;
//			}
//	}
//};
//
////Sol: . Present: AC: 13Lines/44ms/PR97
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int> countBits(int N) {
//		vector<int>Ans;
//		for (int i = 0; i <= N; i++) {
//			int c = 0;
//			for (int n = i; n; n &= (n-1),c++);
//			Ans.push_back(c);
//		}
//		return Ans;
//	}
//};
//
//
//int main() {
//	Solution az;
//	vector<int> x = az.countBits(2);
//	system("pause");
//	return 0;
//} 