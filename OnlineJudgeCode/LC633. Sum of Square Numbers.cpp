//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution { //AC
//public:
//	bool judgeSquareSum(int n) {
//		while (n & 1 == 0)n >>= 1;
//
//		int f, e;
//		for (f = 3; f <= n; f += 2)
//			if (n % f == 0) {
//				if (f % 4 == 3) {
//					for (e = 0; n%f == 0; n /= f, e++);
//					if (e & 1)return 0;
//				}
//				else {
//					for(n/= f; n%f == 0; n /= f);
//				}
//			}
//		return 1;
//	}
//};
//int main() {
//	class Solution az;
////	Concept:
////	Sum of two squares theorem �Y�B�߭Y
////	no prime congruent to 3 (mod 4) raised to an odd power
////	�L �_�Ʀ����� ��]�� �P3(mod 4)�P�c
//
//	system("pause");
//	return 0;
//} 