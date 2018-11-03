//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//#define match(p) (p&1)?(p-1):(p+1)
//	int minSwapsCouples(vector<int>& row) {
//		int Ans = 0;
//		for (auto it = row.begin(); it != row.end(); it += 2) {
//			int p = *it, q = match(p);
//			if (*(it+1) == q)continue;
//			auto iq = find(it + 2, row.end(), q);
//			swap(*iq, *(it + 1)); Ans++;
//		}
//		return Ans;
//	}
//};
//
//int main() {
//	Solution az;
//	vector<int> x = { 28,4,37,54,35,41,43,42,45,38,19,51,49,17,47,25,12,53,57,20,2,1,9,27,31,55,32,48,59,15,14,8,3,7,58,23,10,52,22,30,6,21,24,16,46,5,33,56,18,50,39,34,29,36,26,40,44,0,11,13 };
//	az.minSwapsCouples(x);
//
//	system("pause");
//	return 0;
//} 