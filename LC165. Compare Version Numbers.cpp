//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <sstream>
//using namespace std;
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int Comp(string &s1, string &s2) {
//		if (s1.empty() && s2.empty()) return -3; // EqualFinally
//		int n1 = (s1.empty()) ? 0 : stoi(s1);
//		int n2 = (s2.empty()) ? 0 : stoi(s2);
//		if (n1 == n2) return 0;
//		return (n1 > n2) ? 1 : -1;
//	}
//	int compareVersion(string S1, string S2) {
//		stringstream ss1(S1), ss2(S2);
//		while (1) {
//			string s1 = "", s2 = "";
//			getline(ss1, s1, '.'); getline(ss2, s2, '.');
//			int Ret = Comp(s1, s2);
//			if (Ret == -3) return 0;
//			if (Ret) return Ret;
//		}
//	}
//};
//
//int main() {
//	class Solution az;
//	cout<<az.compareVersion("1.0", "1");
//	system("pause");
//	return 0;
//} 
