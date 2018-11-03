//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//struct Interval {
//	int start;
//	int end;
//	Interval() : start(0), end(0) {}
//	Interval(int s, int e) : start(s), end(e) {}
//};
//
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class SummaryRanges {
////	vector<Interval> vec;
////	struct com {
////		bool operator()(const Interval &a, const Interval &b) {
////			return a.start < b.start;
////		}
////	};
////public:
////	void addNum(int val) {
////		auto it = lower_bound(vec.begin(), vec.end(), Interval(val, val), com());
////		int start = val, end = val;
////		if (it != vec.begin() && (it - 1)->end + 1 >= val) it--;
////		while (it != vec.end() && val + 1 >= it->start && val - 1 <= it->end){
////			start = min(start, it->start);
////			end = max(end, it->end);
////			it = vec.erase(it);
////		}
////		vec.insert(it, Interval(start, end));
////	}
////	vector<Interval> getIntervals() {
////		return vec;
////	}
////};
//
//class SummaryRanges {
//	set<Interval> Set;
//	Interval mergeIntervals(const Interval& a, const Interval& b) {
//		return{ min(a.start, b.start), max(a.end, b.end) };
//	}
//public:
//	void addNum(int val) {
//		Interval interval = { val, val };
//		auto next = Set.lower_bound(interval);
//		auto prev = Set.end();
//		if (next != Set.begin()) {
//			prev = next; --prev;
//		}
//		if (next != Set.end() && next->start <= val + 1) {
//			interval = mergeIntervals(interval, *next);
//			Set.erase(next);
//		}
//		if (prev != Set.end() && prev->end >= val - 1) {
//			interval = mergeIntervals(interval, *prev);
//			Set.erase(prev);
//		}
//		Set.insert(interval);
//	}
//	vector<Interval> getIntervals() {
//		return vector<Interval>(Set.begin(), Set.end());
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	system("pause");
//	return 0;
//} 