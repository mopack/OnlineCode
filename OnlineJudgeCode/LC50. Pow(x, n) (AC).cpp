//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//class Solution {
//public:
//	double myPow(double x, int n) {
//		long long nn = n;
//		bool nneg = 0;
//		if(n<0){
//			nneg = 1; nn = n; nn *= -1;
//		}
//
//		double ans = 1;
//		while (nn > 0) {
//			if (nn % 2) ans *= x;
//			x *= x;
//			nn /= 2;
//		}
//		return (nneg)?(1/ans):ans;
//	}
//}an;
//
//int main() {
//	int u = -2147483647;
//	cout<<an.myPow(2.00000, u-1);
//	system("pause");
//	return 0;
//}
