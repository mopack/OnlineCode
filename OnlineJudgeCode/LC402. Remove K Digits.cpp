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
//	string removeKdigits(string Num, int K) {
//		string Ans;
//		int Count = 0, N = K;
//		for (auto c : Num) {
//			while (Ans.size() && N > 0 && c < Ans.back()) {
//				N--;
//				Ans.pop_back();
//			}
//			Ans.push_back(c);
//		}
//		while (Ans[Count] == '0') Count++;
//		Ans = Ans.substr(Count, Num.size() - K - Count);
//		return Ans.empty() ? "0" : Ans;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 