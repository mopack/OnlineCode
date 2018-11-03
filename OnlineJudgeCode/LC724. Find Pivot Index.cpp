//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int pivotIndex(vector<int>&a) {
//		int Total = 0, x, sum = 0;
//		for (auto x : a)Total += x;
//		for (int i = 0; i < a.size(); sum += a[i], i++) {
//			x = Total - a[i];
//			if (x & 1)continue;
//			x /= 2;
//			if (sum == x)return i;
//		}
//		return -1;
//	}
//};
//int main() {
//	vector<int> x = { 1,7,3,6,5,6 };
//	class Solution az;
//	cout<<az.pivotIndex(x);
//	system("pause");
//	return 0;
//} 