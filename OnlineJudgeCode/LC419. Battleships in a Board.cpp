//#include <iostream>
//#include <vector>
//using namespace std;
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	void DFS(int x, int y, vector<vector<char>>&A) {
//		if (x < 0 || y < 0 || x == A.size() || y == A[0].size() || A[x][y] != 'X') return;
//		A[x][y] = 'x';
//		DFS(x + 1, y, A); DFS(x, y + 1, A);
//		DFS(x - 1, y, A); DFS(x, y - 1, A);
//	}
//	int countBattleships(vector<vector<char>>&A) {
//		if (A.empty()) return 0;
//		int Ans = 0;
//		for (int i = 0; i != A.size(); i++) {
//			for (int j = 0; j != A[0].size(); j++) {
//				if (A[i][j] == 'X') {
//					Ans++; DFS(i, j, A);
//				}
//			}
//		}
//		return Ans;
//	}
//};
//
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 