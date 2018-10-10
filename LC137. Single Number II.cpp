//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
////Sol: . Present: AC: 14Lines/4ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int singleNumber(vector<int>& A) {
//		int ans = 0;
//		for (int i = 0; i < 32; i++) {
//			int sum = 0;
//			for (int n : A) 
//				if((n >> i) & 1)sum++;
//			ans |= ((sum % 3) << i);
//		}
//		return ans;
//	}
//};
//
////Sol: . Present: AC: 12Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int singleNumber(vector<int>& A) {
//		int ones = 0, twos = 0;
//		for (int i : A) {
//			ones = (ones ^ i) & ~twos;
//			twos = (twos ^ i) & ~ones;
//		}
//		return ones;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//} 