//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	double largestTriangleArea(vector<vector<int>>& p) {
//		int x1, x2, y1, y2, ans = 0;
//		for(int i=0;i<p.size();i++)
//			for(int j=i+1; j<p.size();j++)
//				for (int k = j + 1; k < p.size(); k++) {
//					x1 = p[j][0] - p[i][0];
//					x2 = p[k][0] - p[i][0];
//					y1 = p[j][1] - p[i][1];
//					y2 = p[k][1] - p[i][1];
//					ans = max(ans, abs(x1*y2 - x2*y1));
//				}
//		return ans / 2.0;
//	}
//}az;
//
//int main() {
//	vector<vector<int>> x = { { 0,0 },{ 0,1 },{ 1,0 },{ 0,2 },{ 2,0 } };
//	az.largestTriangleArea(x);
//	system("pause");
//	return 0;
//} 