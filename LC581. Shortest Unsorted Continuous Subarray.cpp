//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution { // 24ms PR99.13%
//public:
//	int findUnsortedSubarray(vector<int>&a) {
//		if (a.size() <= 1)return 0;
//		int s, e, ma = -2147483647-1, mi = 2147483647;
//		for (s = 0 ; s + 1 < a.size() && a[s] <= a[s + 1]; s++);
//		for (e = a.size() - 1; e - 1 >= 0 && a[e - 1] <= a[e]; e--);
//		for (int i = s; i <= e; i++) {
//			ma = max(ma, a[i]);
//			mi = min(mi, a[i]);
//		}
//		for (; s - 1 >= 0 && a[s-1] > mi; s--);
//		for (; e + 1 < a.size() && a[e+1] < ma; e++);
//		return max(e - s + 1, 0);
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 