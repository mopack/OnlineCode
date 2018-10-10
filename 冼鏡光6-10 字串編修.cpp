//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//using namespace std;
//
//// input data
//string s = "abcdef", t = "xbyzek";
//
//// core dataset
//vector<vector<int>> c; // cost
//enum COST{ cInsert = 1, cDelete=1, cExchange = 2};
//
//int main() {
//	// input s, t
//
//	// init
//	c.clear();
//	for (int i = 0; i <= s.size(); i++) {
//		c.push_back(vector<int>());
//		for (int j = 0; j <= t.size(); j++) c[i].push_back(0);
//	}
//
//	for (int i = 1; i <= s.size(); i++) c[i][0] = c[i - 1][0] + 1;
//	for (int i = 1; i <= t.size(); i++) c[0][i] = c[0][i - 1] + 1;
//
//	// compute min c(cost)
//	int insertT, deleteS, exange;
//	for (int i = 0; i < s.size(); i++) {
//		for (int j = 0; j < s.size(); j++) {
//			if (s[i] == t[j]) {
//				c[i + 1][j + 1] = c[i][j];
//			}else{
//				insertT = c[i + 1][j] + cInsert;
//				deleteS = c[i][j + 1] + cDelete;
//				exange = c[i][j] + cExchange;
//				c[i + 1][j + 1] = min(min(insertT, deleteS), exange);
//			}
//		}
//	}
//
//	// lcs path
//	vector<int> sAns, tAns;
//	sAns.clear(); tAns.clear();
//
//	for (int i = s.size(), j = t.size(); i != 0 && j != 0;) {
//		if (c[i][j] == c[i - 1][j] + cInsert)
//			i--;
//		else if (c[i][j] == c[i][j - 1] + cDelete)
//			j--;
//		else {
//			sAns.push_back(i-1);
//			tAns.push_back(j-1);
//			i--; j--;
//		}
//	}
//	reverse(sAns.begin(), sAns.end());
//	reverse(tAns.begin(), tAns.end());
//
//	// output
//	cout << c[s.size()][t.size()] << endl;
//	for (int i = 0; i < sAns.size(); i++) cout << sAns[i] << ' '; cout << endl;
//	for (int i = 0; i < tAns.size(); i++) cout << tAns[i] << ' '; cout << endl;
//
//	//for (int i = 0; i <= s.size(); i++) {
//	//	for (int j = 0; j <= t.size(); j++) cout << c[i][j] << ' ';
//	//	cout << endl;
//	//}
//
//
//	system("pause");
//	return 0;
//}