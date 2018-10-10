//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol1: Coding: 11min/12lines, Present: AC: 0ms/100PR
//static int fast = []() {ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL); return 0; }(); 
//class Solution {
//public:
//	int binaryGap(int N) {
//		int x = N, s, L = 0, Ans = 0;
//		for (L = 0; (x & 1) == 0; x >>= 1, L++);
//		for (s = L; x; x >>= 1, s++ ) 
//			if (x & 1) 
//				Ans = max(Ans, s - L), L = s;
//		return Ans;
//	}
//};
//int main() {
//	class Solution az;
//	cout << az.binaryGap(22) << ' ' << az.binaryGap(5) << ' ' << az.binaryGap(6) << ' ' << az.binaryGap(8) << '\n';
//	system("pause");
//	return 0;
//} 