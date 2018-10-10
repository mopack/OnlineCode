//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
////0ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int maxProduct(vector<int>&A) {
//		// Max, Min: Currently Max/Min. Ans: Currently Ans.
//		bool ZeroInterAndNoPos = 1;
//		int Max = 1, Min = 1, Ans = INT_MIN, Last0 = -1;
//		for(int i = 0; i != A.size(); i++){
//			if (A[i] == 0) Max = 1, Min = 0, Last0 = i;
//			else {
//				if (i - Last0 > 1) ZeroInterAndNoPos = 0; // !ZeroInters
//				if (A[i] > 0) {
//					Max *= A[i];
//					Min = min(Min*A[i], 1);
//
//					ZeroInterAndNoPos = 0; //!NoPos
//				}else {
//					int Temp = Max;
//					Max = max(Min*A[i], 1);
//					Min = Temp * A[i];
//				}
//			}
//			if (Max > Ans) Ans = Max;
//		}
//
//		if (ZeroInterAndNoPos) return (A.size() == 1) ? A[0] : 0;
//		return Ans;
//	}
//};
//
////Other's 0ms/PR100
////class Solution {
////public:
////	int maxProduct(vector<int>& nums)
////	{
////		int n = nums.size();
////		int ans = nums[0];
////		int curr_max_prod = nums[0];
////		int curr_min_prod = nums[0];
////		int prev_max_prod = nums[0];
////		int prev_min_prod = nums[0];
////
////		for (int i = 1; i<n; i++)
////		{
////			curr_max_prod = max(prev_max_prod*nums[i], max(prev_min_prod*nums[i], nums[i]));
////			curr_min_prod = min(prev_max_prod*nums[i], min(prev_min_prod*nums[i], nums[i]));
////			ans = max(ans, curr_max_prod);
////			prev_max_prod = curr_min_prod;
////			prev_min_prod = curr_max_prod;
////		}
////		return ans;
////	}
////};
//int main() {
//	class Solution az;
//	vector<int>x = {-1,-1};
//	cout << az.maxProduct(x);
//	system("pause");
//	return 0;
//} 
