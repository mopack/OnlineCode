//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int climbStairs(int n) {
//		int f[2] = { 1, 2 }, f0 = 0;
//		if (n <= 2)return f[n - 1];
//		for (n--; --n; f0 = !f0)
//			f[f0] = f[0] + f[1];
//		return f[!f0];
//	}
//}az;
//
//int main() {
//	az.climbStairs(3);
//
//	system("pause");
//	return 0;
//} 