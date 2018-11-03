//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//#define Valid(a, b) (a >= 0 && a < N && b >= 0 && b < M && A[a][b])
//#define GetNBH(x, y) { \
//	NBH = Count = 0; \
//	for (int i = -1; i <= 1; i++) { \
//		for (int j = -1; j <= 1; j++) { \
//			if (i == 0 && j == 0) continue; \
//			if(Valid((x + i), (y + j))) Count++; \
//		} \
//	} \
//	NBH = Count; \
//}
//class Solution {
//public:
//	void gameOfLife(vector<vector<int>>& A) {
//		if (A.empty()) return;
//		int N = A.size(), M = A[0].size(), NBH, Count;
//		vector<vector<int>>B = A;
//		for (int x = 0; x < N; x++) {
//			for (int y = 0; y < M; y++) {
//				GetNBH(x, y);
//				if (A[x][y] && (NBH <= 1 || NBH >= 4)) B[x][y] = 0;
//				else if (!A[x][y] && NBH == 3) B[x][y] = 1;
//			}
//		}
//		A.swap(B);
//	}
//};
//
//// Other's Code
//class Solution {
//public:
//	void gameOfLife(vector<vector<int>>& board) {
//		vector<vector<int>> nextBoard = board;
//
//		int dx[] = { -1, 0, 1, 1, 1, 0, -1, -1 };
//		int dy[] = { 1, 1, 1, 0, -1, -1, -1, 0 };
//
//		for (int i = 0; i < board.size(); i++) {
//			for (int j = 0; j < board[0].size(); j++) {
//				int live = 0;
//				int dead = 0;
//				for (int k = 0; k < 8; k++) {
//					int tmpx = i + dx[k];
//					int tmpy = j + dy[k];
//					if (tmpx >= 0 && tmpx < board.size() && tmpy >= 0 && tmpy < board[0].size()) {
//						if (board[tmpx][tmpy] == 1) live++;
//						else dead++;
//					}
//				}
//				if (board[i][j] == 1) {
//					if (live > 3 || live < 2) {
//						nextBoard[i][j] = 0;
//					}
//					else {
//						nextBoard[i][j] = 1;
//					}
//				}
//				else {
//					if (live == 3) {
//						nextBoard[i][j] = 1;
//					}
//					else {
//						nextBoard[i][j] = 0;
//					}
//				}
//			}
//		}
//
//		board = nextBoard;
//	}
//};
//int main() {
//	vector<vector<int>>B = { { 0,1,0 },{ 0,0,1 },{ 1,1,1 },{ 0,0,0 } };
//	class Solution az;
//	az.gameOfLife(B);
//	system("pause");
//	return 0;
//} 
