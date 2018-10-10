//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <tuple>
//using namespace std;
//// ¤G¨ê
//static int fast = []() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//#define DFS(x, y) dfs(x, y, A[i][j], Ans, A, DP)
//#define DFS0(x, y) dfs(x, y, A[i][j] - 1, Ans, A, DP)
//	int dfs(int i, int j, int ParentV, int& Ans, vector<vector<int>>& A, vector<vector<int>>& DP) {
//		if (i < 0 || j < 0 || i == A.size() || j == A[0].size() || A[i][j] <= ParentV) return 0;
//		if (DP[i][j]) return DP[i][j];
//
//		int x[4];
//		x[0] = DFS(i + 1, j);
//		x[1] = DFS(i - 1, j);
//		x[2] = DFS(i, j + 1);
//		x[3] = DFS(i, j - 1);
//		DP[i][j] = max(max(x[0], x[1]), max(x[2], x[3])) + 1;
//		Ans = max(Ans, DP[i][j]);
//		return DP[i][j];
//	}
//	int longestIncreasingPath(vector<vector<int>>& A) {
//		if (A.empty()) return 0;
//		vector<vector<int>>DP(A.size(), vector<int>(A[0].size(), 0));
//		int Ans = 0;
//		for (int i = 0; i < A.size(); i++) {
//			for (int j = 0; j < A[0].size(); j++) {
//				DFS0(i, j);
//			}
//		}
//		return Ans;
//	}
//};
//
////// Using DFS or BFS to apply Topolgical Sorting are both correct. 
////// DFS (with DP): 12ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////	int N, M, Ans;
////	vector<vector<int>>DP; // Vis State
////	int DFS(int i, int j, int ParentV, vector<vector<int>>&A) { // go Back, return of DFS(x)=DP[x]
////		if (i < 0 || j < 0 || i == N || j == M || A[i][j] <= ParentV) return 0;
////		if (DP[i][j])return DP[i][j];
////
////		int x[4];
////		x[0] = DFS(i + 1, j, A[i][j], A);
////		x[1] = DFS(i - 1, j, A[i][j], A);
////		x[2] = DFS(i, j + 1, A[i][j], A);
////		x[3] = DFS(i, j - 1, A[i][j], A);
////
////		DP[i][j] = max(max(x[0], x[1]), max(x[2], x[3])) + 1;
////		Ans = max(Ans, DP[i][j]);
////		return DP[i][j];
////	}
////public:
////	int longestIncreasingPath(vector<vector<int>>&A) {
////		if (A.size() == 0)return 0;
////		N = A.size(); M = A[0].size(); Ans = 1;
////		DP = vector<vector<int>>(N, vector<int>(M, 0));
////		for (int i = 0; i < N; i++) {
////			for (int j = 0; j < M; j++) {
////				if (!DP[i][j]) DFS(i, j, A[i][j] - 1, A);
////			}
////		}
////		return Ans;
////	}
////};
////
////// BFS: 16ms/PR98
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////#define Safe(x, y) (x >= 0 && y >=0 && x < N && y < M)
////#define BackToMe(x, y) (Safe(x, y) && A[x][y] < A[i][j])
////#define MeToFront(x, y)  if (Safe(x, y) && A[x][y] > A[i][j]) { \
////							MaxL[x][y] = max(MaxL[x][y], MaxL[i][j]); \
////							if (--BackN[x][y] == 0) q.push({ x,y });  \
////					     }
////	int longestIncreasingPath(vector<vector<int>>&A) { // Define goFront = Increasing
////		if (A.empty())return 0;
////		int N = A.size(), M = A[0].size(), i, j, MaxLen = 1;
////		vector<vector<int>>BackN(N, vector<int>(M));
////		vector<vector<int>>MaxL(N, vector<int>(M, 0)); 
////		queue<pair<int, int>>q;
////		
////		for (i = 0; i < N; i++)
////			for (j = 0; j < M; j++) {
////				BackN[i][j] = BackToMe(i + 1, j) + BackToMe(i - 1, j) + BackToMe(i, j + 1) + BackToMe(i, j - 1);
////				if (BackN[i][j] == 0) q.push({ i,j });
////			}
////
////		while (!q.empty()) {
////			tie(i, j) = q.front(); q.pop();
////			MaxLen = max(MaxLen, ++MaxL[i][j]);
////			MeToFront(i + 1, j); MeToFront(i - 1, j); MeToFront(i, j - 1); MeToFront(i, j + 1);
////		}
////		return MaxLen;
////	}
////};

////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////#define Safe(x, y) (x >= 0 && y >=0 && x < N && y < M)
////#define FormerToMe(x, y) if (Safe(x, y) && A[x][y] < A[i][j]) FormerN[i][j]++;
////#define MeToLater(x, y)  if (Safe(x, y) && A[x][y] > A[i][j]) { \
////							d[x][y] = max(d[x][y], d[i][j]); \
////							if (--FormerN[x][y] == 0) q.emplace(x, y);  \
////					     }
////#define Test4Side(F) { F(i + 1, j); F(i - 1, j); F(i, j + 1); F(i, j - 1); }
////
////	int longestIncreasingPath(vector<vector<int>>&A) { // Define goLater = Increasing
////		if (A.empty())return 0;
////		int N = A.size(), M = A[0].size(), i, j, Ans = 1;
////		vector<vector<int>>FormerN(N, vector<int>(M));
////		vector<vector<int>>d(N, vector<int>(M, 0)); // Ans[x][y]
////		queue<pair<int, int>>q;
////
////		for (i = 0; i < N; i++) {
////			for (j = 0; j < M; j++) {
////				Test4Side(FormerToMe);
////				if (FormerN[i][j] == 0) q.emplace(i, j);
////			}
////		}
////
////		while (!q.empty()) {
////			tie(i, j) = q.front(); q.pop();
////			Ans = max(Ans, ++d[i][j]);
////			Test4Side(MeToLater);
////		}
////		return Ans;
////	}
////};

////
////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
////// TextBook Example:
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////	vector<int>DP;
////	vector<vector<int>>Back;
////	int DFS(int i, vector<int>&Time) {
////		if (DP[i])return DP[i];
////		int Max = 0;
////		for (auto &x : Back[i])
////			Max = max(Max, DFS(x, Time));
////		return (DP[i] = Time[i] + Max);
////	}
////public:
////	vector<int> FinishedDate_DFS(vector<vector<int>>&Edge, vector<int>&Time) {
////		int N = Time.size() - 1;
////		DP = vector<int>(N + 1, 0);
////		Back = vector<vector<int>>(N + 1);
////		for (auto &e : Edge) {
////			Back[e[1]].push_back(e[0]);
////		}
////
////		for (int i = 1; i <= N; i++)
////			if (!DP[i]) DFS(i, Time);
////		return DP;
////	}
////};
////
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	vector<int> FinishedDate_Queue(vector<vector<int>>&Edge, vector<int>&Time) { // input: Directed Edges, Element's Domain: 1-N
////		int N = Time.size() - 1;
////		vector<int>BackN(N + 1, 0), d(N + 1, 0);
////		vector<vector<int>>Front(N + 1); //Adjacent list
////		queue<int>q;
////		for (auto &e : Edge) {
////			Front[e[0]].push_back(e[1]);
////			BackN[e[1]]++;
////		}
////		for (int i = 1; i <= N; i++)
////			if (BackN[i] == 0) q.push(i);
////		while (!q.empty()) {
////			int x = q.front(); q.pop();
////			d[x] += Time[x];
////			for (auto &y : Front[x]){
////				d[y] = max(d[y], d[x]);
////				if (--BackN[y] == 0) q.push(y);
////			}
////		}
////		return d;
////	}
////};
////
////// Tools
////void Id0toId1(vector<vector<int>> &d) {
////	if (d.size() == 0) return;
////	int N = d.size(), M = d[0].size();
////	vector<vector<int>> a(N + 1, vector<int>(M + 1, 0));
////	for (int i = 0; i < N; i++)
////		for (int j = 0; j < M; j++) a[i + 1][j + 1] = d[i][j];
////	d = a;
////}
////void PrintAlphaBet(char s, char e) {
////	cout << "   ";
////	for (; s <= e; s++)printf("%2c ", s);
////	cout << '\n';
////}
////void Print(vector<vector<int>> &d, bool AlphaBet = 0, int id0 = 1) {
////	if (d.size() == 0)return;
////	int N = d.size() - 1, M = d[0].size() - 1;
////	for (int i = id0; i <= N; i++, cout << '\n') {
////		if (AlphaBet) printf("%2c ", 'A' + i - 1);
////		for (int j = id0; j <= M; j++) printf("%2d ", d[i][j]);
////	}
////	cout << '\n';
////}
////void Print(vector<int>&d, int id0 = 0) {
////	for (int i = 0; i < d.size(); i++)printf("%2d ", d[i]);
////	cout << '\n';
////}
////vector<vector<int>> CinNMXY_Id1VecVecInt() {
////	int N = 0;
////	vector<int>x, y; char u, v;
////	while (cin >> u >> v && u != '0') {
////		x.push_back(u - 'A' + 1); y.push_back(v - 'A' + 1);
////		N = max(N, max(u, v) - 'A' + 1);
////	}
////	vector<vector<int>>d(N + 1, vector<int>(N + 1, 0));
////	for (int i = 0; i < x.size(); i++)
////		d[x[i]][y[i]] = 1;
////	return d;
////}
////string Id1or0VecVecInt_to_Id0StrForm(vector<vector<int>>&d, int id0 = 1) {
////	if (d.size() == 0)return "{}";
////	int N = d.size() - 1, M = d[0].size() - 1; char line[12];
////	string s = "{ ";
////	for (int i = id0; i <= N; i++) {
////		s += "{ ";
////		for (int j = id0; j <= M; j++) {
////			sprintf(line, "%d", d[i][j]);
////			s += string(line) + string((j == M) ? "" : ",") + ' ';
////		}
////		s += "}" + string((i == N) ? "" : ",");
////	}
////	return s + " };";
////}
////vector<vector<int>> CinXY_Edge() {
////	int N = 0;
////	vector<int>x, y; char u, v;
////	vector<vector<int>>d(N + 1, vector<int>(2));
////	while (cin >> u >> v && u != '0')
////		d.push_back({ u - 'A' + 1, v - 'A' + 1 });
////	return d;
////}
//
//
//
//int main() {
//	vector<vector<int>>A = { { 3,4,5 },{ 3,2,6 },{ 2,2,1 } };// { { 9, 9, 4 }, { 6,6,8 }, { 2,1,1 } };//{ { 7,7,5 },{ 2,4,6 },{ 8,2,0 } };
//	//vector<vector<int>> B = { { 0,1,2,3,4,5,6,7,8,9 },{ 19,18,17,16,15,14,13,12,11,10 },{ 20,21,22,23,24,25,26,27,28,29 },{ 39,38,37,36,35,34,33,32,31,30 },{ 40,41,42,43,44,45,46,47,48,49 },{ 59,58,57,56,55,54,53,52,51,50 },{ 60,61,62,63,64,65,66,67,68,69 },{ 79,78,77,76,75,74,73,72,71,70 },{ 80,81,82,83,84,85,86,87,88,89 },{ 99,98,97,96,95,94,93,92,91,90 },{ 100,101,102,103,104,105,106,107,108,109 },{ 119,118,117,116,115,114,113,112,111,110 },{ 120,121,122,123,124,125,126,127,128,129 },{ 139,138,137,136,135,134,133,132,131,130 },{ 0,0,0,0,0,0,0,0,0,0 } };
//	class Solution az;
//	cout <<"\nans = "<< az.longestIncreasingPath(A) << '\n';
//
//	// Example From TextBook
//	// Prerun
//	//vector<vector<int>> C = CinNMXY_Id1VecVecInt(); // Copy Example1 into Screen
//	//PrintAlphaBet('A', 'K');
//	//Print(C, 1);
//	//cout << '\n' << Id1or0VecVecInt_to_Id0StrForm(C) << '\n';
//
//	//vector<vector<int>>D = CinXY_Edge();
//	// PrintAlphaBet('A', 'K');
//	//cout << '\n' << Id1or0VecVecInt_to_Id0StrForm(D, 0) << '\n';
//
//	// We Get: 
//	//bool b1 = 1, b2 = 1;
//	//int x = b1 + b2;
//	//cout << x;
//	//vector<vector<int>> DirectedAdjacentMatrix = { { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },{ 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },{ 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0 },{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },{ 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },{ 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
//	//vector<int> Day = {0, 3, 2, 2, 4, 3, 2, 3, 1, 5, 2, 10 };
//	//vector<vector<int>> DirectedEdge = { { 1, 3 },{ 2, 3 },{ 3, 4 },{ 3, 5 },{ 3, 7 },{ 4, 6 },{ 5, 6 },{ 6, 9 },{ 7, 8 },{ 8, 10 },{ 9, 10 },{ 10, 11 } };
//
//	//Solution az;
//	//vector<int> E = az.FinishedDate_Queue(DirectedEdge, Day);
//	//PrintAlphaBet('A', 'K');
//	//Print(E);
//
//	//vector<int> E = az.FinishedDate_DFS(DirectedEdge, Day);
//	//PrintAlphaBet('A', 'K');
//	//Print(E);
//
//	system("pause");
//	return 0;
//}
//// Example1:
////A C
////B C
////C D
////C E
////C G
////D F
////E F
////F I
////G H
////H J
////I J
////J K
////0 0