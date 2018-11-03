//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	vector<int> x = { 1,2,3,4 };
//	vector<int> y = { 4,5,6,7 };
//	vector<int> z = { 1,2,4,7 };
//	sort(x.begin(), x.end());
//	sort(y.begin(), y.end());
//	sort(z.begin(), z.end());
//	
//	bool found = 0;
//	int xi = 0, yi = 0, zi = 0;
//	while (xi < x.size() && yi < y.size() && zi < z.size()) {
//		if (x[xi] < y[yi]) {
//			xi++;
//		}
//		else if (y[yi] < z[zi]) {
//			yi++;
//		}else if(z[zi] < x[xi]){
//			zi++;
//		}
//		else {
//			found = 1; printf("x[%d]=y[%d]=z[%d]=%d\n", xi, yi, zi, x[xi]);
//			break;
//		}
//	}
//	if (found == 0) printf("not found\n");
//
//	system("pause");
//	return 0;
//}