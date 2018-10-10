//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//// 4ms/PR98
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int maxProfit(vector<int>&P) {
//		int Sum = 0, Diff;
//		for (int i = 1; i < P.size(); i++) {
//			Diff = P[i] - P[i - 1];
//			if (Diff > 0) Sum += Diff;
//		}
//		return Sum;
//	}
//};
//
//
//int main() {
//	Solution az;
//	system("pause");
//	return 0;
//} 