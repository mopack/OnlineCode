//#include <iostream>
//#include <cstdlib>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	int searchInsert(vector<int>& nums, int target) {
//		vector<int>nu;
//		nu.push_back(0);
//		for (int i = 0; i < nums.size(); i++)nu.push_back(nums[i]);
//
//		if (target < nu[1])return 0;
//
//		int start = 1, end = nu.size() - 1;
//		int mid;
//		while (start <= end) {
//			mid = (start + end) / 2;
//			if (nu[mid] > target) {
//				end = mid - 1;
//			}else if(nu[mid] < target){
//				start = mid + 1;
//			}else{
//				//cout << start << ' ' << end << ' ' << mid << endl;
//				return mid-1; //**
//			}
//		}
//		//cout << start << ' ' << end << ' ' << mid << endl;
//		return start-1; //**
//	}
//
//}ans;
//int main() {
//	vector<int>a = { 1,3,5,6 };
//	cout << ans.searchInsert(a, 5) << endl;
//	system("pause");
//	return 0;
//}