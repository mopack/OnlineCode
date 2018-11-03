//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	bool del = 0;
//	string a;
//	bool go(int s, int e) {
//		while (s < e && a[s] == a[e]) s++, e--;
//		if (s >= e) return 1;
//		if (del) return 0;
//
//		del = 1;
//		if (go(s + 1, e))return 1;
//		return go(s, e - 1);
//	}
//
//	bool validPalindrome(string A) {
//		a = A;
//		return go(0, A.size() - 1);
//	}
//};
//int main() {
//	//Something interesting: 
//	// find  <is_palindrome.hpp> in your computer (from Boost C++ Libraries)
//	string s = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";
//	class Solution az;
//	cout << az.validPalindrome(s);
//	system("pause");
//	return 0;
//} 