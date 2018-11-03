//#include <iostream>
//#include <vector>
//#include <string>
//#include <unordered_map>
//#include <limits>
//using namespace std;
//
//// Floyd. 0ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//#define DBL_MAX numeric_limits<double>::max()
//class Solution {
//public:
//	vector<double> calcEquation(vector<pair<string, string>>&Equ, vector<double>&Value, vector<pair<string, string>>&Ask) {
//		unordered_map<string, int> S2n;
//		int N = 0;
//		for (auto &p : Equ) {
//			if (!S2n.count(p.first))  S2n.emplace(p.first,  N++ );
//			if (!S2n.count(p.second)) S2n.emplace(p.second, N++ );
//		}
//
//		vector<vector<double>>d(N, vector<double>(N, DBL_MAX));
//		for (int i = 0; i != Equ.size(); i++) {
//			int x = S2n[Equ[i].first], y = S2n[Equ[i].second];
//			d[x][y] = Value[i];
//			d[y][x] = 1 / Value[i];
//		}
//
//		for (int k = 0; k != N; k++)
//			for (int i = 0; i != N; i++)
//				for (int j = 0; j != N; j++) {
//					if (d[i][k] != DBL_MAX && d[j][k] != DBL_MAX && d[i][j] > d[i][k] * d[k][j]) {
//						d[i][j] = d[i][k] * d[k][j];
//					}
//				}
//
//		vector<double>Ans;
//		for (auto &p : Ask) {
//			auto i1 = S2n.find(p.first); 
//			auto i2 = S2n.find(p.second);
//			if (i1 == S2n.end() || i2 == S2n.end() || d[i1->second][i2->second] == DBL_MAX) Ans.push_back(-1.0);
//			else  Ans.push_back(d[i1->second][i2->second]);
//		}
//		return Ans;
//	}
//};
//
//int main() {
//	Solution az;
//	vector<pair<string, string>> equations = { { "a","b" },{ "b","c" } };
//	vector<double> values = { 2.0, 3.0 };
//	vector<pair<string, string>> queries = { { "a", "c" },{ "b","c" },{ "a","e" },{ "a","a" },{ "x","x" } };
//	az.calcEquation(equations, values, queries);
//	system("pause");
//	return 0;
//} 