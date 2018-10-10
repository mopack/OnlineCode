//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	vector<vector<int>> subsets(vector<int>&a) {
//		int i; vector<bool>d(a.size(), 0);
//		vector<vector<int>> ans = {{}}; vector<int> an = {};
//		while (1) {
//			for (i = 0; i < a.size(); i++)
//				if (d[i]) d[i] = 0;
//				else { d[i] = 1; break; }
//			if(i==a.size())return ans;
//			
//			for (an = {}; i < a.size(); i++)
//				if (d[i])an.push_back(a[i]);
//			ans.push_back(an);
//		}
//	}
//};
//
//class Solution {
//public:
//	vector<vector<int>> subsets(vector<int>& nums) {
//		int N = nums.size();
//		vector<vector<int>> ans; vector<int> an = {};
//		vector<bool>d(N, 0);
//		ans.push_back(an);
//		while (1) {
//			bool found = 0;
//			for (int i = 0; i < N; i++)
//				if (d[i]) d[i] = 0;
//				else { d[i] = 1; found = 1; break; }
//				if (!found)return ans;
//
//				an = {};
//				for (int i = 0; i < N; i++) if (d[i])an.push_back(nums[i]);
//				ans.push_back(an);
//		}
//	}
//};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void BT(int i, vector<int>& A, vector<int>& An, vector<vector<int>> &Ans) {
//		if (i == A.size()) { Ans.push_back(An); return; }
//
//		BT(i + 1, A, An, Ans);
//
//		An.push_back(A[i]);
//		BT(i + 1, A, An, Ans);
//		An.pop_back();
//	}
//	vector<vector<int>> subsets(vector<int>& A) {
//		vector<vector<int>> Ans;
//		vector<int>An;
//		BT(0, A, An, Ans);
//		return Ans;
//	}
//};
//
////Other's
//class Solution {
//public:
//	vector<vector<int>> subsets(vector<int>& nums) {
//		vector<vector<int>> res(1, vector<int>()); // 1 row without any element;
//		for (int i = 0; i < nums.size(); i++) // for each num in nums
//		{
//			int n = res.size();
//			for (int j = 0; j < n; j++) // add nums into each element of res
//			{
//				res.push_back(res[j]); // duplicate each existing elements in res
//				res.back().push_back(nums[i]); // and add each num
//			}
//		}
//		return res;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 