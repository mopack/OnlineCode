//#include <iostream>
//using namespace std;
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	double myPow(double x, int _n) {
//		long long n = _n; bool neg = 0;
//		if (_n < 0) neg = 1, n = -n;
//
//		double ans = 1;
//		while (n > 0) {
//			if (n & 1) ans *= x;
//			x *= x; n >>= 1;
//		}
//		return (neg) ? (1 / ans) : ans;
//	}
//};
//
//int main() {
//	Solution az;
//	int u = -2147483647;
//	cout<<az.myPow(2.00000, u-1);
//	system("pause");
//	return 0;
//}
