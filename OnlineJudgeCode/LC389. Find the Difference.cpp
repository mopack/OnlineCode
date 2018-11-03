//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	char findTheDifference(string s, string t) {
//		int d[26] = {};
//		for (auto c : s) d[c - 97]--;
//		for (auto c : t) d[c - 97]++;
//		for (int i = 0; i < 26; i++) 
//			if (d[i])
//				return char(i + 97);
//	}
//};
////Sol: . Present: AC: 10Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	char findTheDifference(string s, string t) {
//		char x = 0;
//		for (auto c : s) x ^= c;
//		for (auto c : t) x ^= c;
//		return x;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//} 