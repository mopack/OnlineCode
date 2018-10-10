//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
////Sol3(V2) 11lines, 28ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL); return 0; }();
////class MyCalendar {
////public:
////	map<int, int> d;
////	bool book(int start, int end) {
////		if (d.empty()) { d[start] = end; return 1; }
////		auto it = d.upper_bound(start); // first it.S >= st
////		if ((it == d.end() || (*it).first >= end) && (it == d.begin() || (*(--it)).second <= start)) { d[start] = end; return 1; }
////		return 0;
////	}
////};
//
////Sol3:
//static int fast = []() {ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL); return 0; }();
//class MyCalendar {
//public:
//	map<int, int> d;
//	bool book(int start, int end) {
//		if (d.empty()) { d[start] = end; return 1; }
//
//		auto it = d.upper_bound(start); // first it.S >= st
//		if (it == d.end()) { // not found
//			if ((*(--it)).second <= start) { d[start] = end; return 1; }
//			else return 0;
//		}
//		if (it == d.begin()) {
//			if ((*it).first >= end) { d[start] = end; return 1; }
//			else return 0;
//		}
//
//		if (( (*it).first >= end) && ((*(--it)).second <= start)) { d[start] = end; return 1; }
//		else return 0;
//	}
//};
//
////Sol2:
////static int fast = []() {ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL); return 0; }();
////class MyCalendar {
////public:
////	vector<pair<int, int>>books;
////	bool book(int st, int ed) {
////		for (pair<int, int>p : books)
////			if (max(p.first, st) < min(ed, p.second))
////				return 0;
////		books.push_back({ st,ed });
////		return 1;
////	}
////};
//
//////Sol1: Coding: 85min/34lines, Present: AC: 40ms/PR99
////static int fast = []() {ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL); return 0; }();
////struct Event {
////	int Back, Next, S, E;
////	Event(){}
////	Event(int b, int n, int s, int e) :Back(b), Next(n), S(s), E(e) {}
////};
////class MyCalendar {
////public:
////	Event d[1009]; int N;
////	MyCalendar() {
////		N = 1;
////		d[0] = Event(0, 1, -1, -1);
////		d[1] = Event(0, 1, INT_MAX, INT_MAX);
////	}
////	bool Conflict(int S1, int E1, int S2, int E2) {
////		if (S1 == S2) return 1;
////		if (S1 < S2) return E1 > S2;
////		return E2 > S1;
////	}
////	bool book(int st, int ed) {
////		int x, y;
////		for (y = 0; 1; y = d[y].Next) {
////			if (d[y].E <= st) continue;
////			if (Conflict(d[y].S, d[y].E, st, ed)) return 0;
////			if (d[y].S >= ed) break;
////		}
////		x = d[y].Back;
////		d[++N] = Event(x, y, st, ed);
////		d[x].Next = d[y].Back = N;
////		return 1;
////	}
////};
//int main() {
//	MyCalendar obj = MyCalendar();
//	cout<<"\n#1:"<<obj.book(10, 20);
//	cout << "\n#1:" << obj.book(15, 25);
//	cout << "\n#1:" << obj.book(20, 30);
//	system("pause");
//	return 0;
//} 