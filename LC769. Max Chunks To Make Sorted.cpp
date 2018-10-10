//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	int maxChunksToSorted(vector<int>& a) {
//		int e, ans = 0, cmax;
//		
//		for (e = 0; e < a.size(); e++) {
//			cmax = a[e];
//			while (e < cmax) {
//				e++;
//				cmax = max(cmax, a[e]);
//			}
//			ans++;
//		}
//
//		return ans;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//}