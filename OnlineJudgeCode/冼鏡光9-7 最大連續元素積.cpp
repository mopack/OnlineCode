//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//
//using namespace std;
//
//vector<int> x = { -2,3,4,-4 };
//
//int main() {
//	// no positive
//	bool nopos = 1; long long Ma = -2147483647;
//	for (int i = 0; i < x.size(); i++) {
//		if (x[i] > 0) { nopos = 0; break;}
//		if (Ma < x[i]) Ma = x[i];
//	}
//	if (nopos) { cout << Ma << endl; system("pause"); return 0; }
//
//	// init
//	int ma = 1, mi = 1; // currently max & min
//	int ans = 1;   // currently ans (the largest)
//
//	for (int i = 0; i < x.size(); i++) {
//		if (x[i] > 0) {
//			ma *= x[i];
//			mi = min(mi*x[i], 1);
//		}
//		else if (x[i] == 0) {
//			ma = 1;
//			mi = 0;
//		}
//		else {
//			int temp = ma;
//			ma = max(mi*x[i], 1);
//			mi = temp * x[i];
//		}
//		ans = max(ans, ma);
//	}
//	cout << ans << endl;
//
//
//	system("pause");
//	return 0;
//}