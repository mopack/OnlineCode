//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	string reorganizeString(string s) {
//		if (s.size() <= 1) return s;
//		int F[26] = {}; // F[i] = 26*Freqofi + i
//		for (auto c : s) F[c - 97]++;
//		for (int i = 0; i < 26; i++)
//			F[i] = F[i] * 26 + i;
//		sort(F, F + 26);
//
//		string Ans(s.size(), 0);
//		int id = 1;
//		for (int i = 0; i < 26; i++) {
//			char c = F[i] % 26 + 97; 
//			int f = F[i] / 26;
//			if (f > (s.size() + 1)/2) return "";
//			for (int j = 0; j < f; j++) {
//				Ans[id] = c;
//				id += 2; if (id >= s.size()) id = 0;
//			}
//		}
//		return Ans;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 