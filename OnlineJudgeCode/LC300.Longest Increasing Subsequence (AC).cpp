//#include <bits/stdc++.h>
//using namespace std;
//
//class Solution {
//public:
//	int lengthOfLIS(vector<int>& nums) {
//		if (nums.size() <= 0)return 0;
//
//		// dp data
//		vector<int> last;
//		last.push_back(nums[0]);
//
//		// lis
//		for (int i = 1; i < nums.size(); i++) {
//			if (nums[i] > last[last.size()-1]) {
//				last.push_back(nums[i]);
//			}else{
//				// binarySearch
//				if (nums[i] < last[0]) {
//					last[0] = nums[i];
//				}
//				else {
//					int start = 0, end = last.size() - 1, mid;
//					while (start <= end) {
//						mid = (start + end) / 2;
//						if (nums[i] > last[mid])
//							start = mid + 1;
//						else if (nums[i] < last[mid])
//							end = mid - 1;
//						else {
//							last[mid] = nums[i];
//							goto found;
//						}
//					}
//					last[start] = nums[i];
//				found:;
//				}
//			}
//		}
//
//		return last.size();
//	}
//};
//
//int main() {
//	vector<int> v = { 1,2,3 };
//	//cout << v.begin() << endl;
//	system("pause");
//	return 0;
//}