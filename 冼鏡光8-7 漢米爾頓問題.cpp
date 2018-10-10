//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//// input & output data
//int n, m;
//vector<vector<bool>> con;
//vector<int> a; // ans 
//
//// core data set
//vector<bool> vis;
//
//// temp
//int u, v;
//
//
//void display() {
//	for (int i = 0; i < a.size(); i++) cout << a[i] << ' ';
//	cout << endl;
//}
//bool h() {
//	int start = 1; // let's set start as 1
//	int firstindex = 1; // 1~n: the first index is 1
//	a.push_back(start); vis[start] = 1; // start as 1
//	a.push_back(firstindex);
//
//	while (1) {
//		int i;
//		for (i = a.back(); i <= n; i++)
//			if (con[a[a.size() - 2]][i] && vis[i]==0) break;
//		
//		if (i <= n) { //found
//			a.back() = i; vis[i] = 1; //display();
//			if (a.size() == n && con[a.back()][start]) {
//				a.push_back(start);
//				return 1;
//			}
//			else
//				a.push_back(firstindex);
//		}
//		else {
//			a.pop_back();
//			vis[a.back()] = 0;
//			if (a.size() == 1) {
//				return 0;
//			}
//			a.back()++;
//		}
//	}
//}
//
//int main() {
//	while (cin >> n>> m && n) {
//		// init
//		a.clear();
//		vis = vector<bool>(n + 1, 0);
//		con.clear();
//		for (int i = 0; i <= n; i++) con.push_back(vector<bool>(n + 1, 0));
//
//		// input
//		while (m--) {
//			cin >> u >> v;
//			con[u][v] = con[v][u] = 1;
//		}
//
//		if (h()) {
//			display();
//		}
//		else
//			cout << "NO\n";
//	}
//	system("pause");
//	return 0;
//}
//
//
//
//
//// input data
////11 18
////1 2
////1 4
////1 5
////1 6
////2 3
////2 7
////3 4
////3 8
////3 9
////4 10
////5 10
////5 11
////6 7
////6 11
////7 8
////8 11
////9 10
////9 11
//
////4 5
////1 2
////2 3
////2 4
////3 4
////3 1
////
////6 9
////1 2
////1 3
////1 6
////3 2
////3 4
////5 2
////5 4
////6 5
////6 4
//// output
////1 2 4 3 1
////1 3 2 5 4 6 1
