//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <unordered_map>
//
//using namespace std;
//
//string mo[] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
//class Solution {
//public:
//	unordered_map<string, int> map;
//	int uniqueMorseRepresentations(vector<string>& words) {
//		for (int i = 0; i < words.size(); i++) {
//			string s = "";
//			for (int j = 0; j < words[i].size(); j++) {
//				s += mo[int(words[i][j] - 97)];
//			}
//			map[s]++;
//		}
//		return map.size();
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 