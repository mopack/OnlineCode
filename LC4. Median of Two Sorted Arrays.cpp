//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;

//// 16ms / PR100
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
//	double findMedianSortedArrays(vector<int>&A, vector<int>&B) {
//		int Size = A.size() + B.size();
//		int Ans1 = FindKth(A.begin(), A.size(), B.begin(), B.size(), Size / 2 + 1);
//
//		if (Size & 1) return Ans1;
//		return (Ans1 + FindKth(A.begin(), A.size(), B.begin(), B.size(), Size / 2)) / 2.0;
//	}
//};

//int main() {
//	Solution az;
//	vector<int> a = {1,2}, b = {3};
//	cout << az.findMedianSortedArrays(a,b) << endl;
//	system("pause");
//	return 0;
//}	