//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//	int minDistance(string word1, string word2) {
//		string a = word1, b = word2;
//		vector<vector<int>>d;
//
//		// init d (as d[a.size()][b.size()])
//		d.clear();
//		for (int i = 0; i <= a.size(); i++) {
//			d.push_back(vector<int>());
//			for (int j = 0; j <= b.size(); j++) {
//				d[i].push_back(0);
//			}
//		}
//
//		// dp
//		for (int i = 1; i <= a.size(); i++) {
//			for (int j = 1; j <= b.size(); j++) {
//				if (a[i - 1] == b[j - 1]) {
//					d[i][j] = d[i - 1][j - 1] + 1;
//				}
//				else if (d[i][j - 1] > d[i - 1][j]) {
//					d[i][j] = d[i][j - 1];
//				}
//				else {
//					d[i][j] = d[i - 1][j];
//				}
//			}
//		}
//
//		return (a.size() + b.size() - 2 * d[a.size()][b.size()]);
//	}
//};
//
//
//
//int main() {
//
//	system("pause");
//	return 0;
//}