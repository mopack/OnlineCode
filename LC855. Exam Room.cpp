//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <queue>
//#include <set>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/16ms/PR99.24
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class ExamRoom {
//public:
//	int N;
//	set<int>Seat;
//	ExamRoom(int n) {
//		N = n;
//	}
//	int seat() {
//		if (Seat.empty()) { Seat.insert(0); return 0; }
//
//		int pM = 0, maxLen = 0;
//		int p0 = 0, len = 0;
//		if (!Seat.count(0)) {
//			maxLen = *Seat.begin() - 0, pM = 0;
//		}
//		for (auto it = Seat.begin(); it != Seat.end(); it++) {
//			len = (*it - p0) / 2;
//			if (len > maxLen) {
//				maxLen = len, pM = (*it + p0) / 2;
//			}
//			p0 = *it;
//		}
//		if (!Seat.count(N - 1)) {
//			len = N - 1 - *Seat.rbegin();
//			if (len > maxLen) {
//				maxLen = len, pM = N - 1;
//			}
//		}
//
//		Seat.insert(pM); return pM;
//	}
//	void leave(int p) {
//		Seat.erase(Seat.find(p));
//	}
//};
//
//class CompareDist{
//public:
//	bool operator()(pair<int, int> n1, pair<int, int> n2) {
//		return n1.second<n2.second;
//	}
//};
//int main() {
//	//freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	priority_queue <pair<int,int>, vector<pair<int,int>>, CompareDist> q;
//	for (int i = 1; i <= 10; i++)q.push({ i,i });
//	while (!q.empty()) {
//		cout << q.top().second<<',';
//		q.pop();
//	}system("pause");
//	return 0;
//}