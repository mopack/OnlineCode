//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	vector<vector<bool>> x = { { 0, 1, 0, 1, 1 } ,
//	                           { 1, 0, 1, 1, 1 } ,
//							   { 0, 1, 0, 1, 0 } ,
//							   { 0, 0, 0, 0, 0 } ,
//							   { 1, 0, 1, 1, 1 } };
//
//	if (x.size() <= 0) { cout << "NO\n"; system("pause"); return 0; }
//
//	int a = 0; // the celebrity
//	for (int i = 1; i < x[0].size(); i++)
//		if (x[a][i]) a = i;
//
//	// check
//	bool found = 1;
//	for (int i = 0; i < x[0].size(); i++) {
//		if (x[a][i]) {
//			found = 0; break;
//		}
//		if (x[i][a] == 0 && i != a) {
//			found = 0; break;
//		}
//	}
//	if (found)cout << a << endl;
//	else cout << "NO\n";
//
//	system("pause");
//	return 0;
//}