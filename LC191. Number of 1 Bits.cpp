//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//
//class Solution {
//public:
//	int hammingWeight(uint32_t n) {
//		int Count = 0;
//		while (n) {
//			n &= (n - 1);
//			Count++;
//		}
//		return Count;
//	}
//};
//
//
//class Solution {
//public:
//	int hammingWeight(uint32_t n) {
//		int Count = 0;
//		for (; n; n &= (n - 1), Count++);
//		return Count;
//	}
//};
//
//class Solution {
//public:
//	int hammingWeight(uint32_t n) {
//		int ans = 0;
//		while (n) {
//			if (n & 01)ans++;
//			n >>= 1;
//		}
//		return ans;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 