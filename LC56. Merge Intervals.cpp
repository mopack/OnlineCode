//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//struct Interval {
//	int start;
//	int end;
//	Interval() : start(0), end(0) {}
//	Interval(int s, int e) : start(s), end(e) {}
//};
//
//// 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	#define Overlap(x, y) (min(x.end, y.end) >= max(x.start, y.start))
//	#define Merge(x, y){ \
//		x = Interval(min(x.start, y.start), max(x.end, y.end)); \
//		y = A.back(); \
//		A.pop_back(); \
//	}
//	vector<Interval> merge(vector<Interval>&A) {
//		for (int i = 0; i < A.size(); i++) {
//			for (int j = i + 1; j < A.size(); j++) {
//				if (Overlap(A[i], A[j])) {
//					Merge(A[i], A[j]);
//					j = i;
//				}
//			}
//		}
//		return A;
//	}
//};
//
////Others 4ms
////class Solution {
////public:
////
////	static int compare(Interval a, Interval b)
////	{
////
////		return a.start < b.start;
////
////	}
////
////
////
////	vector<Interval> merge(vector<Interval>& intervals)
////	{
////
////		vector<Interval> result;
////
////		sort(intervals.begin(), intervals.end(), compare);
////
////		for (Interval it : intervals)
////		{
////
////			if (result.empty() || (result.back()).end < it.start)
////			{
////
////				result.push_back(it);
////
////			}
////
////			else
////			{
////
////				(result.back()).end = max((result.back()).end, it.end);
////
////			}
////
////		}
////
////		return result;
////
////	}
////};
//int main() {
//	class Solution az;
//	vector<vector<int>> x = { { 2,3 },{ 4,5 },{ 6,7 },{ 8,9 },{ 1,10 } };
//	vector<Interval> y;
//	for (auto &p : x) {
//		y.push_back(Interval(p[0], p[1]));
//	}
//	az.merge(y);
//
//	system("pause");
//	return 0;
//} 
