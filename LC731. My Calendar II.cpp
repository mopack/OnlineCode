//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol2: 30lines, Present: AC, 36ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL); return 0; }(); 
//class MyCalendar {
//public:
//	vector<pair<int, int>>books;
//	bool book(int st, int ed) {
//		for (pair<int, int>p : books)
//			if (max(p.first, st) < min(ed, p.second))
//				return 0;
//		books.push_back({ st,ed });
//		return 1;
//	}
//};
//class MyCalendarTwo{
//public:
//	vector<pair<int, int>>books;
//	pair<int, int> getOverlap(int S1, int E1, int S2, int E2) {
//		return{ max(S1, S2), min(E1, E2) };
//	}
//	bool book(int st, int ed) {
//		MyCalendar overlaps;
//		for (pair<int, int>p : books)
//			if (max(p.first, st) < min(ed, p.second)) {
//				pair<int, int> overlapped = getOverlap(p.first, p.second, st, ed);
//				if (!overlaps.book(overlapped.first, overlapped.second))
//					return 0;
//			}
//		books.push_back({ st, ed });
//		return 1;
//	}
//};
//
//
////Sol1: Coding: 3hours/46lines, Present: AC: 64ms/PR56
////static int fast = []() {ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL); return 0; }(); 
////struct Event {
////	int S, E, Next, Back; bool Double;
////	Event(){}
////	Event(int s, int e, int b, int n, bool d) : S(s), E(e), Back(b), Next(n), Double(d){}
////};
////class MyCalendarTwo {
////public:
////	Event d[2009]; int N;
////	MyCalendarTwo() {
////		N = 1;
////		d[0] = Event(-1, -1, 0, 1, 0);
////		d[1] = Event(INT_MAX, INT_MAX, 0, 1, 0);
////	}
////	bool Conflict(int S1, int E1, int S2, int E2) {
////		if (S1 == S2)return 1;
////		if (S1 < S2) return E1 > S2;
////		return E2 > S1;
////	}
////	void Insert(int st, int ed, int x, int y, int dou) {
////		d[++N] = Event(st, ed, x, y, dou);
////		d[x].Next = d[y].Back = N;
////	}
////	bool book(int st, int ed) {
////		int y, i;
////		vector<int>f = {}; //  Must Double
////		for (y = 0, i = 0; i <=N; i++, y = d[y].Next) 
////			if (Conflict(d[y].S, d[y].E, st, ed)) {
////				if (d[y].Double) return 0;
////				f.push_back(y);
////			}
////		for(auto Y : f){
////			d[Y].Double = 1;
////			if (d[Y].S < st) {
////				Insert(d[Y].S, st, d[Y].Back, Y, 0);
////				d[Y].S = st;
////			}
////			if (d[Y].E > ed) {
////				Insert(ed, d[Y].E, Y, d[Y].Next, 0);
////				d[Y].E = ed;
////			}
////		}
////		Insert(st, ed, d[y].Back, y, 0);
////		return 1;
////	}
////};
//int main() {
//	class MyCalendarTwo a = MyCalendarTwo();
//	vector<vector<int>>test = { { 47,50 },{ 1,10 },{ 27,36 },{ 40,47 },{ 20,27 },{ 15,23 },{ 10,18 },{ 27,36 },{ 17,25 },{ 8,17 },{ 24,33 },{ 23,28 },{ 21,27 },{ 47,50 },{ 14,21 },{ 26,32 },{ 16,21 },{ 2,7 },{ 24,33 },{ 6,13 },{ 44,50 },{ 33,39 },{ 30,36 },{ 6,15 },{ 21,27 },{ 49,50 },{ 38,45 },{ 4,12 },{ 46,50 },{ 13,21 } };
//	
//	cout << "ANS:\n";
//	for (auto &t : test) {
//		cout << a.book(t[0], t[1]) << ' ';
//	}
//	system("pause");
//	return 0;
//} 