//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int findMaxConsecutiveOnes(vector<int>&N) {
//		int ans = 0, s;
//		for (int i = 0; i < N.size(); i++) {
//			if (N[i]) {
//				s = i;
//				while (i + 1 < N.size() && N[i + 1])i++;
//				ans = max(ans, i - s + 1); i++;
//			}
//		}
//		return ans;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 