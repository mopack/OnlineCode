//#include <iostream>
//#include <cstdlib>
//#include <vector>
//
//using namespace std;
//typedef unsigned long ul;
//vector<ul> factors, exps;
//
//void Save(int f, int e) {
//	if (e > 0) {
//		factors.push_back(f);
//		exps.push_back(e);
//	}
//}
//
//int main() {
//	int i, k, work, n;
//	while (cin >> n && n) {
//		factors.clear(); exps.clear();
//		work = n;
//
//		for (i = 0; (work & 0x01L)==0 && work > 1; work >>= 1, i++);
//		Save(2, i);
//
//		for (k = 3; k <= work; k += 2) {
//			for (i = 0; work%k == 0 && work > 1; work /= k, i++);
//			Save(k, i);
//		}
//
//		// output
//		cout << n << "= ";
//		for (int i = 0; i < exps.size(); i++) {
//			cout << factors[i] << "^" << exps[i] << "*";
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}
