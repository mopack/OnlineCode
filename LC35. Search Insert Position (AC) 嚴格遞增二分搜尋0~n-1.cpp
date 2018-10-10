//#include <iostream>
//#include <cstdlib>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	int searchInsert(vector<int>& nums, int target) {
//		// 再加一個 if(target > num[nums.size()-1]) return nums.size()-1; (? 應該要?
//		if (target < nums[0]) return 0;
//		int start = 0, end = nums.size() - 1, mid;
//		while (start <= end) {
//			mid = (start + end) / 2;
//			if (nums[mid] > target) 
//				end = mid - 1;
//			else if(nums[mid] < target)
//				start = mid + 1;
//			else
//				return mid;
//		}
//		return start;
//
//		//cout << start << ' ' << end << ' ' << mid << endl;
//	}
//
//}ans35;
//int main35() {
//	vector<int>a = { 1,3,5,6 };
//	cout << ans35.searchInsert(a, 0) << endl;
//	system("pause");
//	return 0;
//}