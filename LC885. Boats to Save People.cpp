//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////472ms
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int numRescueBoats(vector<int>&W, int Limit) {
//		sort(W.begin(), W.end());
//		int Ans = 0;
//		while (!W.empty()) {
//			Ans++;
//			int x = Limit - W.back();
//			W.pop_back();
//			
//			if (W.empty()) break;
//			if (W.back() <= x) W.pop_back();
//			else if(W.front() <= x) {
//				auto it = lower_bound(W.begin(), W.end(), x);
//				while (*it > x)it--;
//				W.erase(it);
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