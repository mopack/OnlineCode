//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/28ms/PR100 O(NlogN)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	bool isNStraightHand(vector<int>&Hand, int Width) {
//		if (Hand.size() % Width != 0) return 0;
//		if (Width == 1) return 1;
//		map<int, int> Map;
//		for (auto &x : Hand) Map[x]++; 
//
//		while(!Map.empty()){
//			map<int, int>::iterator it = Map.begin(), it0;
//			int n = it->first/*first dummy*/, Times = Width;
//			while(Times--){
//				if (it->first != n) return 0;
//
//				it0 = it;
//				it++; n++;
//				if (--(it0->second) == 0) Map.erase(it0);
//			}
//		}
//		return 1;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<int>x = { 1,2,3,6,2,3,4,7,8 }; int W = 3;
//	cout<<az.isNStraightHand(x, W);
//	system("pause");
//	return 0;
//} 