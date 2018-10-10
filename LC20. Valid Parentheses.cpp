//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//#include <stack>
//using namespace std;
//
////Sol: . Present: AC: 19Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool isValid(string s) {
//		stack<char> state;
//		for (auto c : s) {
//			if (c == '{' || c == '[' || c == '(')
//				state.push(c);
//			else {
//				if (state.empty()) return 0;
//				int t = state.top();
//				state.pop();
//
//				if ((t == '{' && c != '}') || (t == '[' && c != ']') || (t == '(' && c != ')')) return 0;
//			}
//		}
//		return state.empty();
//	}
//};
//
////Sol1: AC
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
//};
//
//int main() {
//	Solution az;
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
