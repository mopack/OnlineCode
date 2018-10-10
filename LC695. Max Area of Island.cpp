//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int sum, ans = 0;
//	void go(vector<vector<int>>&G, int x, int y) {
//		sum++; G[x][y] = -1;
//		if (x - 1 >= 0          && G[x - 1][y] == 1) go(G, x - 1, y);
//		if (x + 1 < G.size()    && G[x + 1][y] == 1) go(G, x + 1, y);
//		if (y - 1 >= 0          && G[x][y - 1] == 1) go(G, x, y - 1);
//		if (y + 1 < G[0].size() && G[x][y + 1] == 1) go(G, x, y + 1);
//	}
//	int maxAreaOfIsland(vector<vector<int>>&G) {
//		for(int i = 0; i<G.size();i++)
//			for(int j=0; j<G[0].size();j++)
//				if (G[i][j] == 1) {
//					sum = 0;
//					go(G, i, j);
//					ans = max(ans, sum);
//				}
//		return ans;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 