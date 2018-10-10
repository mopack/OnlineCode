//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//
//vector<vector<int>> x = {
//	{1,1,1,0,0,0,0,0},
//	{0,1,1,1,1,0,0,0},
//	{0,0,1,1,1,1,1,0},
//	{0,0,0,1,1,1,1,1},
//	{0,1,1,1,1,1,1,1},
//	{0,1,1,1,1,0,1,1},
//	{0,0,1,1,1,0,0,0},
//	{0,0,1,1,1,1,0,0}
//};
//int Target = 1;
//
//// core dataset
//vector<vector<int>> s; //size
//
//
//int main() {
//	// input x
//
//	// init
//	s = x;
//	//for (int i = 0; i < x.size(); i++) for (int j = 0; j < x[0].size(); j++)s[i][j] = 0;
//	//for (int j = 0; j < x[0].size(); j++) s[x.size() - 1][j] = x[x.size() - 1][j];
//
//	for (int i = x.size() - 2; i >= 0; i--) {
//		//s[i][x[0].size() - 1] = x[i][x[0].size() - 1];
//
//		for (int j = x[0].size() - 2; j >= 0; j--) {
//			s[i][j] = (x[i][j] == Target) ?
//				(1 + min(s[i + 1][j], min(s[i][j + 1], s[i + 1][j + 1])) ): 0;
//		}
//	}
//
//	// search max
//	int width = 0, r=-1, c=-1;
//	for (int i = 0; i < x.size(); i++) {
//		for (int j = 0; j < x[0].size(); j++) {
//			if (width < s[i][j]) {
//				width = s[i][j]; r = i; c = j;
//			}
//		}
//	}
//
//	for (int i = 0; i < x.size(); i++) {
//		for (int j = 0; j < x[0].size(); j++) {
//			if (s[i][j] == width) printf("(%d,%d)\n", i, j);
//		}
//	}
//
//	system("pause");
//	return 0;
//}