//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
////12ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int search(vector<int>&A, int Key) {
//		auto it = lower_bound(A.begin(), A.end(), Key);
//		if (it == A.end() || *it != Key) return -1;
//		return it - A.begin();
//	}
//};
//
////12ms Others
//class Solution {
//public:
//	int search(vector<int>& nums, int target)
//	{
//		int l = 0;
//		int r = nums.size() - 1;
//
//		while (l <= r)
//		{
//			int m = (l + r) / 2;
//			if (nums[m] == target)
//				return m;
//			else if (nums[m] < target)
//				l = m + 1;
//			else
//				r = m - 1;
//		}
//		return -1;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
