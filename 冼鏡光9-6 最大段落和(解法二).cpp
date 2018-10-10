//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//class Solution { // Sol2: Divide & Conquer (AC)
//public:
//	//vector<int> n;
//	vector<int>*p; 
//	#define n (*p)
//	int maxSum(int L, int R) {
//		//printf("start: %d, %d\n", L, R);
//		if (L > R)return 0;
//		if (L == R){
//			//printf("%d,%d = %d\n", L, L, (n[L] > 0) ? n[L] : 0);
//			return (n[L] > 0) ? n[L] : 0;
//		}
//
//		int M, LSum, RSum, sum, max2L, max2R, maxCrossing;
//		M = (L + R) / 2;
//		LSum = maxSum(L, M - 1);
//		RSum = maxSum(M + 1, R);
//		
//		sum = 0; max2L = 0;
//		for (int i = M; i >= L; i--) {
//			sum += n[i];
//			max2L = max(max2L, sum);
//		}
//
//		sum = 0; max2R = 0;
//		for (int i = M + 1; i <= R; i++) {
//			sum += n[i];
//			max2R = max(max2R, sum);
//		}
//
//		maxCrossing = max2L + max2R;
//		//printf("%d,%d = %d\n", L, R, max(max(maxCrossing, LSum), RSum));
//		return max(max(maxCrossing, LSum), RSum);
//	}
//
//	int maxSubArray(vector<int>&nums) {
//		p = &nums; //n = nums; (開始時使用的，初期寫避免錯誤，先用直接複製代替)
//		int ma = nums[0];
//		for (auto x : nums)if (x > ma)ma = x;
//		if (ma <= 0)return ma;
//		return maxSum(0, n.size() - 1);
//	}
//};
//int main() {
//	class Solution az;
//	vector<int> x = { 1,-1,-2};
//	cout<<az.maxSubArray(x);
//
//	system("pause");
//	return 0;
//} 