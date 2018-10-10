//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//// 0ms/PR100/31Lines
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//#define Set(x) { DiagMin[r - c + N] = DiagPlus[ r + c] = x; Row[r] = (x)?c:-1; }
//#define Safe() (!DiagMin[r - c + N] && !DiagPlus[r + c] && Row[r]==-1)
//	void BT(int c, int N, vector<bool>&DiagMin, vector<bool>&DiagPlus, vector<int>&Row, vector<vector<string>> &Ans, vector<string>&Board ) {
//		if (c == N) { Print(Row, Ans, Board); return; }
//		for (int r = 0; r < N; r++) {
//			if (Safe()) {
//				Set(1);
//				BT(c + 1, N, DiagMin, DiagPlus, Row, Ans, Board);
//				Set(0);
//			}
//		}
//	}
//	void Print(vector<int>&Row, vector<vector<string>> &Ans, vector<string>&Board){
//		vector<string> An = Board;
//		for (int r = 0; r < Row.size(); r++) {
//			if (Row[r] != -1) An[r][Row[r]] = 'Q';
//		}
//		Ans.push_back(An);
//	}
//	vector<vector<string>> solveNQueens(int N) {
//		vector<vector<string>> Ans;
//		vector<string> Board; for (int i = 1; i <= N; i++) Board.push_back(string(N, '.'));
//		vector<bool>DiagMin(N * 2, 0), DiagPlus(N * 2, 0);
//		vector<int>Row(N, -1);
//		BT(0, N, DiagMin, DiagPlus, Row, Ans, Board);
//		return Ans;
//	}
//};
//
//int main() {
//	Solution az;
//	vector<vector<string>> vvs = az.solveNQueens(4);
//	for (int i = 0; i < vvs.size(); i++) {
//		for (int j = 0; j < vvs[i].size(); j++) {
//			cout << vvs[i][j] << '\n';
//		}
//		cout << endl << '\n';
//	}
//
//	system("pause");
//	return 0;
//}