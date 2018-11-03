//#include <iostream>
//#include <cstdlib>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//	bool isValid(string s) {
//		int p[3] = {}, state = -1;
//
//		for (int i = 0; i < s.size(); i++) {
//			switch (s[i]) {
//			case '{':
//				if (state <= 0) {
//					p[0]++;
//					state = 0;
//					break;
//				}
//				else
//					return false;
//
//			case '[':
//				if (state <= 1) {
//					p[1]++;
//					state = 1;
//					break;
//				}
//				else
//					return false;
//
//			case '(':
//				if (state <= 2) {
//					p[2]++;
//					state = 2;
//					break;
//				}
//				else
//					return false;
//
//			case '}':
//				if (state <= 0 && p[0]>0) {
//					p[0]--;
//					state = 0;
//					break;
//				}
//				else
//					return false;
//
//			case ']':
//				if (state <= 1 && p[1]>0) {
//					p[1]--;
//					state = (p[1]==0) ? 0 : 1;
//					break;
//				}
//				else
//					return false;
//
//			case ')':
//				if (state <= 2 && p[2]>0) {
//					p[2]--;
//					state = (p[2] == 0) ? 0 : 2;
//					break;
//				}
//				else
//					return false;
//			}
//		}
//
//		return (p[0] == 0 && p[1] == 0 && p[2] == 0);
//	}
//}ans;
//
//int main() {
//	freopen("in.txt", "rt", stdin);
//	freopen("out.txt", "wt", stdout);
//
//	string ss;
//	while (cin >> ss) {
//		if (ss == "0")break;
//		cout << ans.isValid(ss) << endl;
//	}
//	return 0;
//}
//
