//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////0857~0904 AC 68ms/PR87
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class MyCalendarThree {
////	map<int, int>TL; // TimeLine
////public:
////	int book(int st, int ed) {
////		TL[st]++;
////		TL[ed]--;
////		int Max = 0, Going = 0;
////		for (auto &x : TL) {
////			Going += x.second;
////			Max = max(Max, Going);
////		}
////		return Max;
////	}
////};
//// 27Lines/32ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class MyCalendarThree {
////	map<int, int>d;
////	int Ret;
////public:
////	MyCalendarThree() {
////		Ret = 1;
////	}
////	int Value(map<int, int>::iterator i, int Node) {
////		if (i !=d.end() && i->first == Node) return i->second;
////		if (i == d.begin()) return 0;
////		return (--i)->second;
////	}
////	int book(int st, int ed) {
////		auto i = d.lower_bound(st);
////		auto j = d.lower_bound(ed);
////		int vSt = Value(i, st) + 1, vEd = Value(j, ed) + 0;
////		for (auto k = i; k != j; k++) {
////			k->second++;
////			Ret = max(Ret, k->second);
////		}
////		d[st] = vSt;
////		d[ed] = vEd;
////		Ret = max(Ret, vSt);
////		return Ret;
////	}
////};
//
////
//
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//// ¤U¤È 08:04 2018/7/22 ~ ¤U¤È 08:57 2018/7/22 Trying WA
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////struct ListNODE{
////	int End;
////	ListNODE* Next;
////	ListNODE(int e) : End(e), Next(NULL) {}
////};
////class MyCalendarThree {
////public:
////	map<int, ListNODE*>d;
////	int Ret;
////	MyCalendarThree() {
////		Ret = 1;
////	}
////	int book(int st, int ed) {
////		cout << st << ' ' << ed << ": \n";
////		auto it = d.lower_bound(ed);
////		int Cross = 1;
////		ListNODE* t;
////
////		while (it != d.begin()) {
////			it--;
////			for (t = it->second; t != NULL; t = t->Next){
////				if (max(it->first, st) < min(t->End, ed)) {
////					Cross++;
////					cout << it->first << ' ' << t->End <<' '<<Cross<< '\n';
////					Ret = max(Ret, Cross);
////				}
////			}
////		}////
////		it = d.find(st);
////		if (it == d.ed()) d[st] = new ListNODE(ed);
////		else {
////			for (t = it->second; t->Next != NULL; t = t->Next);
////			t->Next = new ListNODE(ed);
////		}
////		cout << '\n';
////		for (auto &x : d) {
////			for (t = x.second; t != NULL; t = t->Next) {
////				cout << x.first << ',' << t->End << '\n';
////			}
////		}
////
////		return Ret;
////	}
////};
//
////class MyCalendarThree {
////public:
////	map<int, Event>d;
////	int Ret;
////	MyCalendarThree() {
////		d[-1] = Event(-1, 0);
////		d[INT_MAX] = Event(INT_MAX, 0);
////		Ret = 1;
////	}
////	int book(int st, int ed) {
////		map<int, Event>::iterator It, it;
////
////		it = d.begin(); it++;
////		d.begin()->second = Event(it->first, 0);
////		
////		It = d.upper_bound(st); It--;
////		cout << st << '-' << ed <<" :" << It->first << " - "<<It->second.E<< " : \n";
////
////		for (it = It; it != d.ed(); it++) {
////			int MS = max(it->first, st), ME = min(it->second.E, ed);
////			if (MS < ME) {
////				int S = it->first, E = it->second.E, N = it->second.N;
////				d[MS] = Event(ME, N + 1); Ret = max(Ret, N + 1);
////				if (S < st) {
////					it->second.E = st; // equal d[S] = Event(st, N);
////				}
////				if (E > ed) {
////					d[ed] = Event(E, N);
////				}
////				st = ME;
////			}
////			else break;
////		}
////		if (st != ed) {
////			it = d.find(st);
////			if (it == d.ed()) d[st] = Event(ed, 1);
////			else {
////				Ret = max(Ret, ++it->second.N);
////			}
////		}
////		
////		//for (auto X = d.begin(); X!= d.ed(); X++) {
////		//	auto x = *X;
////		//	if(x.first != -1 && x.first != INT_MAX)
////		//		cout << x.first << ' ' << x.second.E << ' ' << x.second.N << '\n';
////		//}
////		//cout << '\n';
////		return Ret;
////	}
////};
//
//int main() {
//	freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	MyCalendarThree C;
//	vector<vector<int>> x = { { 24,40 },{ 43,50 },{ 27,43 },{ 5,21 },{ 30,40 },{ 14,29 },{ 3,19 },{ 3,14 },{ 25,39 },{ 6,19 } };
//	// {{ 10,20 }, { 50,60 }, { 10,40 }, { 5,15 }, { 5,10 }, { 25,55 }};
//     // { { 97, 100 }, { 51,65 }, { 27,46 }, { 90,100 }, { 20,32 }, { 15,28 }, { 60,73 }, { 77,91 }, { 67,85 }, { 58,72 }, { 74,93 }, { 73,83 }, { 71,87 }, { 97,100 }, { 14,31 }, { 26,37 }, { 66,76 }, { 52,67 }, { 24,43 }, { 6,23 }, { 94,100 }, { 33,44 }, { 30,46 }, { 6,20 }, { 71,87 }, { 49,59 }, { 38,55 }, { 4,17 }, { 46,61 }, { 13,31 }, { 94,100 }, { 47,65 }, { 9,25 }, { 4,20 }, { 2,17 }, { 28,42 }, { 26,38 }, { 72,83 }, { 43,61 }, { 18,35 } };
//		//{ { 47,50 },{ 1,10 },{ 27,36 },{ 40,47 },{ 20,27 },{ 15,23 },{ 10,18 },{ 27,36 },{ 17,25 },{ 8,17 },{ 24,33 },{ 23,28 },{ 21,27 } };// { { 47, 50 }, { 1,10 }, { 27,36 }, { 40,47 }, { 20,27 }, { 15,23 }, { 10,18 }, { 27,36 }, { 17,25 }, { 8,17 }, { 24,33 }, { 23,28 }, { 21,27 }, { 47,50 }, { 14,21 }, { 26,32 }, { 16,21 }, { 2,7 }, { 24,33 }, { 6,13 }, { 44,50 }, { 33,39 }, { 30,36 }, { 6,15 }, { 21,27 }, { 49,50 }, { 38,45 }, { 4,12 }, { 46,50 }, { 13,21 } };//{ { 10,20 },{ 50,60 },{ 10,40 },{ 5,15 },{ 5,10 },{ 25,55 } };
//	vector<int> y;
//	for (auto &t : x) {
//		y.push_back(C.book(t[0], t[1]));
//	}
//	cout << "ANS = ";
//	for (auto &t : y) {
//		cout << t << ' ';
//	}
//	//system("pause");
//	return 0;
//} 