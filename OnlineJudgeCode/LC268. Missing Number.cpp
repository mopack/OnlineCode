//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
////Sol: . Present: AC: Lines/4ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int missingNumber(vector<int>&A) {
//		long long N = A.size();
//		long long sum = (N*(N + 1))>>1;
//		for (auto a : A) sum -= a;
//		return sum;
//	}
//};
//
////Sol: . Present: AC: 10Lines/8ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int missingNumber(vector<int>&A) {
//		int Ans = A.size();
//		for (int i = 0; i < A.size(); i++)
//			Ans ^= i ^ A[i];
//		return Ans;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//} 