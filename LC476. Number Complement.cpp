//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <bitset>
//#include <type_traits>
//using namespace std;
//
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int findComplement(int n) {
//		vector<bool> s;
//		for (; n; n >>= 1) 
//			s.push_back(!(n & 2));
//
//		n = 0;
//		for (int i = s.size() - 1; i >= 0; i--) 
//			if(s[i])n += (1<<i);
//		return n;
//	}
//};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int findComplement(int n) {
//		unsigned int mask = ~0;
//		for (; mask & n; mask <<= 1);
//		return (~mask) & (~n);
//	}
//};
//
//int main() {
//	Solution az;
//	az.findComplement(5);
//
//	system("pause");
//	return 0;
//} 