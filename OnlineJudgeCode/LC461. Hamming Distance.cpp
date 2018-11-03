//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
////Sol: . Present: AC: Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int hammingDistance(int x, int y) {
//		int ans = 0;
//		while (x && y) {
//			ans += int(x % 2 != y % 2);
//			x >>= 1; y >>= 1;
//		}
//		while (x) { ans += int(x % 2); x >>= 1; }
//		while (y) { ans += int(y % 2); y >>= 1; }
//		return ans;
//	}
//};
//
////Sol: . Present: AC: 9Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int hammingDistance(int x, int y) {
//		int n = x ^ y, c = 0;
//		for (; n; n &= (n - 1), c++);
//		return c;
//	}
//};
//int main() {
//	Solution az;
//	cout << az.hammingDistance(1, 4) << endl;
//
//	system("pause");
//	return 0;
//} 