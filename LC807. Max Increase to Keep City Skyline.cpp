//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	int maxIncreaseKeepingSkyline(vector<vector<int>>& g) {
//		vector<int> r(g.size(), 0), c(g[0].size(), 0);
//		for(int i=0; i<g.size();i++)
//			for (int j = 0; j < g[0].size(); j++) {
//				r[i] = max(r[i], g[i][j]);
//				c[j] = max(c[j], g[i][j]);
//			}
//		//for (int i = 0; i < 4; i++)cout << r[i] << ' '; cout << endl;
//		//for (int i = 0; i < 4; i++)cout << c[i] << ' '; cout << endl;
//
//		int ans = 0;
//		for (int i = 0; i < g.size(); i++)
//			for (int j = 0; j < g[0].size(); j++){
//				ans += max(min(r[i], c[j]) - g[i][j], 0);
//				//cout << g[i][j] + max(min(r[i], c[j]) - g[i][j], 0) << ' ';
//			}
//
//
//		return ans;
//	}
//}az;
//
//int main() {
//	vector<vector<int>> x = { { 3, 0, 8, 4 },
//	{ 2, 4, 5, 7 },
//	{ 9, 2, 6, 3 },
//	{ 0, 3, 1, 0 } };
//	cout << az.maxIncreaseKeepingSkyline(x) << endl;
//	system("pause");
//	return 0;
//}