//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//vector<vector<int>> x = { { 3,2,1,1,0 },
//					 	  { 1,3,1,2,1 },
//						  { 2,3,1,0,2 },
//						  { 3,3,5,4,1 },
//						  { 2,3,4,5,6 } };
//vector<int> loc;
//
//void ma(int rMin, int rMax, int cMin, int cMax) { // rMin, rMax, cMin, cMax //int T, int B, int L, int R
//	int rMid = (rMin + rMax) / 2;
//
//	if (rMin <= rMax) {
//		int mav = -2147483647, maj=-1;
//		for (int j = cMin; j <= cMax; j++) {
//			if (x[rMid][j] > mav) { mav = x[rMid][j]; maj = j; }
//		}
//		loc[rMid] = maj;
//
//		ma(rMin, rMid - 1, cMin, maj);
//		ma(rMid + 1, rMax, maj, cMax);
//	}
//}
//
//int main() {
//	// input x, rowSize, colSize
//	int rowSize = 5, colSize = 5;
//
//	// init
//	loc = vector<int>(rowSize, 0);
//
//	ma(0, rowSize - 1, 0, colSize - 1);
//
//	for (int i = 0; i < loc.size(); i++)cout << loc[i] << ' ';
//	cout << endl;
//
//	system("pause");
//	return 0;
//}