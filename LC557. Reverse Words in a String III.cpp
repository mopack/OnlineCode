//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	string reverseWords(string s) {
//		int f = 0, L = 0; string ans = "", S;
//		for (f = 0, L = 0; f < s.size(); f++, L = f) {
//			for (; f < s.size() && s[f] != ' '; f++);
//			S = s.substr(L, f - L);
//			reverse(S.begin(), S.end());
//			ans += (ans == "") ? S : (' ' + S);
//		}
//		return ans;
//	}
//}az;
//
//int main() {
//	string s = "Let's take LeetCode contest";
//	//cout << s.substr(0, 3) << "]" << endl;
//	cout<<az.reverseWords(s);
//
//	system("pause");
//	return 0;
//} 