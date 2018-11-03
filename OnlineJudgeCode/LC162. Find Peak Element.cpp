//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int findPeakElement(vector<int>& A) {
//		return max_element(A.begin(), A.end()) - A.begin();
//	}
//};
//
//// Other's
//class Solution {
//public:
//	int findPeakElement(vector<int>& nums) {
//		nums.insert(nums.begin(), INT_MIN);
//		nums.push_back(INT_MIN);
//
//		int i;
//		for (i = 1; i < nums.size() - 1; i += 2)
//		{
//			if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1])
//				return i - 1;
//		}
//
//		for (i = 2; i < nums.size() - 1; i += 2)
//		{
//			if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1])
//				return i - 1;
//		}
//
//		return 0;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
