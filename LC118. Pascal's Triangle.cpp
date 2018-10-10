//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	vector<vector<int>> generate(int R) {
//		if (R == 0) return{};
//
//		vector<vector<int>> a = { {1} };
//		vector<int> b;
//
//		for (int i = 2; i <= R; i++) {
//			b = {1};
//			for (int j = 1; j + 1 < i; j++)
//				b.push_back(a[i - 2][j - 1] + a[i - 2][j]);
//			b.push_back(1);
//			a.push_back(b);
//		}
//		return a;
//	}
//}az;
//
//int main() {
//	vector<vector<int>> a = az.generate(5);
//
//	system("pause");
//	return 0;
//} 