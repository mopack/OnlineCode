//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	bool isHappy(int n) {
//		char N[12]; int len, sum, t;
//		while (1) {
//			if (n == 4)return 0;
//			if (n == 1)return 1;
//			len = sprintf(N, "%d", n);
//			sum = 0;
//			for (int i = 0; i < len; i++) {
//				t = N[i] - 48;
//				sum += t*t;
//			}
//			n = sum;
//		}
//	}
//}az;
//
//int main() {
//	cout<<az.isHappy(19);
//	system("pause");
//	return 0;
//} 