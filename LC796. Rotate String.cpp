//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	bool rotateString(string A, string B) {
//		if (A.size() != B.size())return 0;
//		if (A.size() <= 0) return 1;
//		for (int i = 0; i < B.size(); i++) 
//			if (B[i] == A[0]) {
//				int b = i;
//				for (int a = 1; a < A.size(); a++) {
//					b = (b + 1 < B.size()) ? b + 1 : 0;
//					if (B[b] != A[a]) goto Next;
//				}
//				return 1;
//				Next:;
//			}
//		return 0;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 