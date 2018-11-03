//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//	bool isValid(string s) {
//		vector<char> state;
//
//		for (int i = 0; i < s.size(); i++) {
//			if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
//				state.push_back(s[i]);
//			}
//			else {
//				if (state.size() <= 0) return 0;
//				int t = state[state.size() - 1];
//				state.pop_back();
//
//				if ((t == '{' && s[i] != '}') || (t == '[' && s[i] != ']') || (t == '(' && s[i] != ')'))return 0;
//			}
//		}
//
//		return (state.size()==0);
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
