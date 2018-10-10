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
//void PrintAlphaBet(char s, char e) {
//	cout << "   ";
//	for (; s <= e; s++)printf("%2c ", s);
//	cout << '\n';
//}
//void Print(vector<int>&d, int id0 = 0) {
//	for (int i = 0; i < d.size(); i++)printf("%2d ", d[i]);
//	cout << '\n';
//}
//void Print(vector<vector<int>> &d, bool AlphaBet = 0, int id0 = 1) {
//	if (d.size() == 0)return;
//	int N = d.size() - 1, M = d[0].size() - 1;
//	for (int i = id0; i <= N; i++, cout << '\n') {
//		if (AlphaBet) printf("%2c ", 'A' + i - 1);
//		for (int j = id0; j <= M; j++) printf("%2d ", d[i][j]);
//	}
//	cout << '\n';
//}
//vector<vector<int>> CinNMXY_Id1VecVecInt() {
//	int N = 0;
//	vector<int>x, y; char u, v;
//	while (cin >> u >> v && u != '0') {
//		x.push_back(u - 'A' + 1); y.push_back(v - 'A' + 1);
//		N = max(N, max(u, v) - 'A' + 1);
//	}
//	vector<vector<int>>d(N + 1, vector<int>(N + 1, 0));
//	for (int i = 0; i < x.size(); i++)
//		d[x[i]][y[i]] = 1;
//	return d;
//}
//string Id1or0VecVecInt_to_Id0StrForm(vector<vector<int>>&d, int id0 = 1) {
//	if (d.size() == 0)return "{}";
//	int N = d.size() - 1, M = d[0].size() - 1; char line[12];
//	string s = "{ ";
//	for (int i = id0; i <= N; i++) {
//		s += "{ ";
//		for (int j = id0; j <= M; j++) {
//			sprintf(line, "%d", d[i][j]);
//			s += string(line) + string((j == M) ? "" : ",") + ' ';
//		}
//		s += "}" + string((i == N) ? "" : ",");
//	}
//	return s + " };";
//}
//static int x = []() {ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL); return 0; }();
//int main() {
//	system("pause");
//	return 0;
//} 