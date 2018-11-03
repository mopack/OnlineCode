//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
// WA (need fix)
//vector<vector<int>>ori(0, vector<int>(4)), w, t;
//bool Match(vector<int>s, vector<int>g, int a, int b) {
//	bool isS[10] = {}, isG[10] = {};
//	int an = 0, bn = 0;
//	for (int i = 0; i <= 3; i++){
//		if (s[i] == g[i]) {
//			an++;
//		}
//		else {
//			isS[s[i]] = 1;
//			isG[g[i]] = 1;
//		}
//	}
//	for (int i = 0; i < 9; i++)
//		if (isS[i] && isG[i]) bn++;
//
//	return an == a && bn == b;
//}
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    freopen("pe.in", "rt", stdin); freopen("pe.out", "wt", stdout);
//
//
//	vector<int>a(4);
//	for(a[0] = 0; a[0] <= 9; a[0]++){
//		for (a[1] = 0; a[1] <= 9; a[1]++){
//			if (a[1] == a[0]) continue;
//			for (a[2] = 0; a[2] <= 9; a[2]++){
//				if (a[2] == a[0] || a[2] == a[1]) continue;
//				for (a[3] = 0; a[3] <= 9; a[3]++) {
//					if (a[3] == a[0] || a[3] == a[1] || a[3] == a[2]) continue;
//					ori.push_back(a);
//				}
//			}
//		}
//	}
//
//	int Count, N, G, A, B; string S;
//	cin >> Count;
//	while (Count--) {
//		cin >> N;
//		w = ori;
//		vector<int>g(4);
//		while (N--) {
//			cin >> G; cin >> S;
//			A = S[0] - 48;
//			B = S[2] - 48;
//			for (int i = 0; i <= 3; i++, G /= 10)
//				g[3-i] = G % 10;
//
//			t.clear();
//			for (auto &x : w) {
//				if (Match(x, g, A, B)){
//					t.push_back(x);
//					//cout << x[0] << x[1] << x[2] << x[3] << '\n';
//				}
//			}
//			swap(t, w);
//			//cout << "#\n";
//		}
//		if (w.empty()) cout << "You Cheat!\n";
//		else cout << w.size() << '\n';
//	}
//	return 0;
//} 