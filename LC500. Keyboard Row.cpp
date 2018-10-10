//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int L[26] = { 2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3 };
//class Solution {
//public:
//	vector<string> findWords(vector<string>& words) {
//		vector<string> ans; string S;
//		int t, i;
//		for (auto &s : words) {
//			S = s;
//			for (auto &c : S) 
//				if (c < 97)c += 97 - 65;
//
//			t = L[S[0] - 97];
//			for (i = 1; i < S.size() && L[ S[i] - 97] == t; i++);
//			if (i == S.size()) ans.push_back(s);
//		}
//		return ans;
//	}
//}az;
//
//int main() {
//	//// pre run
//	//string s[3] = { "qwertyuiop", "asdfghjkl","zxcvbnm" };
//	//for (int i = 0; i <= 2; i++) {
//	//	for (auto c : s[i]) {
//	//		//cout << c - 97 << '&' << i <<' ';
//	//		L[c - 97] = i+1;
//	//	}
//	//}
//	//for (int i = 0; i < 26; i++)cout << L[i] << ',';
//
//	system("pause");
//	return 0;
//} 