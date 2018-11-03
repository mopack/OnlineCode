//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int NewC, OldC;
//	inline bool valid(vector<vector<int>>&I, int r, int c) {
//		return r >= 0 && r < I.size() && c >= 0 && c < I[0].size();
//	}
//	void go(vector<vector<int>>&I, int r,int c) {
//		I[r][c] = NewC;
//		int i, j;
//		i = r - 1; j = c; if (valid(I, i, j) && I[i][j] == OldC)go(I, i, j);
//		i = r + 1; j = c; if (valid(I, i, j) && I[i][j] == OldC)go(I, i, j);
//		i = r; j = c - 1; if (valid(I, i, j) && I[i][j] == OldC)go(I, i, j);
//		i = r; j = c + 1; if (valid(I, i, j) && I[i][j] == OldC)go(I, i, j);
//	}
//	vector<vector<int>> floodFill(vector<vector<int>>&I, int sr, int sc, int newColor) {
//		OldC = I[sr][sc];
//		NewC = newColor;
//		if (OldC == NewC) return I;
//		go(I, sr, sc);
//		return I;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 