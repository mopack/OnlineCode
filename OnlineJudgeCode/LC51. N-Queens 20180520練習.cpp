//#include <bits/stdc++.h>
//using namespace std;
//
//
//class Solution {
//public:
//	// data
//	int n;
//	int Count;
//	vector<int> pos;
//	vector<bool>inRow, diag, backDiag; //p.s. ¥ÎvectorÅÜ«ÜºC
//	vector<string> dotsq;
//	vector<vector<string>> ans;
//
//	void init() {
//		Count = 0;
//		
//		pos.clear(); inRow.clear(); diag.clear(); backDiag.clear();
//		for (int i = 0; i <= n; i++) {
//			pos.push_back(0);
//			inRow.push_back(0);
//		}
//		for (int i = 0; i <= n * 2 - 1; i++) {
//			diag.push_back(0);
//			backDiag.push_back(0);
//		}
//
//		string dots(n, '.');
//		dotsq.clear();
//		for (int i = 0; i < n; i++)dotsq.push_back(dots);
//
//		ans.clear();
//	}
//
//	inline bool isSave(int r, int c) {
//		return (inRow[r] == 0 && backDiag[r + c - 1] == 0 && diag[n - (c - r)] == 0);
//	}
//	inline void Set(int r, int c, int value) {
//		if (value)pos[c] = r;
//		inRow[r] = value;
//		backDiag[r + c - 1] = value;
//		diag[n - (c - r)] = value;
//	}
//	inline void display() {
//		vector<string> vs = dotsq;
//
//		for (int i = 1; i <= n; i++)
//			vs[pos[i] - 1][i - 1] = 'Q';
//
//		ans.push_back(vs);
//	}
//	
//	void queen(int col) {
//		for (int row = 1; row <= n; row++) {
//			if (isSave(row, col)) {
//				Set(row, col, 1);
//				if (col < n)
//					queen(col + 1);
//				else {
//					Count++;
//					display();
//				}
//				Set(row, col, 0);
//			}
//			
//		}
//	}
//	vector<vector<string>> solveNQueens(int n) {
//		Solution::n = n;
//		init();
//		queen(1);
//		return ans;
//	}
//}ans;
//
//int main() {
//	vector<vector<string>> vvs = ans.solveNQueens(4);
//
//	for (int i = 0; i < vvs.size(); i++) {
//		for (int j = 0; j < vvs[i].size(); j++) {
//			cout << vvs[i][j] << endl;
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}
