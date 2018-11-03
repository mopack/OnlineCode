//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	inline int w(int len) {
//		return (1 + len - 2)*(len - 2) / 2;
//	}
//	int numberOfArithmeticSlices(vector<int>& A) {
//		int N = A.size(), ans = 0;
//		if (N == 0)return 0;
//		vector<int>d(N + 1);
//		for (int i = 0; i + 1 < N; i++) d[i] = A[i + 1] - A[i];
//		N--; d[N] = d[N - 1] - 1;
//
//		int s = 0, ds = d[0];
//		for (int i = 1; i <= N; i++) {
//			if (d[i] != ds) {
//				if (i > s + 1) {
//					ans += w(i - s + 1);
//				}
//				s = i; ds = d[i];
//			}
//		}
//		return ans;
//	}
//}az;
//
//
//int main() {
//	vector<int> x = { 1,2,3,4 };
//	cout<<az.numberOfArithmeticSlices(x);
//
//	system("pause");
//	return 0;
//} 