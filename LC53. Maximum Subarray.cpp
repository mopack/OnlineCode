//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;

// Sol2: Divide & Conquer (AC)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution { 
//public:
//	int maxSum(int L, int R, vector<int>& A) {
//		if (L > R)return 0;
//		if (L == R) {
//			return (A[L] > 0) ? A[L] : 0;
//		}
//
//		int M, LSum, RSum, sum, max2L, max2R, maxCrossing;
//		M = (L + R) / 2;
//		LSum = maxSum(L, M - 1, A);
//		RSum = maxSum(M + 1, R, A);
//
//		sum = 0; max2L = 0;
//		for (int i = M; i >= L; i--) {
//			sum += A[i];
//			max2L = max(max2L, sum);
//		}
//
//		sum = 0; max2R = 0;
//		for (int i = M + 1; i <= R; i++) {
//			sum += A[i];
//			max2R = max(max2R, sum);
//		}
//
//		maxCrossing = max2L + max2R;
//		return max(max(maxCrossing, LSum), RSum);
//	}
//	int maxSubArray(vector<int>&A) {
//		int Max = *(max_element(A.begin(), A.end()));
//		if (Max <= 0) return Max;
//		return maxSum(0, A.size() - 1, A);
//	}
//};

// Sol1: Linear (AC)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution { 
//public:
//	int maxSubArray(vector<int>& A) {
//		int Max = *(max_element(A.begin(), A.end())), Ans;
//		if (Max <= 0) return Max;
//
//		int Max = 0, Ans = 0;
//		for (auto a : A) {
//			if ( (Max += a) < 0) Max = 0;
//			else Ans = max(Ans, Max);
//		}
//		return Ans;
//	}
//};

//int main() {
//	Solution az;
//	system("pause");
//	return 0;
//} 