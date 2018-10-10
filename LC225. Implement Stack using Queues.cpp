//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//
//class MyStack {
//	// 不做內部print，真的沒辦法偵錯!!!!!!!!!!!!!!!
//	//void print() {
//	//	queue<int> t = q;
//	//	vector<int> x = {};
//	//	for (; !t.empty(); t.pop())x.push_back(t.front());
//	//	for (int i = x.size(); i >= 1; i--)cout << x[i - 1] << ' ';
//	//	cout <<"size = "<< q.size()<< " rev=" <<int(rev)<< endl;
//	//}
//
//	queue<int> q;
//	bool rev; // data is reversed in q
//	void f(queue<int>&u) {
//		int x = u.front(); u.pop();
//		if (u.size() >= 2) f(u);
//		u.push(x);
//	}
//	void flip() {
//		if (q.size() <= 1)return; else rev = !rev;
//		f(q);
//	}
//public:
//	MyStack() {
//		q = {};
//		rev = 0;
//	}
//	/** Push element x onto stack. */
//	void push(int x) {
//		if (rev) flip();
//		q.push(x);
//	}
//	int pop() {
//		if (!rev) flip();
//		int t = q.front();
//		q.pop();
//		return t;
//	}
//	int top() {
//		if (!rev) flip();
//		return q.front();
//	}
//	bool empty() {
//		return q.empty();
//	}
//};
//int main() {
//	MyStack obj;
//	obj.push(1);
//	obj.push(2);
//	cout << obj.pop() << endl;
//	cout << obj.top() << endl;
//	
//	//queue<int> q;
//	//for (int i = 1; i <= 5; i++)q.push(i);
//
//	//cout << q.front() << ' ' << q.back() << endl;
//	//q.pop();
//	//cout << q.front() << ' ' << q.back() << endl;
//	
//	system("pause");
//	return 0;
//} 