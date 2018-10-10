//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	bool canConstruct(string ransomNote, string magazine) {
//		int d[26] = {};
//		for (auto c : magazine) d[c - 97]++;
//		for (auto c : ransomNote)
//			if (d[c - 97]) d[c - 97]--;
//			else return 0;
//		return 1;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 