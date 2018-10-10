//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <stack>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: 25Lines/12ms/PR99.28
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	bool find132pattern(vector<int>&A) {
//		if (A.size() <= 2) return 0;
//		int N = A.size();
//		vector<int>L(N, -1), Mi(N, 0);
//		Mi[0] = A[0];
//		for (int i = 1; i < N; i++) Mi[i] = min(Mi[i - 1], A[i]);
//
//		stack<int>s;
//		for (int i = N - 1; i >= 1; i--) {
//			while (s.size() && A[i] > A[s.top()]) {
//				L[s.top()] = i; s.pop();
//			}
//			s.push(i);
//		}
//
//		for(int i = N - 1; i >= 2; i--)
//			if (L[i] != -1 && Mi[L[i] - 1] < A[i]) {
//				return 1;
//			}
//		return 0;
//	}
//};
////Sol: . Present: AC: 22Lines/8ms/PR99.52 (fastest is 4ms, only one cycle)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool find132pattern(vector<int>&A) {
//		if (A.size() <= 2) return 0;
//		int N = A.size(), t;
//		vector<int>Mi(N, 0);
//		Mi[0] = A[0];
//		for (int i = 1; i < N; i++) Mi[i] = min(Mi[i - 1], A[i]);
//
//		stack<int>s;
//		for (int i = N - 1; i >= 1; i--) {
//			while (s.size() && A[i] > A[(t = s.top())]) {
//				//mi-i-t
//				if (Mi[i - 1] < A[t]) return 1;
//				s.pop();
//			}
//			s.push(i);
//		}
//		return 0;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 