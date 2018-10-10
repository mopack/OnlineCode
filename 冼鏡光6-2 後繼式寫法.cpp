//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//vector<char> stack;
//
//enum priority { BOTTOM, EOL, LEFT_PAR, RIGHT_PAR, PLUS_MINUS, MUL_DIV, NOTFOUND };
//int pri(int a) {
//	switch (a) {
//		case -1:   return BOTTOM;
//		case '+':
//		case '-':	return PLUS_MINUS;
//		case '*':
//		case '/':	return MUL_DIV;
//		case '(':	return LEFT_PAR;
//		case ')':	return RIGHT_PAR;
//		case '\0':	return EOL;
//		default:	return NOTFOUND;
//	}
//}
//
//inline char stack_top() {
//	return stack[stack.size() - 1];
//}
//int pop() {
//	if (stack.size() == 1) {
//		cout << "error stack underflow\n";
//		return -1;
//	}
//	else {
//		int temp = stack[stack.size() - 1];
//		stack.pop_back();
//		return temp;
//	}
//}
//int main() {
//	string s;
//	char t;
//	int u;
//
//	while (cin >> s) {
//		// init
//		stack.clear();
//		stack.push_back(-1); // BOTTOM
//
//		for (int p=0; p <= s.size(); p++){
//			if( s[p]==' '){
//			}else if (isalpha(s[p])) {
//				cout << s[p] << ' ';
//			}else if (pri(s[p]) == NOTFOUND) {
//				cout << "ERROR INPUT:"<<s[p]<<"\n"; goto Ending;
//			}else if (s[p] == '('){
//				stack.push_back(s[p]);
//			}
//			else {
//				while (pri(t = stack_top()) >= pri(s[p])){
//					u = pop(); if (u == -1) goto Ending;
//					cout << char(u) << ' ';
//				}
//
//				if (t == '(' && s[p] == ')'){
//					u = pop(); if (u == -1) goto Ending;
//				}else {
//					stack.push_back(s[p]);
//				}
//			}
//		}
//		cout << endl;
//	Ending:;
//	}
//	system("pause");
//	return 0;
//}