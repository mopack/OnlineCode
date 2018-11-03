//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int findContentChildren(vector<int>& g, vector<int>& s) {
//		sort(g.begin(), g.end()); sort(s.begin(), s.end());
//		int gI = 0;
//		for (int i = 0; i < s.size(); i++)
//			if (s[i] >= g[gI])
//				if (++gI >= g.size())break;
//		return gI;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 