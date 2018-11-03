//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <sstream>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//class Solution {
//public:
//	unordered_map<string, char> sp;
//	string ps[26] = {};
//
//	bool wordPattern(string p, string str) {
//		stringstream ss(str);
//		string s; 
//
//		for (int i = 0; i < p.size();i++) {
//			if (!(ss >> s))return 0;
//			if (ps[p[i]-97] == "" && sp[s] == 0) {
//				ps[p[i] - 97] = s;
//				sp[s] = p[i];
//			}
//			else if (ps[p[i] - 97] != s) return 0;
//		}
//		return ss.eof();
//	}
//};
//int main() {
//	class Solution az;
//	string a = "abba", b = "dog cat cat dog";
//	az.wordPattern(a, b);
//	system("pause");
//	return 0;
//} 