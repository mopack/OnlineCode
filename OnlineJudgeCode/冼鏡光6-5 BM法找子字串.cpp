//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
////class Solution {
////public:
////	int subStringFind(string t, string p) { // if p is t's subString, return the first found index, if not return -1
////		if (p.empty())return 0; // Special purpose
////
////		int jump[128], pn = p.size();
////		for (int i = 1; i < 128 ; i++)jump[i]    = pn; //預期不會有char==0，因為\0代表字串結束
////		for (int i = 0; i < pn - 1; i++)jump[p[i]] = pn - i - 1;
////
////		int pi, ti;
////		for (int i = pn - 1; i < t.size(); i += jump[t[i]]) {
////			for (pi = pn - 1, ti = i; pi >= 0 && t[ti] == p[pi]; pi--, ti--);
////			if (pi < 0) return ti + 1;
////		}
////		return -1;
////	}
////};
//class Solution {
//public:
//	int subStringFind(string t, string p, int St) { // Find from St
//		if (p.empty())return 0; // Special purpose
//
//		int jump[128], pn = p.size();
//		for (int i = 1; i < 128; i++)jump[i] = pn; //預期不會有char==0，因為\0代表字串結束
//		for (int i = 0; i < pn - 1; i++)jump[p[i]] = pn - i - 1;
//
//		int pi, ti;
//		for (int i = St + pn - 1; i < t.size(); i += jump[t[i]]) {
//			for (pi = pn - 1, ti = i; pi >= 0 && t[ti] == p[pi]; pi--, ti--);
//			if (pi < 0) return ti + 1;
//		}
//		return -1;
//	}
//};
//int main() {
//	class Solution az;
//	string t = "abab", p = "ab";
//	cout << az.subStringFind(t, p, 2) << endl;
//	system("pause");
//	return 0;
//} 