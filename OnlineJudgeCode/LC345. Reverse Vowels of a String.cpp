//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	vector<int> v;
//	inline bool isv(char c) {
//		return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
//	}
//	string reverseVowels(string S) {
//		for (int i = 0; i < S.size(); i++)
//			if (isv(S[i])) v.push_back(i);
//		
//		if (v.size() == 0)return S;
//
//		for (int s = 0, e = v.size() - 1; s < e; s++, e--) 
//			swap(S[v[s]], S[v[e]]);
//		return S;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 