//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int R, int C) {
//		if (nums.size() <= 0 || (nums.size() * nums[0].size() != R * C)) return nums;
//		vector<vector<int>> ans;
//		for (int i = 0; i < R; i++) ans.push_back(vector<int>(C, 0));
//
//		int r = 0, c = 0;
//		for(int i=0; i< nums.size();i++)
//			for (int j = 0; j < nums[0].size(); j++) {
//				ans[r][c] = nums[i][j];
//				if (c + 1 < C)c++; else { r++; c = 0; }
//			}
//		return ans;
//	}
//}az;
//
//int main() {
//	vector<vector<int>>x = { {1, 2}, { 3,4 } };
//	az.matrixReshape(x, 1, 4);
//	system("pause");
//	return 0;
//} 