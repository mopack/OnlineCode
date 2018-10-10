//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
////4ms/PR98
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int search(vector<int>&A, int Key) {
//		if (A.empty()) return -1;
//		int S = 0, E = A.size() - 1, M;
//		while (S <= E) {
//			M = (S + E) / 2;
//			if (A[M] == Key) return M;
//			if (A[M] < A[E]) { // Right Part is Ascending
//				if (Key > A[M] && Key <= A[E]) S = M + 1;
//				else E = M - 1;
//			}else{
//				if (Key >= A[S] && Key < A[M]) E = M - 1;
//				else S = M + 1;
//			}
//		}
//		return -1;
//	}
//};
//
////Other's 0ms
//static const auto speedup = []() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	return nullptr;
//}();
//
//
//
//int findMiddle(int s, int e, int cnt)
//{
//	//	if (e == s)
//	//		return -1;
//
//
//	return (s + e) / 2;
//
//
//}
//
//
//
//class Solution {
//public:
//	int search(vector<int>& nums, int target)
//
//
//	{
//
//		int size = nums.size();
//		if (size == 0)
//			return -1;
//		if (size == 1)
//			return nums[0] == target ? 0 : -1;
//
//		int s = 0;
//		int e = size - 1;
//
//		if (nums[s] == target)
//			return s;
//		if (nums[e] == target)
//			return e;
//
//		int m = -2;
//		int m_pre = -1;
//		while (1)
//		{
//
//
//
//			m = (s + e) / 2;
//			//		if (m == -1)
//			//			return -1;
//			if (m == m_pre)
//				return -1;
//			m_pre = m;
//
//			if (nums[m] == target)
//				return m;
//
//			if (nums[m] > target)
//			{
//				if (nums[s] < target)
//				{
//					e = m;
//					continue;
//				}
//
//				if (nums[e] < target)
//				{
//					e = m;
//					continue;
//				}
//
//				if (nums[m] > nums[s])
//				{
//					s = m;
//				}
//				else
//				{
//					e = m;
//				}
//
//
//				continue;
//			}
//
//			if (nums[m] < target)
//			{
//				if (nums[e] > target)
//				{
//					s = m;
//					continue;
//				}
//
//				if (nums[s] > target)
//				{
//					s = m;
//					continue;
//				}
//
//				if (nums[m] > nums[s])
//				{
//					s = m;
//				}
//				else
//					e = m;
//
//			}
//
//		}
//
//	}
//};
////Other's 4ms
//class Solution {
//public:
//	int search(vector<int>& nums, int target) {
//		int n = nums.size(), left = 0, right = n - 1, mid;
//		while (left <= right) {
//			mid = (left + right) / 2;
//			if (nums[mid] == target) {
//				return mid;
//			}
//
//			if (target < nums[mid]) {
//				if (nums[left] > nums[mid] || nums[left] <= target)
//					right = mid - 1;
//				else
//					left = mid + 1;
//			}
//			else {
//				if (nums[mid] > nums[right] || nums[right] >= target)
//					left = mid + 1;
//				else
//					right = mid - 1;
//			}
//		}
//		return -1;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
