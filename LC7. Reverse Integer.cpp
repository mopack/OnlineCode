//#include <iostream>
//#include <string>
//#include <climits>
//#include <algorithm>
//using namespace std;
//
//// 8ms/ PR97
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int reverse(int X) {
//		long x = X; bool neg;
//		if (x < 0) x = -x, neg = 1; else neg = 0;
//
//		long y = 0;
//		for (; x; x /= 10) 
//			y = y * 10 + x % 10;
//
//		if (neg) y = -y;
//		return (y < INT_MIN || y > INT_MAX) ? 0 : y;
//	}
//};
//// 8ms/ PR97
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int reverse(int X) {
//		long x = X; bool neg;
//		if (x < 0) x = -x, neg = 1; else neg = 0;
//		string s = to_string(x);
//		std::reverse(s.begin(), s.end());
//		x = stol(s);
//		if (neg) x = -x;
//		return (x < INT_MIN || x > INT_MAX) ? 0 : x;
//	}
//};
//// 4ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution { 
//public:
//	int reverse(int X) {
//		long long x = X; bool neg;
//		if (x < 0) x = -x, neg = 1; else neg = 0;
//
//		char line[12];
//		sprintf(line, "%lld", x);
//		string s(line);
//		std::reverse(s.begin(), s.end());
//		sscanf(s.c_str(), "%lld", &x);
//
//		if (neg)x = -x;
//		return (x < INT_MIN || x > INT_MAX) ? 0 : x;
//	}
//};
//
//int main() {
//	class Solution az;
//	cout<<az.reverse(123);
//	system("pause");
//	return 0;
//} 