//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
////DP1, 0ms/PR100
//#define by1 (d[j] && s1[i - 1] == s3[i + j - 1])
//#define by2 (d[j - 1] && s2[j - 1] == s3[i + j - 1])
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool isInterleave(string s1, string s2, string s3) {
//		if (s3.size() != s1.size() + s2.size()) return 0;
//		vector<bool>d(s2.size() + 1);
//		for (int i = 0; i <= s1.size(); i++) {
//			for (int j = 0; j <= s2.size(); j++) {
//				if (i == 0 && j == 0)	d[j] = 1;
//				else if (i == 0)		d[j] = by2;
//				else if (j == 0)		d[j] = by1;
//				else					d[j] = by1 || by2;
//			}
//		}
//		return d[s2.size()];
//	}
//};
//
//int main() {
//	Solution az;
//	string s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac";
//	az.isInterleave(s1, s2, s3);
//	system("pause");
//	return 0;
//} 