//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//	vector<int> s;
//
//	int pop() {
//		int temp = s[s.size() - 1];
//		s.pop_back();
//		return temp;
//	}
//	int evalRPN(vector<string>& tokens) {
//		int ans = 0, a, b;
//		s.clear();
//		for (int i = 0; i < tokens.size(); i++) {
//			//+, -, *, /
//			if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") { 
//				// if stack.size() <= 1 => error, skip check
//				b = pop(); a = pop();
//				switch (tokens[i][0]) {
//					case '+': a += b; break;
//					case '-': a -= b; break;
//					case '*': a *= b; break;
//					case '/': a /= b; break; // divide by 0, skip check
//				}
//				s.push_back(a);
//			}else{
//				s.push_back(atoi(tokens[i].c_str()));
//			}
//		}
//		// if s.size()>1, then error, skip check
//		return s[0];
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//}