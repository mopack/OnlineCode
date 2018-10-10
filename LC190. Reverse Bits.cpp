//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <bitset>
//#include <algorithm>
//using namespace std;
//
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	uint32_t reverseBits(uint32_t n) {
//		bitset<32> b(n);
//		string s = b.to_string();
//		reverse(s.begin(), s.end());
//		b = bitset<32>(s);
//		return b.to_ulong();
//	}
//};
//
////Sol: . Present: AC: 12Lines/4ms/PR71
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	uint32_t reverseBits(uint32_t n) {
//		n = (n << 16) | (n >> 16);
//		n = (n & 0x00FF00FF) << 8 | (n & 0xFF00FF00) >> 8;
//		n = (n & 0x0F0F0F0F) << 4 | (n & 0xF0F0F0F0) >> 4;
//		n = (n & 0x33333333) << 2 | (n & 0xCCCCCCCC) >> 2;
//		n = (n & 0x55555555) << 1 | (n & 0xAAAAAAAA) >> 1;
//		return n;
//	}
//};
//int main() {
//	uint32_t n = 0;
//	cout << bitset<32>(n) << ' ' << bitset<32>(~n) << '\n';
//	system("pause");
//	return 0;
//} 