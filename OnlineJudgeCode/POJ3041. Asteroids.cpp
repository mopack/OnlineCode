////Memory	Time	Language	Code Length
////1480K		844MS	C++			1543B
//#include <iostream>
//#include <vector>
//using namespace std;
//class IndependentSet {
//public:
//	int N, r, c, StarN;
//	int Sharp, EndbySharp, UnMark;
//	static const int One = 1, Star = 2;
//	vector<vector<int>>d;
//	vector<int>MarkR, MarkC;
//	IndependentSet(int _N, int K) : N(_N) {
//		d = vector<vector<int>>(N + 1, vector<int>(N + 1));
//		while (K--) {
//			cin >> r >> c;
//			d[r][c] = One;
//		}
//		EndbySharp = N + 1; Sharp = -EndbySharp; UnMark = N + 2;
//
//		for (StarN = 0; NotMax(); StarN++);
//	}
//#define Scan(Find, ifFind, ifNotFind, i){\
//	bool find = 0; \
//	for(i = 1; i <= N; i++) \
//		if(Find){find = 1; ifFind } \
//	if(!find){ ifNotFind } \
//}
//	bool NotMax() {
//		MarkR = MarkC = vector<int>(N + 1, UnMark);
//		for (c = 1; c <= N; c++)
//			Scan(d[r][c] == Star, , MarkC[c] = Sharp;, r);
//		for (bool Reflesh = 1; Reflesh; ) {
//			Reflesh = 0;
//			for (c = 1; c <= N; c++)
//				if (MarkC[c] < 0) {
//					MarkC[c] *= -1;
//					Scan(d[r][c] == One && MarkR[r] == UnMark, (MarkR[r] = -c, Reflesh = 1);, , r);
//				}
//			for (r = 1; r <= N; r++)
//				if (MarkR[r] < 0) {
//					MarkR[r] *= -1;
//					Scan(d[r][c] == Star && MarkC[c] == UnMark, (MarkC[c] = -r, Reflesh = 1); , { Improve(); return 1; }, c);
//				}
//		}
//		return 0;
//	}
//	void Improve() {
//		for (bool isR = 1; 1; isR = !isR) {
//			if (isR) c = MarkR[r]; else r = MarkC[c];
//			if (r == EndbySharp) return;
//			d[r][c] = (d[r][c] == One) ? Star : One; // 1 => * , 0 & * => 1.
//		}
//	}
//};
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int N, K, r, c;
//	cin >> N >> K;
//	IndependentSet IS(N, K);
//	cout << IS.StarN;
//	return 0;
//}
////
////#include <iostream>
////#include <cstdlib>
////using namespace std;
//////			Memory	Time	Language	Code Length
////// Accepted	1472K	532MS   G++			1417B
////// Accepted	980K	563MS	C++			1417B
////// P.S. POJ G++/C++皆可，GCC不能用
////int N, K, r, c, StarN;
////int One = 1, Star = 2, Sharp = -505, EndbySharp = 505, UnMark = 506;
////int MarkR[501], MarkC[501], d[501][501];
////bool NotMax() {
////	for (int i = 1; i <= N; i++) MarkR[i] = MarkC[i] = UnMark;
////	for (c = 1; c <= N; c++) {
////		for (r = 1; r <= N && d[r][c] != Star; r++);
////		if (r>N) MarkC[c] = Sharp;
////	}
////	for (bool Reflashing = 1; Reflashing;) {
////		Reflashing = 0;
////		for (c = 1; c <= N; c++)
////			if (MarkC[c] < 0) {
////				MarkC[c] *= -1;
////				for (r = 1; r <= N; r++)
////					if (d[r][c] == One && MarkR[r] == UnMark) MarkR[r] = -c, Reflashing = 1;
////			}
////		for (r = 1; r <= N; r++)
////			if (MarkR[r] < 0) {
////				MarkR[r] *= -1;
////				bool noStar = 1;
////				for (c = 1; c <= N; c++)
////					if (d[r][c] == Star) {
////						noStar = 0;
////						if (MarkC[c] == UnMark) MarkC[c] = -r, Reflashing = 1;
////					}
////				if (noStar) goto Improve;
////			}
////	}
////	return 0;
////Improve:;
////	for (bool isR = 1; 1; isR = !isR) {
////		if (isR) c = MarkR[r]; else r = MarkC[c];
////		if (r == EndbySharp) break;
////		if (d[r][c] == One) d[r][c] = Star; else d[r][c] = One;
////	}
////	return 1;
////}
////int main() {
////	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
////	while (cin >> N >> K) {
////		for (r = 1; r <= N; r++)
////			for (c = 1; c <= N; c++)d[r][c] = 0;
////		for (int i = 1; i <= K; i++) {
////			cin >> r >> c;
////			d[r][c] = 1;
////		}
////		for (StarN = 0; NotMax(); StarN++);
////		cout << StarN << '\n';
////	}
////	return 0;
////} 
////
