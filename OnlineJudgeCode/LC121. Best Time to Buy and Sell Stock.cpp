//#include <iostream>
//#include <vector>
//using namespace std;
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int maxProfit(vector<int>& A) {
//		int Min = INT_MAX, Ans = 0;
//		for (auto a : A) {
//			if (a < Min) Min = a;
//			else if (a - Min > Ans) Ans = a - Min;
//		}
//		return Ans;
//	}
//};
//
//int main() {
//	return 0;
//}