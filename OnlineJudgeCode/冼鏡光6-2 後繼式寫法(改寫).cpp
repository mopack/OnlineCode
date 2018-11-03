//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <stack>
//using namespace std;
//
//enum priority { BOTTOM, EOL, LEFT_PAR, RIGHT_PAR, PLUS_MINUS, MUL_DIV, NOTFOUND };
//int pri(char c) {
//	switch (c) {
//		case -1:    return BOTTOM;
//		case '\0':	return EOL;
//		case '(':	return LEFT_PAR;
//		case ')':	return RIGHT_PAR;
//		case '+':
//		case '-':	return PLUS_MINUS;
//		case '*':
//		case '/':	return MUL_DIV;
//		default:	return NOTFOUND;
//	}
//}
//class Solution {
//public:
//	bool Trans2RPN(string &x) { // transform input into PRN, and return wheather the input is in a correct form
//		stack<int> s; string res;
//		s.push(-1); x.push_back(0); //stack & string's bottom
//		for (auto c : x)
//			if (c == ' ') {}
//			else if (isalpha(c)) res.push_back(c);
//			else if (pri(c) == NOTFOUND) return 0;
//			else if (c == '(') s.push('(');
//			else{
//				while (pri(s.top()) >= pri(c)) { res.push_back(s.top()); s.pop(); }
//				if (s.top() == '(' && c == ')') s.pop(); else s.push(c);
//			}
//		x = res;
//		return 1;
//	}
//};
//
//int main() {
//	Solution az;
//	string s;
//	while (cin >> s) {
//		if (az.Trans2RPN(s)) cout << s << endl;
//	}
//	system("pause");
//	return 0;
//}