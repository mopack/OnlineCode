//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <stack>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int> nextGreaterElements(vector<int>&A) {
//		int N = A.size();
//		vector<int>Ans(N, -1); stack<int> s;
//		for (int i = 0; i < 2 * N; i++) {
//			int x = A[i%N];
//			while (s.size() && A[s.top()] < x) {
//				Ans[s.top()] = x; s.pop();
//			}
//			s.push(i%N);
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