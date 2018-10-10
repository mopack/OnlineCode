// V2
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class IndependentSet {
//public:
//	int N, M, StarN, r, c;
//	int Sharp, EndbySharp, UnMark;// Mar Sign.    Marked(<0) = -1~-n, Marked_Sharp = -n-1. Checked(>0) = 1~n, Checked_Sharp = n+1. Unmark = n + 2; (n = max(M, N))
//	const int One = 1, Star = 2; // Matrix Sign. for Indepentdent: (One,Star) = (1,2), for Hungarian: (One,Star) = (0,-1)
//	vector<vector<int>>d;
//	vector<int>MarkR, MarkC;
//
//	IndependentSet(vector<vector<int>>&_d) {
//		swap(d, _d);
//		N = d.size() - 1, M = d[0].size() - 1;
//		EndbySharp = max(N, M) + 1;
//		Sharp = -EndbySharp; UnMark = EndbySharp + 1;
//		for (StarN = 0; NotMax(); StarN++);
//	}
//
//#define Scan(Find, ifFind, ifNotFind, i, Len){\
//	bool find = 0; \
//	for(i = 1; i <= Len; i++) \
//		if(Find){ find = 1; ifFind } \
//	if(!find){ ifNotFind } \
//}
//
//	bool NotMax() {
//		MarkR = vector<int>(N + 1, UnMark);
//		MarkC = vector<int>(M + 1, UnMark);
//		for (c = 1; c <= M; c++)
//			Scan(d[r][c] == Star, , MarkC[c] = Sharp;, r, N);
//		for (bool Reflesh = 1; Reflesh; ) {
//			Reflesh = 0;
//			for (c = 1; c <= M; c++)
//				if (MarkC[c] < 0) {
//					MarkC[c] *= -1;
//					Scan(d[r][c] == One && MarkR[r] == UnMark, (MarkR[r] = -c, Reflesh = 1);, , r, N);
//				}
//			for (r = 1; r <= N; r++)
//				if (MarkR[r] < 0) {
//					MarkR[r] *= -1;
//					Scan(d[r][c] == Star && MarkC[c] == UnMark, (MarkC[c] = -r, Reflesh = 1);, { Improve(); return 1; }, c, M);
//				}
//		}
//		return 0;
//	}
//	void Improve() {
//		for (bool isR = 1; 1; isR = !isR) {
//			if (isR) c = MarkR[r]; else r = MarkC[c];
//			if (r == EndbySharp) return;
//			d[r][c] = (d[r][c] == One) ? Star : One;
//		}
//	}
//};
//
//// XXL, XL, L, M, S, XS
//int StoSize(string &s) {
//	if (s.size() == 3) return 0;
//	if (s.size() == 2) return (s[1] == 'L') ? 1 : 2;
//	if (s[0] == 'L') return 3;
//	return (s[0] == 'M') ? 4 : 5;
//}
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int TaskN, N, M, n; string s;
//	cin >> TaskN;
//	while (TaskN--) {
//		cin >> N >> M; n = N / 6;
//		vector<vector<int>>d(N + 1, vector<int>(M + 1, 0));
//		for (int m = 1; m <= M; m++) {
//			for (int twice = 1; twice <= 2; twice++) {
//				cin >> s;
//				int x = StoSize(s);
//				for (int k = 1; k <= n; k++)
//					d[x*n + k][m] = 1;
//			}
//		}
//		IndependentSet IS(d);
//		cout << ((IS.StarN == M) ? "YES\n" : "NO\n");
//	}
//	return 0;
//}


// V1
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//class IndependentSet {
//public:
//	int N, M, r, c, StarN;        
//	int Sharp, EndbySharp, UnMark;// Mar Sign.    Marked(<0) = -1~-n, Marked_Sharp = -n-1. Checked(>0) = 1~n, Checked_Sharp = n+1. Unmark = n + 2; (n = max(M, N))
//	int One, Star;                // Matrix Sign. for IndependentSet: (One,Star) = (1,2), for Hungarian: (One,Star) = (0,-1)
//	vector<vector<int>>d;
//	IndependentSet(int n, int m, vector<vector<int>>&D, int one = 1, int star = 2) : N(n), M(m), d(D), One(one), Star(star){
//		Sharp = -(max(M, N) + 1); EndbySharp = -Sharp; UnMark = EndbySharp + 1;
//		for (StarN = 0; NotMax(); StarN++);
//	}
//	bool NotMax() {
//		vector<int>MarkR(N + 1, UnMark); vector<int>MarkC(M + 1, UnMark);
//		for (c = 1; c <= M; c++) {
//			for (r = 1; r <= N && d[r][c] != Star; r++);
//			if (r>N) MarkC[c] = Sharp; // NoStar Mark
//		}
//		for (bool Reflash = 1; Reflash;) {
//			Reflash = 0;
//			for (c = 1; c <= M; c++)
//				if (MarkC[c] < 0) {
//					MarkC[c] *= -1;
//					for (r = 1; r <= N; r++)
//						if (d[r][c] == One && MarkR[r] == UnMark) 
//							MarkR[r] = -c, Reflash = 1;
//				}
//			for (r = 1; r <= N; r++)
//				if (MarkR[r] < 0) {
//					MarkR[r] *= -1;
//					bool noStar = 1;
//					for (c = 1; c <= M; c++)
//						if (d[r][c] == Star) {
//							noStar = 0;
//							if (MarkC[c] == UnMark) 
//								MarkC[c] = -r, Reflash = 1;
//						}
//					if (noStar) goto Improve;
//				}
//		}
//		return 0;
//	Improve:;
//		for (bool isR = 1; 1; isR = !isR) {
//			if (isR) c = MarkR[r]; else r = MarkC[c];
//			if (r == EndbySharp) break;
//			if (d[r][c] == One) d[r][c] = Star; else d[r][c] = One;
//		}
//		return 1;
//	}
//};
//int StoX(string &s) {
//	if (s.size() == 3)return 0;
//	if (s.size() == 2)return (s[1] == 'L') ? 1 : 5;
//	if (s[0] == 'L') return 2;
//	if (s[0] == 'M') return 3;
//	return 4; //'S'
//}
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int TaskN, N, M, n;
//	cin >> TaskN;
//	while (TaskN--) {
//		cin >> N >> M; n = N / 6;
//		vector<vector<int>>d(N + 1, vector<int>(M + 1, 0));
//		for (int j = 1; j <= M; j++)
//			for (int twice = 0; twice <= 1; twice++) {
//				string s; cin >> s;
//				int x = StoX(s);
//				for (int k = 1; k <= n; k++)
//					d[x*n + k][j] = 1;
//			}
//
//		IndependentSet IndependentSet(N, M, d);
//		cout << ((IndependentSet.StarN >= M) ? "YES\n" : "NO\n");
//	}
//	return 0;
//} 

