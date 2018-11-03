//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <stack>
//using namespace std;
//
//// Sol1: AC NPR 20ms PR49%
//int pri(char c) {
//	switch (c) {
//		case -1:    return 0;
//		case '\0':	return 1;
//		case '+':
//		case '-':	return 2;
//		case '*':
//		case '/':	return 3;
//	}
//}
//class Solution { 
//public:
//#define c (a[i])
//	int calculate(string a) {
//		stack<int> s; vector<int> b; char line[12]; int N;
//		s.push(-1); a.push_back(0);
//		for (int i = 0; i < a.size();i++)
//			if (c == ' ') {}
//			else if (isdigit(c)) {
//				for (N = 0; i < a.size() && isdigit(c); line[N++] = c, i++); i--;
//				line[N] = 0; sscanf(line, "%d", &N); b.push_back(N);
//			}else{
//				while (pri(s.top()) >= pri(c)) b.push_back(-s.top()), s.pop(); 
//				s.push(c);
//			}
//
//		for (auto x : b)
//			if (x < 0) {
//				N = s.top(); s.pop();
//				switch (-x) {
//					case '+': s.top() += N; break;
//					case '-': s.top() -= N; break;
//					case '*': s.top() *= N; break;
//					case '/': s.top() /= N; break;
//				}
//			}else s.push(x);
//		return s.top();
//	}
//};
//
//int main() {
//	Solution az;
//	string s = "3+5 / 2 ";
//	cout<<az.calculate(s);
//	system("pause");
//	return 0;
//}