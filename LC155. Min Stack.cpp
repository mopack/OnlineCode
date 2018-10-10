//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <stack>
//using namespace std;
//class MinStack {
//	stack<int> s, mi;
//public:
//	MinStack() {
//	}
//	void push(int x) {
//		s.push(x);
//		mi.push( mi.empty() ? x : min(mi.top(), x) );
//	}
//	void pop() {
//		s.pop(); mi.pop();
//	}
//	int top() {
//		return s.top();
//	}
//	int getMin() {
//		return mi.top();
//	}
//};
//int main() {
//	MinStack a = MinStack();
//	a.push(-2);
//	a.push(0);
//	a.push(-3);
//	cout << a.getMin() << ' ' ;
//	a.pop();
//	cout << a.top() << ' ' << a.getMin() << endl;
//
//	system("pause");
//	return 0;
//} 