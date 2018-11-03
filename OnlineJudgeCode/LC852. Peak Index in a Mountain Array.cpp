//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int peakIndexInMountainArray(vector<int>& A) {
//		int s = 0, e = A.size() - 1, m;
//		while (s <= e) {
//			m = (s + e) / 2;
//			if (A[m - 1] > A[m]) {
//				e = m - 1;
//			}
//			else if (A[m] < A[m + 1]) {
//				s = m + 1;
//			}
//			else return m;
//		}
//		return m;
//	}
//}az;
//
//int main() {
//	vector<int> x = { 0,1,0 };
//	cout<<az.peakIndexInMountainArray(x);
//
//	system("pause");
//	return 0;
//} 