//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int maxDistToClosest(vector<int>&s) {
//		int len = 1, i , L;
//		for (i = 0; i<s.size(); i++)
//			if (s[i] == 0) {
//				for (L = i; i + 1 < s.size() && s[i + 1] == 0; i++);
//				len = max(len, i - L + 1);
//			}
//		len = ((len & 1) ? (len + 1) : (len)) / 2;
//		
//		for (i = 0; i < s.size() && s[i] == 0; i++);
//		len = max(len, i - 0);
//
//		for (i = s.size() - 1; i >= 0 && s[i] == 0; i--);
//		len = max(len, int(s.size() - 1 - i));
//
//		return len;
//	}
//};
//int main() {
//	class Solution az;
//	vector<int> x = { 1,0,0,0,1,0,1 };
//	cout << az.maxDistToClosest(x);
//	system("pause");
//	return 0;
//} 