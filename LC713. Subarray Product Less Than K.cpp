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
//	int numSubarrayProductLessThanK(vector<int>& n, int k) {
//		if (n.size() <= 0 || k <= 1)return 0;
//
//		int ans = 0, s= 0, e;
//		long long pod = 1;
//		for (e = 0; e < n.size(); e++) {
//			pod *= n[e];
//			while (pod >= k) {
//				pod /= n[s]; s++;
//			}
//			ans += e - s + 1;
//		}
//		return ans;
//	}
//}s;
//
//int main() {
//	vector<int> x = { 10,5,2,6 };
//
//	for (int i = 1; i <= 1; i++) {
//		cout << s.numSubarrayProductLessThanK(x, 100) << endl;
//	}
//	system("pause");
//	return 0;
//}