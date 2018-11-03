//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {//AC
//public:
//	string addBinary(string a, string b) {
//		if (a.size() > b.size()) b = string(a.size() - b.size(), '0') + b;
//		if (a.size() < b.size()) a = string(b.size() - a.size(), '0') + a;
//
//		bool c = 0;
//		for (int i = a.size() - 1; i >= 0; i--) {
//			a[i] += b[i] - 48 + c;
//			if (a[i] >= '2') {
//				a[i] -= 2;
//				c = 1;
//			}
//			else c = 0;
//		}
//		if (c) a = '1' + a;
//		return a;
//	}
//};
//int main() {
//	cout << string(10, '0');
//	class Solution az;
//	system("pause");
//	return 0;
//} 