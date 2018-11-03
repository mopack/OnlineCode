//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	vector<vector<int>> largeGroupPositions(string s) {
//		vector<vector<int>> ans;
//		int L;
//		for (int i = 0; i + 2 < s.size(); i++)
//			if(s[i]==s[i+1] && s[i]==s[i+2]){
//				for (L = i, i += 2; i + 1 < s.size() && s[i + 1] == s[i]; i++);
//				ans.push_back({ L, i });
//		    }
//		return ans;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 