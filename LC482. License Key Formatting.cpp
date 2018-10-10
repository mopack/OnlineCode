//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	string licenseKeyFormatting(string S, int K) {
//		string s; int I = K;
//		for (int i = S.size() - 1; i >= 0; i--){
//			if (S[i] == '-')continue;
//			if (s.size() == I) {
//				s.push_back('-');
//				I += K + 1;
//			}
//			if (S[i] >= 97) s.push_back(S[i] - 32);
//			else s.push_back(S[i]);
//		}
//		reverse(s.begin(), s.end());
//		return s;
//	}
//};
//int main() {
//	class Solution az;
//	cout << az.licenseKeyFormatting("2-5g-3-J", 2);
//	system("pause");
//	return 0;
//} 