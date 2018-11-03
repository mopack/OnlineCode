//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	vector<int> findErrorNums(vector<int>&a) {
//		int x, w;
//		for (int i = 0; i < a.size(); i++) {
//			x = abs(a[i]) - 1;
//			if (a[x] < 0) w = x;
//			a[x] = -a[x];
//		}
//		for (int i = 0; i < a.size(); i++)
//			if (a[i] > 0 && i!=w) return{ w + 1, i + 1 };
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 