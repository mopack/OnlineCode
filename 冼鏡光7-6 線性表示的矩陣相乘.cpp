//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//struct LineM {
//	vector<int> x;
//	int m, n;
//};
//typedef vector<vector<int>> TwoDM;
//
//
//LineM mul(LineM a, LineM b) {
//	LineM ans;
//	int sum, pp, qq;
//
//	for (int i = 0, p = 0; i < a.m; i++, p += a.n) {
//		for (int j = 0; j < b.n; j++) {
//			sum = 0;
//			for (int k = 0, pp = p, qq = j; k < b.m; pp++, qq += b.n, k++) {
//				sum += a.x[pp] * b.x[qq];
//			}
//			ans.x.push_back(sum);
//		}
//	}
//
//	ans.m = a.m; ans.n = b.n;
//	return ans;
//}
//
//TwoDM Line2TwoM(LineM a) {
//	TwoDM ans;
//	for (int i = 0; i < a.m; i++) {
//		ans.push_back(vector<int>());
//		for (int j = 0; j < a.n; j++) ans[i].push_back(a.x[i*a.n + j]);
//	}
//	return ans;
//}
//LineM Two2LineM(TwoDM a) {
//	LineM ans;
//	for (int i = 0; i < a.size(); i++) {
//		for (int j = 0; j < a[i].size(); j++) ans.x.push_back(a[i][j]);
//	}
//
//	ans.m = a.size();
//	if (ans.m > 0) { ans.n = a[0].size(); }
//	else { ans.n = 0; }
//
//	return ans;
//}
//void displayTwoDM(TwoDM a) {
//	for (int i = 0; i < a.size(); i++) {
//		for (int j = 0; j < a[i].size(); j++) cout << a[i][j] << ' ';
//		cout << endl;
//	}
//}
//
//int main() {
//	TwoDM A = { {1,4},{2,3},{3,2} };
//	TwoDM B = { {1,2,3},{2,0,-1} };
//
//	displayTwoDM(
//		Line2TwoM(
//			mul(Two2LineM(A), Two2LineM(B))
//		)
//	);
//	
//
//	system("pause");
//	return 0;
//}
////output:
////9 2 - 1
////8 4 3
////7 6 7