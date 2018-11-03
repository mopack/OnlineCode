//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//#include <functional>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//// 28ms/PR45
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////class Solution {
////public:
////	int nthSuperUglyNumber(int N, vector<int>& P) {
////		vector<int>d(N, 1), id(P.size(), 0);
////		for (int i = 1; i < N; i++) {
////			int mv = INT_MAX;
////			for (int j = 0; j < P.size(); j++)
////				mv = min(mv, d[id[j]] * P[j]);
////			for (int j = 0; j < P.size(); j++)
////				if (mv == d[id[j]] * P[j]) id[j]++;
////
////			d[i] = mv;
////		}
////		return d.back();
////	}
////};
//// 28ms/PR45
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	int nthSuperUglyNumber(int N, vector<int>& P) {
////		vector<int>d(N, 1), id(P.size(), 0);
////		for (int i = 1; i < N; i++) {
////			int mv = INT_MAX; vector<int>mi = {};
////			for (int j = 0; j < P.size(); j++) {
////				int x = d[id[j]] * P[j];
////				if (x < mv)  mv = x, mi = { j }; 
////				else if (x == mv)  mi.push_back(j); 
////			}
////			for (auto x : mi) id[x]++;
////			d[i] = mv;
////		}
////		return d.back();
////	}
////};
//
//// Find-Min/Max Remove-Min/Max Add(AnyThing)
//// 8ms
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int nthSuperUglyNumber(int N, vector<int>&P) {
//		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q; //min heap
//		vector<int>d(N), LF(N), id(P.size());//last Factor
//		d[0] = 1;
//		for (int i = 0; i < P.size(); i++) q.emplace(P[i], i);
//		for (int i = 1; i < N; i++) {
//			tie(d[i], LF[i]) = q.top();
//			q.pop();
//			int j = LF[i];
//			do id[j]++;
//			while (LF[id[j]] > j);
//			q.emplace(P[j] * d[id[j]], j);
//		}
//		return d.back();
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	int N = 12; vector<int>x = { 2,7,13,19 };
//	cout<<"\nAns="<<az.nthSuperUglyNumber(N, x);
//
//	system("pause");
//	return 0;
//} 