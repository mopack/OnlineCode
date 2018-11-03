//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//#include <functional>
//using namespace std;
//
////AC
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/4ms/PR99.71
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int findKthLargest(vector<int>&A, int K) {
//		if ((K << 1) > A.size()) {
//			priority_queue<int>q;
//			K = A.size() - K + 1;
//
//			for (auto &a : A) {
//				q.push(a);
//				if (q.size() > K) q.pop();
//			}
//			return q.top();
//		}else {
//			priority_queue<int, vector<int>, greater<int>>q;
//			for (auto &a : A) {
//				q.push(a);
//				if (q.size() > K) q.pop();
//			}
//			return q.top();
//		}
//	}
//};
//
//// D&C
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//typedef vector<int>::iterator It;
//class Solution {
//public:
//	int FindKth(It A, size_t AL, It B, size_t BL, size_t K) { // K start from 1
//		if (AL > BL) return FindKth(B, BL, A, AL, K);
//		if (AL == 0) return *(B + K - 1);
//		if (K == 1) return min(*A, *B);
//
//		int Am = min(AL, K / 2), Bm = K - Am;
//		int Comp = *(A + Am - 1) - *(B + Bm - 1);
//
//		if (Comp < 0) return FindKth(A + Am, AL - Am, B, BL, K - Am);
//		if (Comp > 0) return FindKth(A, AL, B + Bm, BL - Bm, K - Bm);
//		return *(A + Am - 1);
//	}
//	int findKthLargest(vector<int>&A, int K) {
//
//	}
//};
//
////AC
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int findKthLargest(vector<int>&A, int K) {
//		nth_element(A.begin(), A.end() - K, A.end());
//		return *(A.end() - K);
//	}
//};
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<int>x = { 3,2,1,5,6,4 }; int k = 2;
//	//vector<int>x = { 1,2,3,4,5,6,7,8 }; int k = 8;
//	cout<<az.findKthLargest(x, k);
//	system("pause");
//	return 0;
//} 