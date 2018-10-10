//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
////0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> searchRange(vector<int>& A, int Key) {
//		if (A.empty()) return{ -1,-1 };
//
//		auto it = lower_bound(A.begin(), A.end(), Key);
//		if (it == A.end() || *it != Key) return{ -1, -1 };
//
//		auto ut = upper_bound(it + 1, A.end(), Key);
//		return{ it - A.begin(), ut - 1 - A.begin() };
//	}
//};
//
////0ms Other's
///*
//* [34] Find First and Last Position of Element in Sorted Array
//*
//* https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
//*
//* algorithms
//* Medium (31.94%)
//* Total Accepted:    214.2K
//* Total Submissions: 670.5K
//* Testcase Example:  '[5,7,7,8,8,10]\n8'
//*
//* Given an array of integers nums sorted in ascending order, find the starting
//* and ending position of a given target value.
//*
//* Your algorithm's runtime complexity must be in the order of O(log n).
//*
//* If the target is not found in the array, return [-1, -1].
//*
//* Example 1:
//*
//*
//* Input: nums = [5,7,7,8,8,10], target = 8
//* Output: [3,4]
//*
//* Example 2:
//*
//*
//* Input: nums = [5,7,7,8,8,10], target = 6
//* Output: [-1,-1]
//*
//*/
//class Solution {
//public:
//	vector<int> searchRange(vector<int>& nums, int target) {
//		if (nums.size() == 0) return{ -1, -1 };
//		int l = 0, r = nums.size() - 1;
//		int mid = 0;
//		vector<int> result(2, -1);
//		// search for the left boundary
//		while (l < r) {
//			mid = (l + r) / 2;
//			if (nums[mid] < target) l = mid + 1;
//			else r = mid;
//		}
//		if (nums[l] != target) return result;
//		result[0] = l;
//		// search for the right boundary
//		r = nums.size() - 1;
//		while (l < r) {
//			mid = (l + r) / 2 + 1;
//			if (nums[mid] > target) r = mid - 1;
//			else l = mid;
//		}
//		result[1] = r;
//		return result;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
