//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	bool isToeplitzMatrix(vector<vector<int>>& M) {
//		if (M.size() <= 1) return 1;
//		for (int R = 0; R < M.size(); R++) {
//			int r = R + 1, v = M[R][0];
//			for (int c = 1; c < M[0].size() && r < M.size(); c++, r++) {
//				if (M[r][c] != v)return 0;
//			}
//		}
//		for (int C = 1; C < M[0].size(); C++) {
//			int c = C + 1, v = M[0][C];
//			for (int r = 1; c < M[0].size() && r < M.size(); r++, c++) {
//				if (M[r][c] != v)return 0;
//			}
//		}
//		return 1;
//	}
//}az;
//
//int main() {
//	vector<vector<int>> m = { {1, 2, 3, 4}, { 5,1,2,3 }, { 9,5,1,2 }};
//	cout<<az.isToeplitzMatrix(m);
//
//	system("pause");
//	return 0;
//} 