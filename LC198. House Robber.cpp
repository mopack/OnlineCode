//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	int rob(vector<int>&a) {
////		if (a.size() == 0)return 0;
////		int d0 = 0, d1 = a[0], c0, c1;
////		for (int i = 1; i < a.size(); i++) {
////			c0 = max(d0, d1);
////			c1 = d0 + a[i];
////			d0 = c0; d1 = c1;
////		}
////		return max(d0, d1);
////	}
////};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int rob(vector<int>&A) {
//		if (A.empty())return 0;
//		int L0 = 0, L1 = A[0], P0, P1;
//		for (int i = 1; i < A.size(); i++) {
//			P0 = max(L0, L1);
//			P1 = L0 + A[i];
//			L0 = P0, L1 = P1;
//		}
//		return max(L0, L1);
//	}
//};
//
//
//int main() {
//	vector<int> x = { 2,1,1,2 };
//	class Solution az;
//	cout<<az.rob(x);
//	system("pause");
//	return 0;
//} 