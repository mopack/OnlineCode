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
//	int dominantIndex(vector<int>& n) {
//		int mav = -1, mai = -1;
//		for(int i=0; i<n.size();i++)
//			if (n[i] > mav) { mav = n[i]; mai = i; }
//
//		double half = mav / 2.0;
//		for (int i = 0; i < n.size(); i++)
//			if (i != mai && n[i] > half) return -1;
//		return mai;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//}