//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> x = { 3,7,3,3,4,3,3,3,
//                  3,3,3,9,3,3,3,3 };
//
//
//int dup;
//int n;
//
//int main() {
//	// input x
//
//	// find dup
//	for (int i = 1; i < x.size(); i++) {
//		if (x[i] == x[i - 1]) { dup = x[i]; break; }
//	}
//
//	// extract x2 & sort it
//	n = 0;
//	for (int i = 0; i < x.size(); i++) {
//		if (x[i] != dup) {
//			x[n++] = x[i];
//		}
//	}
//	x[n++] = dup;
//	sort(x.begin(), x.begin()+n);
//
//	// put dup back
//	int index = x.size() - 1, i;
//	for (i = n - 1; i >= 0 && x[i] != dup; i--)
//		x[index--] = x[i];
//	
//	if (i >= 0 && x[i] == dup)
//		for (int j = i + 1; j <= index; j++) x[j] = dup;
//	
//	for (int i = 0; i < x.size(); i++) cout << x[i] << ' ';
//	cout << endl;
//
//	system("pause");
//	return 0;
//}