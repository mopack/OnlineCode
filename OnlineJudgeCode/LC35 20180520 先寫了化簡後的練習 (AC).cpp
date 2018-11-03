//#include <iostream>
//#include <cstdlib>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	int searchInsert(vector<int>& nums, int target) {
//		if (target < nums[0]) return 0;
//
//		int start = 0, end = nums.size() - 1, mid;
//		while (start <= end) {
//			mid = (start + end) / 2;
//			if (target > nums[mid])
//				start = mid + 1;
//			else if (target < nums[mid])
//				end = mid - 1;
//			else
//				return mid;
//		}
//		return start;
//	}
//}ans35;
//int main() {
//	vector<int>a = { 1,3,5,6 };
//	cout << ans35.searchInsert(a, 0) << endl;
//	system("pause");
//	return 0;
//}