//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//using namespace std;
//
//
//class Solution {
//public:
//	int n;
//	int pos[1001], Count;
//	bool inRow[1001], diag[1001], backDiag[1001];
//	vector<string> dotsq;
//	vector<vector<string>> ans;
//
//	void init() {
//		Count = 0;
//
//		for (int i = 1; i <= n; i++) inRow[i] = 0; // Empty
//
//		for (int i = 1; i <= 2 * n - 1; i++) {  //2n-1
//			diag[i] = backDiag[i] = 0; // Empty;
//		}
//
//		string ndot(n, '.');
//		dotsq.clear();
//		for (int i = 1; i <= n; i++)dotsq.push_back(ndot);
//
//		ans.clear();
//	}
//
//	void display() {
//		vector<string> vs = dotsq;
//
//		for (int i = 1; i <= n; i++){
//			vs[pos[i]-1][i-1] = 'Q';
//		}
//
//		ans.push_back(vs);
//	}
//
//	bool inline isSave(int r, int c) {
//		return (inRow[r] == 0 && backDiag[r + c - 1] == 0 && diag[n - (c - r)] == 0);
//	}
//	void inline Set(int r, int c) {
//		pos[c] = r;
//		inRow[r] = 1; // occupied
//		backDiag[r + c - 1] = 1;
//		diag[n - (c - r)] = 1;
//	}
//	void inline Reset(int r, int c) {
//		inRow[r] = 0;
//		backDiag[r + c - 1] = 0;
//		diag[n - (c - r)] = 0;
//	}
//
//	void queen(int col) {
//		for (int row = 1; row <= n; row++)
//			if (isSave(row, col)) {
//				Set(row, col);
//				if (col < n)
//					queen(col + 1);
//				else {
//					Count++;
//					display();
//				}
//				Reset(row, col);
//			}
//	}
//
//	vector<vector<string>> solveNQueens(int n) {
//		Solution::n = n;
//		init();
//		queen(1);
//		return ans;
//	}
//}an;
//
//int main() {
//	vector<vector<string>> vvs = an.solveNQueens(4);
//	for (int i = 0; i < vvs.size(); i++) {
//		for (int j = 0; j < vvs[i].size(); j++) {
//			cout << vvs[i][j] << endl;
//		}
//		cout << endl << endl;
//	}
//
//	system("pause");
//	return 0;
//}