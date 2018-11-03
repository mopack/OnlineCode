//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int firstUniqChar(string s) {
//		int d[26] = {}, ans = s.size() + 2;
//		for (int i = 0; i < s.size(); i++)
//			if (d[s[i] - 97]) d[s[i] - 97] = -1;
//			else d[s[i] - 97] = i + 1;
//		for (auto x : d)
//			if (x > 0)ans = min(ans, x);
//		return (ans == s.size() + 2) ? -1 : ans - 1;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 