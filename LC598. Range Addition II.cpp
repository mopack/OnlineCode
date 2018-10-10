//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int maxCount(int m, int n, vector<vector<int>>&op) {
//		if (op.size() == 0)return m*n;
//		m = op[0][0], n = op[0][1];
//		for (int i = 1; i < op.size(); i++) {
//			m = min(m, op[i][0]);
//			n = min(n, op[i][1]);
//		}
//		return m*n;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 