//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <sstream>
//using namespace std;
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//
//void Id0toId1(vector<vector<int>> &d) {
//	if (d.size() == 0) return;
//	int N = d.size(), M = d[0].size();
//	vector<vector<int>> a(N + 1, vector<int>(M + 1, 0));
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++) a[i + 1][j + 1] = d[i][j];
//	d = a;
//}
//void Print(vector<vector<int>> &d) {
//	if (d.size() == 0)return;
//	int N = d.size() - 1, M = d[0].size() - 1;
//	for (int i = 1; i <= N; i++, cout << '\n')
//		for (int j = 1; j <= M; j++) printf("%2d ", d[i][j]);
//	cout << '\n';
//}
//
//class IndepentSet {
//public:
//	int N, M, r, c, StarN;        
//	// Mark Sign.   Marked(<0) = -1~-n, Marked_Sharp = -n-1. Checked(>0) = 1~n, Checked_Sharp = n+1. Unmark = n + 2; (n = max(M, N))
//	int Sharp, EndbySharp, UnMark;
//	// Matrix Sign. One is the Sign we think as an edge in Bipartite, Star can be any number which is out of Matrix's output range. 
//	//  for IndepentSet[1,0]: (One,Star) = (1,2), for Hungarian[0,NatureNumber]: (One,Star) = (0,-1)
//	int One, Star;                
//	vector<vector<int>>d;
//	vector<int>MarkR, MarkC;
//
//	IndepentSet(){}
//	IndepentSet(vector<vector<int>>&D){
//		DataReflesh(D);
//	}
//	void DataReflesh(vector<vector<int>>&D) {
//		d = D;
//		N = d.size() - 1; M = d[0].size() - 1;
//		Sharp = -(max(M, N) + 1); EndbySharp = -Sharp; UnMark = EndbySharp + 1;
//	}
//	int FindMaxIndepentSet(int one, int star){
//		One = one; Star = star;
//		for (StarN = 0; NotMax(); StarN++);
//		return StarN;
//
//	}
//	bool NotMax() {
//		MarkR = vector<int>(N + 1, UnMark); MarkC = vector<int>(M + 1, UnMark);
//		for (c = 1; c <= M; c++) {
//			for (r = 1; r <= N && d[r][c] != Star; r++);
//			if (r>N) MarkC[c] = Sharp;
//		}
//		for (bool Reflashing = 1; Reflashing;) {
//			Reflashing = 0;
//			for (c = 1; c <= M; c++)
//				if (MarkC[c] < 0) {
//					MarkC[c] *= -1;
//					for (r = 1; r <= N; r++)
//						if (d[r][c] == One && MarkR[r] == UnMark) MarkR[r] = -c, Reflashing = 1;
//				}
//			for (r = 1; r <= N; r++)
//				if (MarkR[r] < 0) {
//					MarkR[r] *= -1;
//					bool noStar = 1;
//					for (c = 1; c <= M; c++)
//						if (d[r][c] == Star) {
//							noStar = 0;
//							if (MarkC[c] == UnMark) MarkC[c] = -r, Reflashing = 1;
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
//	void Hungarian(bool isFindMax = 0) { // Find Max/Min Sum of Matching Set. Default as Find Min Sum of Matching Set. // Hungarian(Kuhn) Algorithm
//		vector<vector<int>>d0 = d;
//		// Init
//		if (isFindMax) // if asking Finding Max Sum of Mathching
//			for (r = 1; r <= N; r++)
//				for (c = 1; c <= M; c++)d[r][c] *= -1;
//		for (r = 1; r <= N; r++) { // Minus Min
//			int Min = INT_MAX;
//			for (c = 1; c <= M; c++) Min = min(Min, d[r][c]);
//			for (c = 1; c <= M; c++) d[r][c] -= Min;
//		}
//		for (c = 1; c <= M; c++) { // Minus Min
//			int Min = INT_MAX;
//			for (r = 1; r <= N; r++) Min = min(Min, d[r][c]);
//			for (r = 1; r <= N; r++) d[r][c] -= Min;
//		}
//		if (N != M) { // Extned to Square By 0
//			int X = max(N, M);
//			vector<vector<int>>d1(X + 1, vector<int>(X + 1, One));
//			for (r = 1; r <= N; r++)
//				for (c = 1; c <= M; c++)d1[r][c] = d[r][c];
//			d = d1;
//			N = M = X;
//		}
//		// Loop
//		while(1) {
//			if (FindMaxIndepentSet(0, -1) >= N)break;
//			for (r = 1; r <= N; r++) // Clear Star Sign
//				for (c = 1; c <= N; c++) if (d[r][c] == Star) d[r][c] = One;
//			int Min = INT_MAX; // Finding Min
//			for(r = 1; r <= N; r++)
//				for (c = 1; c <= N; c++)
//					if (MarkR[r] == UnMark && MarkC[c] != UnMark) Min = min(Min, d[r][c]);
//			for (r = 1; r <= N; r++) // Not in Cover Minus Min, In Covers' Union, Add Min.
//				for (c = 1; c <= N; c++)
//					if (MarkR[r] == UnMark && MarkC[c] != UnMark)      d[r][c] -= Min;
//					else if (MarkR[r] != UnMark && MarkC[c] == UnMark) d[r][c] += Min;
//		}
//		// Output
//		Print(d);
//		string res = ""; char line[12]; int sum = 0;
//		N = d0.size() - 1; M = d0[0].size() - 1;
//		for (c = 1; c <= M; c++) {
//			for (r = 1; r <= N; r++)
//				if (d[r][c] == Star) {
//					sum += d0[r][c];
//					sprintf(line, "%d", d0[r][c]);
//					if (c != 1) res += " + "; res += string(line);
//					goto Found;
//				}
//			if (c != 1) res += " + "; res += "X";
//		Found:;
//		}
//		sprintf(line, "%d", sum);
//		cout<< res + " = " + string(line) + '\n';
//	}
//};
//static int x = []() {ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL); return 0; }();
//vector<vector<int>> CinNMXY_Id1VecVecInt() {
//	int N, M, x, y;
//	cin >> N >> M;
//	vector<vector<int>>d(2*N + 1, vector<int>(M + 1, 0));
//	for (int i = 1; i <= M; i++) {
//		cin >> x >> y;
//		d[x][i] = 1;
//		d[N + y][i] = 1;
//	}
//	return d;
//}
//string Id1VecVecInt_Id0StrForm(vector<vector<int>>&d) {
//	if (d.size() == 0)return "{}";
//	int N = d.size() - 1, M = d[0].size() - 1; char line[12];
//	string s = "{ ";
//	for (int i = 1; i <= N; i++) {
//		s += "{ ";
//		for (int j = 1; j <= M; j++) {
//			sprintf(line, "%d", d[i][j]);
//			s += string(line) + string((j == M) ? "" : ",") + ' ';
//		}
//		s += "}" + string((i==N)?"":",") ;
//	}
//	return s + " };";
//}
//int main() {
//	IndepentSet IS;
//	vector<vector<int>> a; 
//	Id0toId1(a);
//	//vector<vector<int>> a = CinNMXY_Id1VecVecInt();
//
//	IS.DataReflesh(a);
//	IS.Hungarian(1);
//	system("pause");
//	//vector<vector<int>> ex[5];
//	//int doWhat[4] = { 0, 0, 1 }; // 0: Find Min Sum of Matching Set, 1:Find Max Sum of Matching Set 2: Find Max Number of Matching
//	//ex[0] = { { 3, 6, 3, 5 },{ 7, 3, 5, 8 },{ 5, 2, 8, 6 },{ 8, 3, 6, 4 } }; //Bottleneck Problem
//	//ex[1] = { { 3, 6, 3, 5, 3 },{ 7, 3, 5, 8, 5 },{ 5, 2, 8, 6, 2 },{ 8, 3, 6, 4, 4 } };
//	//ex[2] = { { 3, 6, 7, 4 },{ 4, 5, 5, 6 },{ 6, 3, 4, 4 },{ 5, 4, 3, 5 } };
//	//for (int i = 0; i <= 1; i++) {
//	//	Id0toId1(ex[i]);
//	//	IS.DataReflesh(ex[i]);
//	//	cout<<IS.Hungarian(doWhat[i])<<'\n';
//	//}
//
//	system("pause");
//	return 0;
//} 