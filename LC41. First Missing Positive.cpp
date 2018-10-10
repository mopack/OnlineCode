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
//	int firstMissingPositive(vector<int>& A) { // A[i] Store Value i+1 (i Range: 0~N-1, Value Range 1~N)
//		int N = A.size();
//		for (int i = 0; i < N; ) {
//			if (A[i] != (i + 1) && A[i] > 0 && A[i] <= N && A[A[i] - 1] != A[i]) //A[i] NotStore(i+1), Value(A[i])InRange, A[i] != A[Value-1]
//				swap(A[i], A[A[i] - 1]);
//			else 
//				i++;
//		}
//		for (int i = 0; i < N; i++) {
//			if (A[i] != (i + 1)) return i + 1;
//		}
//		return N + 1;
//	}
//};
//
//// Other's
//class Solution {
//public:
//	int firstMissingPositive(vector<int>& nums) {
//		int end = nums.size() - 1;
//
//		for (int i = nums.size() - 1; i >= 0; i--) {
//			if (nums[i] <= 0) {
//				int temp = nums[i];
//				nums[i] = nums[end];
//				nums[end] = temp;
//				end--;
//			}
//		}
//
//		for (int i = 0; i <= end; i++) {
//			if (abs(nums[i]) - 1 <= end && nums[abs(nums[i]) - 1]>0) {
//				nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
//			}
//		}
//
//		int smallest = -1;
//		for (int i = 0; i <= end; i++) {
//			if (nums[i]>0) {
//				smallest = i + 1;
//				break;
//			}
//		}
//
//		if (smallest == -1)
//			return end + 2;
//		else
//			return smallest;
//
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
