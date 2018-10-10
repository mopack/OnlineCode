//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution { // AC 56ms PR99.63
//public:
//	vector<vector<int>> ans;
//	int n = 0, d[17];
//	void dfs(vector<vector<int>>&g) {
//		if (d[n] == g.size() - 1) {
//			vector<int>an(n+1);
//			for (int i = 0; i <= n; i++)an[i] = d[i];
//			ans.push_back(an); return;
//		}
//
//		for (int i = 0; i < g[d[n]].size(); i++) {
//			d[n + 1] = g[d[n]][i]; n++;
//			dfs(g);
//			n--;
//		}
//	}
//	vector<vector<int>> allPathsSourceTarget(vector<vector<int>>&g) {
//		d[0] = 0;
//		dfs(g);
//		return ans;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 