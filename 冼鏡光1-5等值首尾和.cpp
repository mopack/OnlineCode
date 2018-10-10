//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	vector<int>x = { 3,6,2,1,4,5,2 };
//	int ans = -1; // 0·|ºâ¨ì
//
//	int fsum = 0, bsum = 0; // front & back
//	for (int fi = 0, bi = x.size() - 1; fi < x.size() && bi >= 0;) {
//		if (fsum < bsum) {
//			fsum += x[fi++];
//		}
//		else if (fsum > bsum) {
//			bsum += x[bi--];
//		}
//		else {
//			//cout << fsum << ',';
//			ans++;
//			fsum += x[fi++];
//			bsum += x[bi--];
//		}
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}