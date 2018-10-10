//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// Sol1:. Present: AC: 11Lines/0ms/PR100 
//static int fast = []() {ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool isPowerOfTwo(int n) {
//		if (n < 0) return 0;
//		int c;
//		for (c = 0; n; n >>= 1)
//			if (n & 1) c++;
//		return c == 1;
//	}
//};
//
////Sol2: ¤@¦æ¸Ñ. Present: AC: 7Lines/0ms/PR100 
//static int fast = []() {ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool isPowerOfTwo(int n) {
//		return n > 0 && (n & (n - 1)) == 0;
//	}
//};
//
//int main(){
//	Solution az; int n;
//	while (cin >> n) {
//		cout << az.isPowerOfTwo(n) << '\n';
//	}
//	system("pause");
//	return 0;
//} 