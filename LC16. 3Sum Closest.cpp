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
//	int threeSumClosest(vector<int>& A, int Target) {
//		sort(A.begin(), A.end());
//		int MinDiff = INT_MAX;
//		for (int i = 0; i + 2 < A.size(); i++) {
//			int L = i + 1, R = A.size() - 1;
//			while (L < R) {
//				int Diff = A[i] + A[L] + A[R] - Target;
//				if (abs(Diff) < abs(MinDiff)) MinDiff = Diff;
//
//				if (Diff == 0) break;
//				if (Diff < 0) L++;
//				else R--;
//			}
//		}
//		return Target + MinDiff;
//	}
//};
//
////  4ms, Others
//class Solution {
//public:
//	int threeSumClosest(vector<int>& nums, int target) {
//		sort(nums.begin(), nums.end());
//
//		int sum = 0;
//		int min = INT_MAX;
//		int n = nums.size();
//		int ans;
//		for (int i = 0; i < n - 2; i++) {
//			int l = i + 1;
//			int r = n - 1;
//			while (l<r) {
//				sum = nums[i] + nums[l] + nums[r];
//				if (abs(sum - target) < min) {
//					min = abs(sum - target);
//					ans = sum;
//				}
//				if (sum<target) {
//					l++;
//				}
//				else if (sum>target) {
//					r--;
//				}
//				else
//					return sum;
//			}
//		}
//		return ans;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
