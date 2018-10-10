//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//int q(double x, double y) {
//	if (x > 0 && y >= 0) return 1;
//	if (x <= 0 && y >= 0) return 2;
//	if (x < 0 && y <= 0) return 3;
//	return 4; // x>=0 && y<0
//}
//int main() {
//	vector<double> x, y;
//	int Count = 0;
//
//	double x0 = 1, y0 = 0; int q0 = 1;
//	double x1, y1; int q1;
//	for (int i = 0; i < x.size(); i++) {
//		x1 = x[(i + 1) % x.size()] - x[i%x.size()];
//		y1 = y[(i + 1) % y.size()] - y[i%y.size()];
//		q1 = q(x1, y1); x1 = abs(x1); y1 = abs(y1);
//
//		if (q1 > q0) Count++;
//		else if (q1 == q0) {
//			//y0/x0 > y1/x1
//			if (y0 * x1 > y1 * x0)Count++;
//		}
//		x0 = x1; y0 = y1; q0 = q1;
//	}
//	cout << Count << endl;
//
//	system("pause");
//	return 0;
//}