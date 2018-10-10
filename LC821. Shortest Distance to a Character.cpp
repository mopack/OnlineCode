//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//class Solution {
//public:
//	vector<int> shortestToChar(string S, char C) {
//		vector<int> d(S.size(), S.size());
//		queue<int> b; 
//		for (int i = 0; i < S.size(); i++)
//			if (S[i] == C) {
//				d[i] = 0; b.push(i);
//			}
//
//		int t;
//		while (!b.empty()) {
//			t = b.front(); b.pop();
//			if (t - 1 >= 0 && d[t - 1] > d[t] + 1) {
//				d[t - 1] = d[t] + 1; b.push(t - 1);
//			}
//			if (t + 1 < S.size() && d[t + 1] > d[t] + 1) {
//				d[t + 1] = d[t] + 1; b.push(t + 1);
//			}
//		}
//		return d;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 