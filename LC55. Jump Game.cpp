//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
////4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool canJump(vector<int>& A) {
//		int N = A.size(), Reach = 0;
//		for (int i = 0; i < N; i++) {
//			if (i > Reach || Reach >= N - 1) break;
//			Reach = max(Reach, i + A[i]);
//		}
//		return Reach >= N - 1;
//	}
//};
////Others 4ms
//class Solution {
//public:
//	bool canJump(vector<int>& nums) {
//		int curpos = 0;
//		int i = 0;
//
//		while (i <= curpos) {
//			curpos = max(i + nums[i], curpos);
//
//			if (curpos >= (nums.size() - 1))
//				return true;
//			++i;
//		}
//
//		return false;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
