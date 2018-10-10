//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <numeric>
//
//using namespace std;
//
////Sol: . Present: AC: Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> singleNumber(vector<int>& A) {
//		int diff = accumulate(A.begin(), A.end(), 0, [](int a, int b) {return a^b; });
//		diff &= -diff; // Diff = Diff & (-Diff); // Right Side First 1 (binary), the Distinct of ans1 & ans2;
//		vector<int>ans(2, 0);
//		for (auto a : A) {
//			if (a & diff)ans[0] ^= a;
//			else ans[1] ^= a;
//		}
//		return ans;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 