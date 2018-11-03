//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	bool isIsomorphic(string s, string t) {
//		char st[128] = {}, ts[128] = {};
//		for (int i = 0; i < s.size(); i++)
//			if (st[s[i]] == 0 && ts[t[i]] == 0) st[s[i]] = t[i], ts[t[i]] = s[i];
//			else if (st[s[i]] != t[i]) return 0;
//		return 1;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 