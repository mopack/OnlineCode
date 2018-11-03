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
//		int t;
//		vector<int> state;
//
//		for (int i = 0; i < s.size(); i++) {
//			switch (s[i]) {
//			case '{':
//				state.push_back(0);
//				break;
//
//			case '[':
//				state.push_back(1);
//				break;
//				
//			case '(':
//				state.push_back(2);
//				break;
//
//			case '}':
//				if (state.size() > 0)
//					t = state[state.size() - 1];
//				else
//					return false;
//				state.pop_back();
//
//				if (t==0) 
//					break;
//				else
//					return false;
//
//			case ']':
//				if (state.size() > 0)
//					t = state[state.size() - 1];
//				else
//					return false;
//				state.pop_back();
//
//				if (t == 1)
//					break;
//				else
//					return false;
//
//			case ')':
//				if (state.size() > 0)
//					t = state[state.size() - 1];
//				else
//					return false;
//				state.pop_back();
//
//				if (t == 2)
//					break;
//				else
//					return false;
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
