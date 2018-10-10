////#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// 32ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int>A;
//	Solution(vector<int> _A) : A(_A) {}
//	int pick(int Target) {
//		int Count = 0, I;
//		for (int i = 0; i != A.size(); i++) {
//			if (A[i] == Target) {
//				Count++;
//				if (rand() % Count == 0) I = i;
//			}
//		}
//		return I;
//	}
//};
//
//static int fast = []() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int>A;
//	Solution(vector<int> _A) : A(_A) {}
//
//	int pick(int Target) {
//		int I;
//		for (int i = 0, Count = 0; i < A.size(); i++) {
//			if (A[i] == Target) {
//				if ((rand() % (++Count)) == 0) I = i;
//			}
//		}
//		return I;
//	}
//};

////#include <random>
////class Solution {
////public:
////	Solution(const vector<int>& nums) :engine_(device_()), nums_(nums) {}
////
////	int pick(int target)
////	{
////		int k = 0;
////		int res = -1;
////		int size = nums_.size();
////		for (int i = 0; i<size; ++i)
////		{
////			if (nums_[i] == target)
////			{
////				uniform_int_distribution<int> dist(0, k);
////				if (dist(engine_) == 0)
////					res = i;
////				k++;
////			}
////		}
////		return res;
////	}
////
////private:
////	random_device         device_;
////	default_random_engine engine_;
////	vector<int>           nums_;
////};
//int main() {
//	system("pause");
//	return 0;
//} 
