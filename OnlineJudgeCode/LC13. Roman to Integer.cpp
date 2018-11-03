//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//// 20ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int x[128];
//	Solution() {
//		x['I'] = 1; x['V'] = 5; x['X'] = 10; x['L'] = 50; x['C'] = 100; x['D'] = 500; x['M'] = 1000;
//	}
//	int romanToInt(string &s) {
//		int Ans = 0; 
//		for (int i = 0; i < s.size(); i++) {
//			if (i + 1 < s.size()) {
//				switch (s[i]) {
//				case 'I':
//					if (s[i + 1] == 'V')      { Ans += 4;   i++; continue; }
//					else if (s[i + 1] == 'X') { Ans += 9;   i++; continue; }
//					break;
//				case 'X':
//					if (s[i + 1] == 'L')      { Ans += 40;  i++; continue; }
//					else if (s[i + 1] == 'C') { Ans += 90;  i++; continue; }
//					break;
//				case 'C':
//					if (s[i + 1] == 'D')      { Ans += 400; i++; continue; }
//					else if (s[i + 1] == 'M') { Ans += 900; i++; continue; }
//				}
//			}
//			Ans += x[s[i]];
//		}
//		return Ans;
//	}
//};
//
//
//int main() {
//	Solution az;
//	system("pause");
//	return 0;
//} 