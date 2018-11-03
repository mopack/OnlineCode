//#include <iostream>
//#include <vector>
//using namespace std;
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int N, Ans;
//	vector<int>pos;
//	vector<bool>row, diag, bdiag;
//
//	void Init(int n) {
//		N = n, Ans = 0;
//		pos.resize(N);
//		row = vector<bool>(N, 0);
//		diag = bdiag = vector<bool>(2 * N, 0);
//	}
//	bool Safe(int r, int c) {
//		return !row[r] && !diag[r + c] && !bdiag[r - c + N];
//	}
//	void Set(int r, int c, bool x) {
//		pos[c] = r;
//		row[r] = diag[r + c] = bdiag[r - c + N] = x;
//	}
//	void Queen(int c) {
//		if (c == N) { Ans++; return; }
//		for (int r = 0; r != N; r++) {
//			if (Safe(r, c)) {
//				Set(r, c, 1);
//				Queen(c + 1);
//				Set(r, c, 0);
//			}
//		}
//	}
//	int totalNQueens(int n) {
//		Init(n);
//		Queen(0);
//		return Ans;
//	}
//};
//int main() {
//	Solution az;
//	az.totalNQueens(4);
//
//	system("pause");
//	return 0;
//}