//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	bool hasAlternatingBits(int n) {
//		bool c = n & 1; n >>= 1;
//		while (n>0) {
//			if (((n & 1) && c) || (!(n & 1) && !c)) return 0;
//			c = n & 1; n >>= 1;
//		}
//		return 1;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 