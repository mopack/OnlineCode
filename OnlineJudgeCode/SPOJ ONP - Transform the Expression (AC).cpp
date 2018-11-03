//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//vector<int> stack;
//
//enum Priority{BUTTOM, EOL, LEFTP, RIGHTP, PLUS, MINUS, MUL, DIVI, POWER}; // +, -, *, /, ^
//int pri(int a) {
//	switch (a) {
//		case -1: return BUTTOM;
//		case '\0': return EOL;
//		case '(': return LEFTP;
//		case ')': return RIGHTP;
//		case '+': return PLUS;
//		case '-': return MINUS;
//		case '*': return MUL;
//		case '/': return DIVI;
//		case '^': return POWER;
//	}
//}
//inline int stack_top() {
//	return stack[stack.size() - 1];
//}
//int pop() {
//	int temp = stack[stack.size() - 1];
//	stack.pop_back();
//	return temp;
//}
//int main() {
//	int TaskNum;
//	string s,out;
//	int t, u;
//
//	cin >> TaskNum;
//	while (TaskNum--) {
//		// init
//		cin >> s;
//		out = "";
//		stack.clear(); stack.push_back(-1);
//
//		for (int p = 0; p <= s.size(); p++) {
//			if (isalpha(s[p])) {
//				out += s[p];
//			}else if(s[p]=='('){
//				stack.push_back(s[p]);
//			}else{
//				while (pri(t = stack_top()) >= pri(s[p])) {
//					out += char(pop());
//				}
//
//				if (t == '(' && s[p] == ')') {
//					pop();
//				}else{
//					stack.push_back(s[p]);
//				}
//			}
//		}
//		cout << out << endl;
//	}
//
//	//system("pause");
//	return 0;
//}