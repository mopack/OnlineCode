//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <stack>
//using namespace std;
//
////Sol2.2: Interation  AC 8ms PR99.52%
//class Solution {
//public:
//	int calculate(string S) {
//		stack<int>s;
//		int ans = 0, sign = 1, num = 0;
//		for(auto c : S)
//			if(c == ' '){}
//			else if (isdigit(c)) num = num * 10 + c - 48;
//			else {
//				ans += sign*num;
//				if (c == '(') {
//					s.push(ans); s.push(sign); ans = 0;
//				}else if(c == ')'){
//					ans *= s.top(); s.pop();
//					ans += s.top(); s.pop();
//				}
//				num = 0, sign = (c=='-')?-1:1;
//			}
//		return ans + sign*num;
//	}
//};
//
////Sol2.1: DFS ( Recursion ) AC 8ms PR99.52%
//class Solution {
//public:
//	int i = 0;
//	int DFS(string &s) {
//		int ans = 0, sign = 1, num = 0;
//		for (; i < s.size(); i++) 
//			if (s[i] == ' ') {}
//			else if (isdigit(s[i])) num = num * 10 + s[i] - 48;
//			else if (s[i] == '+' || s[i] == '-') ans += sign*num, num = 0, sign = (s[i] == '+') ? 1 : -1;
//			else if (s[i] == '(') i++, num = DFS(s);
//			else return ans + sign*num;
//		return ans + sign*num; //Lack of EOF, so write +sign*num
//	}
//	int calculate(string s) {
//		return DFS(s);
//	}
//};
//
//
////Sol1: RPN + Calculate RPN   AC 20ms PR35.05%
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution { 
//public:
//	int pri(int c) {
//		switch (c) {
//		case -1:    return 0;
//		case '\0':	return 1;
//		case '(':	return 2;
//		case ')':	return 3;
//		case '+':
//		case '-':	return 4;
//		}
//	}
//	stack<int> s;
//	int POP() {
//		int temp = s.top(); s.pop(); return temp;
//	}
//	int calculate(string a) { 
//		vector<int> b;
//		s.push(-1); a.push_back(0);
//#define c (a[i])
//		for (int i = 0; i < a.size();i++){
//			if (c == ' ') {}
//			else if (isdigit(c)) {
//				int n;
//				for (n = 0; i < a.size() && isdigit(c); n = 10 * n + (c - 48), i++); i--;
//				b.push_back(n);
//			}else if(c == '(') s.push('(');
//			else {
//				while (pri(s.top()) >= pri(c)) b.push_back(-s.top()), s.pop(); 
//				if (s.top() == '(' && c == ')') s.pop(); else s.push(c);
//			}
//		}
//
//		for (auto x : b){
//			if (-x == '+')     s.top() += POP();
//			else if(-x == '-') s.top() -= POP();
//			else s.push(x);
//		}
//		return s.top();
//	}
//};
//
//int main() {
//	Solution az;
//	string s = "1 - (5)";
//	cout<<endl<<az.calculate(s);
//	//s.push(1); s.push(2);
//	//s.top() += 10;
//	//cout << s.top();
//	system("pause");
//	return 0;
//}