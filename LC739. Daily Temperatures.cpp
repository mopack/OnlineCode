//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <stack>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//
////Sol: . Present: AC: Lines/136ms/PR99.67
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int> dailyTemperatures(vector<int>&T) {
//		vector<int>Ans(T.size(), 0); stack<int> s;
//		for (int i = 0; i < T.size(); i++) {
//			while (s.size() && T[s.top()] < T[i]) {
//				int t = s.top(); s.pop();
//				Ans[t] = i - t;
//			}
//			s.push(i); 
//		}
//		return Ans;
//	}
//};
//
////Sol: . Present: AC: 19Lines/136ms/PR99.67
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	stack<int> s;
//	inline int POP() {
//		int temp = s.top(); s.pop(); return temp;
//	}
//	vector<int> dailyTemperatures(vector<int>&T) {
//		vector<int>Ans(T.size(), 0);
//		for (int i = 0; i < T.size(); i++) {
//			while (s.size() && T[s.top()] < T[i]) {
//				int t = POP();
//				Ans[t] = i - t;
//			}
//			s.push(i);
//		}
//		return Ans;
//	}
//};
//int main() {
//  //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 