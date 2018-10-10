//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <set>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<pair<int, int>> getSkyline(vector<vector<int>>&A) {
//		vector <pair<int, int>>h; //(x, +-h)
//		for (auto &a : A) {
//			h.push_back({ a[0], -a[2] });
//			h.push_back({ a[1], a[2] });
//		}
//		sort(h.begin(), h.end());
//		
//		vector<pair<int, int>>Ans;
//		multiset<int>Set; //Height
//		Set.insert(0);
//		int Pre = 0, Cur = 0;
//
//		for (auto &p : h) {
//			//printf("%3d,%3d: ", p.first, p.second);
//			if (p.second < 0) Set.insert(-p.second);
//			else Set.erase(Set.find(p.second));
//			//for (auto &x : Set) {
//			//	cout << x << ' ';
//			//}
//			//cout << '\n';
//			Cur = *Set.rbegin();
//			
//			if (Cur != Pre) {
//				Ans.push_back({ p.first, Cur });
//				Pre = Cur;
//			}
//		}
//		return Ans;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	//vector<vector<int>> x = { { 2,9,10 },{ 3,7,15 },{ 5,12,12 },{ 15,20,10 },{ 19,24,8 } };
//	vector<vector<int>> x = { { 1,2,10 },{ 2,3,10 },{ 3,4,10 },{ 4,5,10 } };
//	class Solution az;
//	vector<pair<int, int>>  y = az.getSkyline(x);
//	for (auto &p : y) {
//		//printf("%3d,%3d\n", p.first, p.second);
//	}
//	system("pause");
//	return 0;
//} 