//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// DFS, 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	const int D[4][2] = { { -1,0 },{ 1, 0 },{ 0,-1 },{ 0, 1 } };
//	void DFS(int x, int y, vector<vector<char>>& A) {
//		if (x < 0 || y < 0 || x == A.size() || y == A[0].size() || A[x][y] != '1') return;
//		A[x][y] = '2';
//		for (auto &m : D) {
//			DFS(x + m[0], y + m[1], A);
//		}
//	}
//	int numIslands(vector<vector<char>>&A) { // 1:island, 2:checked, 0:ocean
//		if (A.empty())return 0;
//		int IslandN = 0;
//		for (int i = 0; i < A.size(); i++) {
//			for (int j = 0; j < A[0].size(); j++) {
//				if (A[i][j] == '1') {
//					DFS(i, j, A);
//					IslandN++;
//				}
//			}
//		}
//		return IslandN;
//	}
//};
//
//int main() {
//	vector<vector<char>> g = { { '1','0','1','1','0','1','1' } };
//	class Solution az;
//	cout<<"\nAns="<<az.numIslands(g);
//	system("pause");
//	return 0;
//} 