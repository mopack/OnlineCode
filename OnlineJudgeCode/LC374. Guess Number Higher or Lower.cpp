//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//// Forward declaration of guess API.
//// @param num, your guess
//// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
//int guess(int num);
//
//using namespace std;
//class Solution {
//public:
//	int guessNumber(int n) {
//		int g;
//		unsigned long long s = 1, e = n, m;
//		while (s <= e) {
//			m = (s + e) / 2;
//			g = guess(m);
//			if (g == -1) {
//				e = m - 1;
//			}else if(g == 1){
//				s = m + 1;
//			}
//			else return m;
//		}
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 