//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//// 52ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool isPalindrome(int n) {
//		if (n < 0)return 0;
//		int rev = 0, n0 = n;
//		for (; n; n /= 10)
//			rev = rev * 10 + n % 10;
//		return rev == n0;
//	}
//};
//
//// 68ms/PR96
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//const int ten[10] = { 1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000 };
//class Solution { 
//public:
//	int dig(int n, int i) {
//		return (n / ten[i]) % 10;
//	}
//	bool isPalindrome(int n) {
//		if (n < 0)return 0;
//		for (int s = 0, e = int(log10(n)); s < e ; s++, e--) 
//			if (dig(n, s) != dig(n, e)) return 0;
//		return 1;
//	}
//};
//
//// 60ms/PR96
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool isPalindrome(int x) {
//		if (x < 0) return 0;
//		char line[12]; int y;
//		sprintf(line, "%d", x);
//		string s(line);
//		std::reverse(s.begin(), s.end());
//		sscanf(s.c_str(), "%d", &y);
//		return x == y;
//	}
//};
//int main() {
//	class Solution az;
//	cout<<az.isPalindrome(121);
//	system("pause");
//	return 0;
//} 