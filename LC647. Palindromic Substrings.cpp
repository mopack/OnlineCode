//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <set>
//
//using namespace std;
//class Solution {
//public:
//	int countSubstrings(string s) {
//		if (s.size()==0)return 0;
//		bool d[1002][1002] = {};
//		int t = 0;
//
//		d[0][0] = 1; t++; //printf("%d %d\n", 0, 0);
//		for (int i = 1; i < s.size(); i++) { 
//			d[i][i] = 1; t++; //printf("%d %d\n", i, i);
//			if (s[i - 1] == s[i]) {
//				d[i - 1][i] = 1; t++; //printf("%d %d\n", i - 1, i);
//			}
//		}
//		for (int D = 2; D < s.size(); D++) {
//			for (int i = 0; i+D < s.size(); i++) {
//				if (s[i] == s[D + i] && d[i + 1][D + i - 1]) {
//					d[i][i + D] = 1; t++;  //printf("%d %d\n", i, i+D);
//				}
//			}
//		}
//		return t;
//	}
//}az;
//
//int main() {
//	string s = "";
//	cout<<az.countSubstrings(s);
//	system("pause");
//	return 0;
//} 