//#include <iostream>
//#include <vector>
//#include <string>
//#include <cstring>
//using namespace std;
//
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	int strStr(string s, string p) {
////		return s.find(p);
////	}
////};
//
//// KMP AC
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	int strStr(string s, string p) {
////		if (p.empty()) return 0;
////		vector<int>Next(p.size());
////		// Init
////		Next[0] = -1;
////		for (int i = 1, j = Next[0]; i < p.size(); i++) {
////			while (j >= 0 && p[j + 1] != p[i]) {
////				j = Next[j];
////			}
////			if (p[j + 1] == p[i]) j++;
////			Next[i] = j;
////		}
////
////		// Find
////		for (int i = 0, j = Next[0]; i < s.size(); i++) {
////			while (j >= 0 && p[j + 1] != s[i]) {
////				j = Next[j];
////			}
////			if (p[j + 1] == s[i]) j++;
////
////			if (j == p.size() - 1) {
////				return i - p.size() + 1;
////			}
////		}
////		return -1;
////	}
////};
//
//// BM
////// 0ms / PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	int strStr(string s, string p) {
////		if (p.empty()) return 0;
////		vector<int>jump(128, p.size());
////		for (int i = 0; i != p.size() - 1; i++) // !!! i != p.size() "- 1"
////			jump[p[i]] = p.size() - 1 - i;      // !!!
////
////		for (int i = p.size() - 1; i < s.size(); i+= jump[s[i]]) { // "<" 
////			int si, pi;
////			for (pi = p.size() - 1, si = i; pi >= 0 && s[si] == p[pi]; si--, pi--);
////			if (pi == -1) return si + 1;
////		}
////		return -1;
////	}
////};
//
//int main() {
//	class Solution az;
//	az.strStr("", "xyxyyxyxyxx");
//	
//	//string s = "";
//	//cout << s.find("233");
//	//cout << az.strStr("233", "");
//	//char s1[] = "1234", s2[] = "234";
//	//cout << int( strstr(s1, s2) - s1 );
//	system("pause");
//	return 0;
//} 