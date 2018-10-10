//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//enum IO{OUT=0, IN=1};
//struct Event {
//	int t;
//	IO io;
//	Event(){}
//	Event(int t0, IO io0) { t = t0; io = io0; }
//	
//	bool operator<(Event x)const {
//		if (t == x.t) {
//			return io < x.io;
//		}
//		return t < x.t;
//	}
//};
//vector<Event> e;
//
//int main() {
//	// input data
//	int n, a, b;
//	cin >> n;
//	e.clear();
//	for(int i=1; i<=n;i++){ 
//		cin >> a >> b;
//		e.push_back(Event(a, IN));
//		e.push_back(Event(b, OUT));
//	}
//	
//	sort(e.begin(), e.end());
//
//	// find max
//	int mav = 0, mat = -1;
//	int Count = 0;
//	for (int i = 0; i < e.size(); i++) {
//		if (e[i].io == OUT) Count--;
//		else {
//			Count++;
//			if (Count > mav) {
//				mav = Count; mat = e[i].t;
//			}
//		}
//	}
//	printf("max is at t=%d, num=%d\n", mat, mav);
//
//	system("pause");
//	return 0;
//}
////input data:
////5
////1 4
////2 4
////4 7
////5 6
////3 8