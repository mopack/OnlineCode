//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// DFS, 8ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	const int D[4][2] = { { -1,0 }, { 1, 0 }, { 0,-1 }, { 0, 1 } };
//	void DFS(int x, int y, vector<vector<char>>& A) {
//		if (x < 0 || y < 0 || x == A.size() || y == A[0].size() || A[x][y] != 'O') return;
//		A[x][y] = 'o';
//		for (auto &m : D) {
//			DFS(x + m[0], y + m[1], A);
//		}
//	}
//#define Scan(x, y){ if (A[x][y] == 'O') DFS(x, y, A); }
//	void solve(vector<vector<char>>& A) {
//		if (A.empty()) return;
//		int N = A.size(), M = A[0].size();
//		// Margin: O->o
//		for (int i = 0; i != N; i++) {
//			Scan(i, 0); Scan(i, M - 1);
//		}
//		for (int j = 0; j != M; j++) {
//			Scan(0, j); Scan(N - 1, j);
//		}
//		// All
//		for (auto &a : A) {
//			for (auto &x : a) {
//				x = (x == 'o') ? 'O' : 'X';
//			}
//		}
//	}
//};
//
//int main() {
//	vector<vector<char>> A = { { 'X', 'O', 'X', 'O', 'X', 'O' },{ 'O','X','O','X','O','X' },{ 'X','O','X','O','X','O' },{ 'O','X','O','X','O','X' } };
//	class Solution az;
//	az.solve(A);
//	system("pause");
//	return 0;
//} 