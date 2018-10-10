//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int countBinarySubstrings(string s) {
//		int ans = 0, f = 0, L = 0, a = -1;
//		int now = s[0] - 48;
//
//		while(f < s.size()){
//			while (f + 1 < s.size() && s[f + 1] - 48 == now)f++;
//			
//			if (a > 0)
//				ans += min(a, f - L + 1);
//			a = f - L + 1;
//
//			f++; L = f; now = !now;
//		}
//		return ans;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 