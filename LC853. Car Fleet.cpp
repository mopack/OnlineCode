//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: 27Lines/12ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//struct PS {
//	int pos, sp;
//	bool operator<(PS t)const {
//		return pos > t.pos;
//	}
//};
//class Solution {
//public:
//	int carFleet(int Target, vector<int>& position, vector<int>& speed) {
//		if (position.empty()) return 0;
//		vector<PS> ps(position.size());
//		for (int i = 0; i < position.size(); i++)
//			ps[i].pos = position[i], ps[i].sp = speed[i];
//		sort(ps.begin(), ps.end());
//
//		int Ans = 1;
//		double T = double(Target - ps[0].pos)/ ps[0].sp, T1;
//		for (int i = 1; i < ps.size(); i++) {
//			T1 = double(Target - ps[i].pos) / ps[i].sp;
//			if (T1 > T) {
//				Ans++; T = T1;
//			}
//		}
//		return Ans;
//	}
//};
//int main() {
//	//freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<int> p = { 10, 8, 0, 5, 3 }, s = { 2,4,1,1,3 };
//	cout<<az.carFleet(12, p, s);
//	system("pause");
//	return 0;
//} 