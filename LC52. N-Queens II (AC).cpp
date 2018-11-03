//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//using namespace std;
//
//
//class Solution {
//public:
//	int Count, n;
//	int pos[1001];
//	bool inRow[1001], diag[1001], backDiag[1001];
//	void init() {
//		Count = 0;
//
//		for (int i = 1; i <= n; i++) inRow[i] = 0; // Empty
//
//		for (int i = 1; i <= 2 * n - 1; i++) {
//			diag[i] = backDiag[i] = 0; // Empty;
//		}
//	}
//
//
//	bool inline SAVE(int r, int c) {
//		return (inRow[r] == 0 && backDiag[r + c - 1] == 0 && diag[n - (c - r)] == 0);
//	}
//	void inline SET(int r, int c) {
//		pos[c] = r;
//		inRow[r] = 1; // occupied
//		backDiag[r + c - 1] = 1;
//		diag[n - (c - r)] = 1;
//	}
//	void inline RESET(int r, int c) {
//		inRow[r] = 0;
//		backDiag[r + c - 1] = 0;
//		diag[n - (c - r)] = 0;
//	}
//
//	void q(int col) {
//		for (int row = 1; row <= n; row++)
//			if (SAVE(row, col)) {
//				SET(row, col);
//				if (col < n)
//					q(col + 1);
//				else {
//					Count++;
//				}
//				RESET(row, col);
//			}
//	}
//
//	int totalNQueens(int n) {
//		Solution::n = n;
//		init();
//		q(1);
//		return Count;
//	}
//}an;
//
//
//
//
//
//
//int main() {
//	cout << an.totalNQueens(4) << endl;;
//
//	system("pause");
//	return 0;
//}