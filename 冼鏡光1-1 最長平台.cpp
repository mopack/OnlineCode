//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//
//int main() {
//	vector<int> x = { 1,2,2,3,3,3,4,5,5,6 };
//	
//	if (x.size() <= 0) {
//		cout << "0\n";
//	}
//	else {
//		int len = 1, ele = x[0];
//		for (int i = 1; i < x.size(); i++) {
//			if (x[i] == x[i - len]) { len++; ele = x[i]; }
//		}
//		cout << "lengh=" << len << "; elements=" << ele << endl;
//	}
//
//	system("pause");
//	return 0;
//}