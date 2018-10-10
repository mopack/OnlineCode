//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	double findMaxAverage(vector<int>&n, int k) {
//		int sum = 0, ans;
//		
//		for (int i = 0; i < k; i++)sum += n[i];
//		ans = sum;
//
//		for (int i = 1; i + k <= n.size(); i++) {
//			sum += n[i+k-1]-n[i - 1];
//			ans = max(ans, sum);
//		}
//
//		return double(ans) / k;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 