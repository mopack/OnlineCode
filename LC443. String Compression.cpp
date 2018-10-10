//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int compress(vector<char>&x) {
//		int I, i, L, len;
//		char line[5];
//
//		for (I = 0, i = 0; i  < x.size(); i++, I++) {
//			x[I] = x[i];
//			if (i + 1 < x.size() && x[i] == x[i + 1]) {
//				for (L = i, I++, i++; i + 1 < x.size() && x[i] == x[i + 1]; i++);
//
//				len = sprintf(line, "%d", i - L + 1);
//				for (int j = 0; j < len; j++) x[I + j] = line[j];
//				I += len - 1;
//			}
//		}
//		return I;
//	}
//};
//int main() {
//	class Solution az;
//	vector<char> x = { 'a','a','a','b','b','a','a' };
//	int len = az.compress(x);
//	for (int i = 0; i < len; i++)cout << x[i];
//	system("pause");
//	return 0;
//} 