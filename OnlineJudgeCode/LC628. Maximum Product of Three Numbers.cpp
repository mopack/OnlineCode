//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int maximumProduct(vector<int>&N) {
//		int ma[3] = { -2147483648, -2147483648, -2147483648 }, mi[2] = { 2147483647, 2147483647 };//ma0<ma1<ma2. mi0>mi1
//		for (auto x : N) {
//			if (x > ma[2]) {
//				ma[0] = ma[1]; ma[1] = ma[2]; ma[2] = x;
//			}else if(x > ma[1]){
//				ma[0] = ma[1]; ma[1] = x;
//			}
//			else if (x > ma[0]) ma[0] = x;
//			if (x < mi[1]) {
//				mi[0] = mi[1]; mi[1] = x;
//			}
//			else if (x < mi[0]) mi[0] = x;
//		}
//		if (ma[2] == 0) return 0;
//		if (ma[2] < 0) return ma[0] * ma[1] * ma[2];
//		return ma[2] * max(ma[1] * ma[0], mi[1] * mi[0]);
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 