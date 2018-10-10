//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//	int numJewelsInStones(string J, string S) {
//		bool is[128];
//		for (int i = 0; i <= 127; i++)is[i] = 0;
//
//		for (int i = 0; i < J.size(); i++) is[J[i]] = 1;
//		
//		int count = 0;
//		for (int i = 0; i < S.size(); i++) {
//			if (is[S[i]])count++;
//		}
//
//		return count;
//	}
//}ans771;
//
//int main771() {
//	string s1 = "aA", s2  = "aAAbbbb";
//	cout << ans771.numJewelsInStones(s1, s2) << endl;
//	system("pause");
//	return 0;
//}