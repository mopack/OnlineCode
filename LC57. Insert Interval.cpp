//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <set>
//using namespace std;
//struct Interval {
//	int start;
//	int end;
//	Interval() : start(0), end(0) {}
//	Interval(int s, int e) : start(s), end(e) {}
//};
//
//// 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//#define Overlap(x, y) (min(x.end, y.end) >= max(x.start, y.start))
//#define Merge(x, y) {x = Interval(min(x.start, y.start), max(x.end, y.end));}
//class Solution {
//public:
//	vector<Interval> insert(vector<Interval>&A, Interval New) {
//		if (A.empty()) return{ New }; 
//
//		// After this, it & new overlap 
//		auto it = upper_bound(A.begin(), A.end(), New, [](const Interval &a, const Interval &b) {return a.start < b.start; });
//		if (it == A.end() || !Overlap((*it), New)) { // (it) & new not overlap 
//			if (it == A.begin() || !Overlap((*(it - 1)), New)) { // (it-1) & new not overlap 
//				A.insert(it, New); // Insert & return
//				return A;
//			}else{
//				it--; // (it-1) & new overlap 
//			}
//		}
//		
//		//L~R overlap with new
//		auto L = it, R = it;
//		while (L != A.begin() && Overlap((*(L - 1)), New))  L--;
//		while (R+1 != A.end() && Overlap((*(R + 1)), New))  R++;
//		Merge(New, (*L)); Merge(New, (*R));
//
//		vector<Interval> Ans(A.begin(), L);
//		Ans.push_back(New);
//		Ans.insert(Ans.end(), R + 1, A.end());
//		return Ans;
//	}
//};
//
//int main() {
//	class Solution az;
//	vector<vector<int>> x = { { 1,2 },{ 3,5 },{ 6,7 },{ 8,10 },{ 12,16 } };
//	vector<Interval>A;
//	for (auto &p : x) {
//		A.push_back(Interval(p[0], p[1]));
//	}
//	A = az.insert(A, Interval(4, 8));
//
//	for (auto &a : A) {
//		printf("[%d, %d],", a.start, a.end);
//	}
//
//	system("pause");
//	return 0;
//} 
