//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution { // AC (¶WÂ²¼g)
//public:
//	vector<int> getRow(int k) {
//		vector<int>c(k + 1, 1);
//		for (int r = 1; r <= k; r++) 
//			for (int i = r - 1; i >= 1; i--)
//				c[i] += c[i - 1];
//		return c;
//	}
//};
//
//class Solution { // AC
//public:
//	vector<int> getRow(int k) {
//		vector<int>c(k + 1); 
//		c[0] = 1;
//		for (int r = 1; r <= k; r++){
//			c[r] = 1;
//			for (int i = r - 1; i >= 1; i--) 
//				c[i] += c[i - 1];
//			//for (auto x : c)cout << x << ' '; cout << endl;
//		}
//		return c;
//	}
//};
//int main() {
//	class Solution az;
//	vector<int> x = az.getRow(3);
//
//	system("pause");
//	return 0;
//} 