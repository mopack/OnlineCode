//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	bool detectCapitalUse(string w) {
//		if (w.size() <= 1) return 1;
//		if (w[0] >= 97 || w[1] >= 97) {
//			for (int i = 1; i < w.size(); i++) if (w[i] < 97)return 0;
//			return 1;
//		}else{
//			for (int i = 1; i < w.size(); i++) if (w[i] >= 97)return 0;
//			return 1;
//		}
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 