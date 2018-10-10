//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int distributeCandies(vector<int>&Can) {
//		int n = Can.size() / 2, s = 0;
//		sort(Can.begin(), Can.end());
//		for (int i = 0; i < Can.size(); i++) {
//			s++; if (s >= n)return n;
//			while (i + 1 < Can.size() && Can[i + 1] == Can[i])i++;
//		}
//		return s;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 