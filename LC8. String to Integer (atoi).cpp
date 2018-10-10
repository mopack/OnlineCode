//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// 8ms/PR98
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	int myAtoi(string s) {
////		int i = 0, Sign = 0;
////
////		// Sign
////		bool ZeroBefore = 0;
////		for (; i != s.size(); i++) {
////			if (s[i] == '0') { ZeroBefore = 1; continue; }
////			if (isdigit(s[i])) break;
////			
////			// Else: ' ', +, -, words
////			if (ZeroBefore) return 0;
////			if (s[i] == ' ')  continue; 
////			if (s[i] == '-') { Sign = -1; break; }
////			if (s[i] == '+') { Sign = +1; break; }
////			return 0;
////		}
////
////		// Digit
////		if (Sign) {
////			for (i++; i != s.size(); i++) {
////				if (s[i] == '0') continue;
////				if (isdigit(s[i])) break;
////				return 0;
////			}
////		}
////
////		// Calculate
////		if (i == s.size()) return 0;
////		long long x = stol(s.substr(i, 11));
////		if (Sign) x *= Sign;
////		if (x > INT_MAX) return INT_MAX;
////		if (x < INT_MIN) return INT_MIN;
////		return x;
////	}
////};
//
//// 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int myAtoi(string s) {
//		long long Ans = 0, Sign = 1;
//		int i = 0;
//		while (s[i] == ' ')i++;
//
//		if (s[i] == '+' || s[i] == '-') {
//			if (s[i] == '-') Sign = -1;
//			i++;
//		}
//		
//		for (; i != s.size() && isdigit(s[i]); i++) {
//			Ans = Ans * 10 + (s[i] - 48);
//			if (Sign * Ans >= INT_MAX) return INT_MAX;
//			if (Sign * Ans <= INT_MIN) return INT_MIN;
//		}
//		return Sign * Ans;
//	}
//};
//int main() {
//	class Solution az;
//	cout<<"\nAns="<<az.myAtoi("");
//	system("pause");
//	return 0;
//} 
