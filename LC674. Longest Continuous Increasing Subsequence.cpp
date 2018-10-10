//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int findLengthOfLCIS(vector<int>&N) {
//		if (N.size() == 0)return 0;
//		int ans = 1, L;
//		for(int i = 0; i + 1< N.size();i++)
//			if (N[i+1] > N[i]) {
//				for (L = i, i++; i + 1 < N.size() && N[i + 1] > N[i]; i++);
//				ans = max(ans, i - L + 1);
//			}
//		return ans;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 