//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <stack>
//#include <algorithm>
//
//using namespace std;
//class MyQueue {
//	stack<int> s;
//	bool tot; // queue's tail on stack's top
//	void flip() {
//		if (!s.empty()) tot = !tot; else return;
//		stack<int> u;
//		for (; !s.empty(); s.pop()) 
//			u.push(s.top());
//		s = u;
//	}
//public:
//	MyQueue() {
//		s = {};
//		tot = 1;
//	}
//	void push(int x) {
//		if (!tot) flip(); 
//		s.push(x);
//	}
//	int pop() {
//		if (tot) flip();
//		int x = s.top();
//		s.pop();
//		return x;
//	}
//	int peek() {
//		if (tot) flip();
//		int x = s.top();
//		return x;
//	}
//	bool empty() {
//		return s.empty();
//	}
//};
//int main() {
//	class MyQueue az;
//	system("pause");
//	return 0;
//} 