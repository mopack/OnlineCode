//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool stoneGame(vector<int>&Pile) {
//		int N = Pile.size();
//		vector<vector<int>>d(N, vector<int>(N, 0));
//		for (int i = 0; i < N; i++) d[i][i] = Pile[i];
//#define j (i + Dis)
//		for (int Dis = 1; Dis < N; Dis++) {
//			for (int i = 0; j < N; i++) {
//				d[i][j] = max(Pile[i] - d[i + 1][j], Pile[j] - d[i][j - 1]);
//			}
//		}
//		return d[0][N - 1] > 0;
//	}
//};
//
//
////AC
//// d[i][j] = max(P[i] - d[i+1][j], P[j] - d[i][j-1])
//// Let j = i + Dis :
//// d[i][i + Dis] = max(P[i] - d[i+1][i + Dis], P[i + Dis] - d[i][i + Dis-1])
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	bool stoneGame(vector<int>&Pile) {
//		int N = Pile.size();
//		vector<vector<int>>d(N, vector<int>(N, 0));
//		for (int i = 0; i < N; i++) d[i][i] = Pile[i];
//
//		for (int Dis = 1; Dis < N; Dis++) {
//			for (int i = 0; i < N - Dis; i++) {
//				d[i][i + Dis] = max(Pile[i] - d[i + 1][i + Dis], Pile[i + Dis] - d[i][i + Dis - 1]); 
//			}
//		}
//		return d[0][N - 1] > 0;
//	}
//};
////
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool stoneGame(vector<int>& piles) {
//		return 1;
//	}
//};
//
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
