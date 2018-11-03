//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	inline bool valid(vector<vector<int>>& M, int x, int y) {
//		return x >= 0 && x < M.size() && y >= 0 && y < M[0].size();
//	}
//	vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
//		vector<vector<int>> ans = M;
//		for (int i = 0; i < M.size(); i++)
//			for (int j = 0; j < M[0].size(); j++){
//				int count = 0, sum = 0;
//				for (int a = -1; a <= 1; a++)
//					for (int b = -1; b <= 1; b++)
//						if (valid(M, i + a, j + b)) {
//							count++;
//							sum += M[i + a][j + b];
//						}
//				ans[i][j] = floor(sum * 1.0 / count);
//			}
//		return ans;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 