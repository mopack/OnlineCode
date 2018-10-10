//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	string toGoatLatin(string s) {
//		int f, L;
//		string ans = "", aa = "a", t;
//		for (f = 0, L = 0; f < s.size(); f++, L = f) {
//			for (; f < s.size() && s[f] != ' '; f++);
//			// check is vowel
//			char c = (s[L] < 97) ? (s[L] + 97 - 65) : s[L];
//
//			if (ans != "")ans += ' ';
//			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
//				ans += s.substr(L, f - L) + "ma" + aa;
//			}else{
//				c = s[L]; L++;
//				ans += s.substr(L, f - L) + c + "ma" + aa;
//			}
//			aa += "a";
//			//cout<<s.substr(L, f - L)<<']'<<endl;
//		}
//		return ans;
//	}
//}az;
//
//int main() {
//	az.toGoatLatin("I speak Goat Latin");
//
//	system("pause");
//	return 0;
//} 