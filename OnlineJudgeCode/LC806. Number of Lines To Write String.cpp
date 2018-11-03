//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	vector<int> numberOfLines(vector<int>&W, string S) {
//		int row = 0, col = 0, w;
//		for (auto c : S) {
//			w = W[c - 97];
//			if (col + w < 100) col += w;
//			else {
//				row++;
//				col = (col + w == 100) ? 0 : w;
//			}
//		}
//		if (col == 0) {
//			col = 100; row--;
//		}
//		else row++;
//		vector<int> ans = { row, col };
//		return ans;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 