//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// DP, 4ms/PR100
//#define ok0 (p[i] == s[j] || p[i] == '.')
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool isMatch(string s, string p) {
//		vector<bool>d(s.size() + 1, 0); // Match
//		d[s.size()] = 1;
//
//		for (int i = p.size() - 1; i >= 0; i--) {
//			if (p[i] == '*') {
//				i--;
//				for (int j = s.size() - 1; j >= 0; j--) {
//					d[j] = d[j] || (d[j + 1] && ok0);
//				}
//			}
//			else {
//				for (int j = 0; j < s.size(); j++) {
//					d[j] = d[j + 1] && ok0;
//				}
//				d[s.size()] = 0;
//			}
//		}
//		return d[0];
//	}
//};
//
////// D&C, C Method 16ms/PR41
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	#define ok0 *s!= '\0' && (*s == *p || *p == '.')
////	bool CMatch(const char* s, const char* p) {
////		if (*p == '\0') return *s == '\0'; //SizeP = 0
////		if (*(p + 1) == '\0') return ok0 && *(s + 1) == '\0'; //SizeP = 1
////
////		if (*(p + 1) == '*') {
////			if (CMatch(s, p + 2)) return 1;
////			return ok0 && CMatch(s + 1, p);
////		}
////		return ok0 && CMatch(s + 1, p + 1);
////	}
////	bool isMatch(string s, string p) {
////		return CMatch(s.c_str(), p.c_str());
////	}
////};
//
//// D&C, V1, C, 16ms/PR47
////#define ok0 *s!= '\0' && (*s == *p || *p == '.')
////bool isMatch(const char* s, const char* p) {
////	if (*p == '\0') return *s == '\0'; //SizeP = 0
////	if (*(p + 1) == '\0') return ok0 && *(s + 1) == '\0'; //SizeP = 1
////
////	if (*(p + 1) == '*') {
////		if (isMatch(s, p + 2)) return 1;
////		return ok0 && isMatch(s + 1, p);
////	}
////	return ok0 && isMatch(s + 1, p + 1);
////}
//
//// D&C, V2, C, 12ms/PR61
////bool isMatch(char* s, char* p) {
////	if (*p == '\0') return *s == '\0';             //SizeP = 0
////
////	int star1 = (*(p + 1) == '*');
////	if (star1 && isMatch(s, p + 2)) return 1; // ZeroExpection
////
////	if (*s == '\0' || !(*s == *p || *p == '.')) return 0; // CheckOne
////
////	if (*(p + 1) == '\0') return *(s + 1) == '\0'; //SizeP = 1
////	return isMatch(s + 1, p + 1 - star1);          //SizeP > 1
////}
//
//
//int main() {
//	class Solution az;
//	cout<<az.isMatch("acccbbcbcababacb", "a*b*c*c*c*a*a*c");
//
//
//	system("pause");
//	return 0;
//} 
//
//
