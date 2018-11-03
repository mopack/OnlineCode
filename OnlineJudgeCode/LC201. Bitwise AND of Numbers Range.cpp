//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
////Sol: . Present: AC: 15Lines/16ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int rangeBitwiseAnd(int a, int b) {
//		if (a == b)return a;
//		int i = -1, ans = 0;
//		for (int mask = ~0; mask & b; mask <<= 1, i++);
//
//		for (; i >= 1; i--) {
//			if ( ((a >> i) & 1) & ((b >> i) & 1) ) ans |= (1 << i);
//			else if (((a >> i) & 1) ^ ((b >> i) & 1)) return ans;
//		}
//		return ans;
//	}
//};
////Sol: . Present: AC: 9Lines/16ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int rangeBitwiseAnd(int a, int b) {
//		while (a < b)
//			b &= b - 1;
//		return b;
//	}
//};
//
//int main() {
//	Solution az;
//	cout << az.rangeBitwiseAnd(2,6);
//	system("pause");
//	return 0;
//} 