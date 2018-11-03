//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	bool isRectangleOverlap(vector<int>&R1, vector<int>&R2) {
//		int y11 = R1[1], y12 = R1[3], y21 = R2[1], y22 = R2[3];
//		if (y11 == y12 || y21 == y22)return 0;
//		if (y21 < y11) { swap(y11, y21); swap(y12, y22);}
//		if (y11 != y21 && y12 <= y21) return 0;
//
//		int x11 = R1[0], x12 = R1[2], x21 = R2[0], x22 = R2[2];
//		if (x11 == x12 || x21 == x22)return 0;
//		if (x21 < x11) { swap(x11, x21); swap(x12, x22); }
//		if (x11 != x21 && x12 <= x21) return 0;
//
//		return 1;
//	}
//}az;
//
//int main() {
//	vector<int> r1 = { 0,0,1,1 }, r2 = { 1, 0, 2, 1 };
//	az.isRectangleOverlap(r1, r2);
//	system("pause");
//	return 0;
//} 