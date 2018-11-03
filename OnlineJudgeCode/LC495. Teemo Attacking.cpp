//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int findPoisonedDuration(vector<int>& t, int d) {
//		if (t.size() <= 0)return 0;
//
//		int ans = 0;
//		for (int i = 0; i + 1 < t.size(); i++) {
//			ans += min(t[i + 1] - t[i], d);
//		}
//		ans += d; // last one
//		return ans;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//}