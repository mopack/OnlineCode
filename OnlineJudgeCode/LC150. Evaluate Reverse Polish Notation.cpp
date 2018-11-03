//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <stack>
//using namespace std;
//
////Sol: . Present: AC: 28Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	stack<int> s;
//	int pop() {
//		int temp = s.top(); 
//		s.pop();
//		return temp;
//	}
//	int evalRPN(vector<string>&tokens) {
//		for(auto &x : tokens){
//			if (x == "+" || x == "-" || x == "*" || x == "/") { 
//				// if stack.size() <= 1 => error, skip check
//				int b = pop(), a = pop();
//				switch (x[0]) {
//					case '+': a += b; break;
//					case '-': a -= b; break;
//					case '*': a *= b; break;
//					case '/': a /= b; break; // divide by 0, skip check
//				}
//				s.push(a);
//			}else
//				s.push( stoi(x) );
//		}
//		// if s.size()>1, then error, skip check
//		return s.top();
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//}