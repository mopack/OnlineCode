//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: 19Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int I = 0;
//	bool go(string &s) {
//		if (I >= s.size()) return 0;
//		if (s[I] == '#') {
//			I += 2; return 1;
//		}
//
//		while (s[I] != ',')I++;
//		I++;
//		bool b = go(s); if (!b) return 0;
//		return go(s);
//	}
//	bool isValidSerialization(string preorder) {
//		return go(preorder) && I >= preorder.size();
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	string s = "1,#,#,1";
//	cout << az.isValidSerialization(s);
//	system("pause");
//	return 0;
//} 