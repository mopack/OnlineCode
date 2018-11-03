//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//	double myPow(double x, int n) {
//		long long nn = n;
//		bool nneg = 0;
//		if (n < 0) {
//			nneg = 1; nn *= -1;
//		}
//
//		double ans = 1;
//		while (nn > 0) {
//			if (nn % 2) ans *= x;
//			x *= x;
//			nn /= 2;
//		}
//
//		return (nneg) ? (1 / ans) : ans;
//	}
//};
//
//int main() {
//
//
//
//
//	system("pause");
//	return 0;
//}