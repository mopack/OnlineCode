//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> x = { 1,2 }, y = {3,4};
//
//int main() {
//	// input x,y (with same length)
//
//	int xStart = 0, xEnd = x.size() - 1, xMid;
//	int yStart = 0, yEnd = y.size() - 1, yMid;
//
//	int Count = 0;
//	vector<int> z; z.clear(); // z[4]
//
//	while ((xEnd > xStart + 1) || (yEnd > yStart + 1)) {
//		xMid = (xStart + xEnd) / 2;
//		yMid = (yStart + yEnd) / 2;
//
//		if (x[xMid] <= y[yMid]) {
//			Count += xMid - xStart;
//			xStart = yMid; 
//			yEnd = yMid;
//		}
//		else {
//			Count += yMid - yStart;
//			yStart = yMid;
//			xEnd = xMid;
//		}
//	}
//
//	//
//	while(xStart <= xEnd) z.push_back(x[xStart++]);
//	while (yStart <= yEnd) z.push_back(y[yStart++]);
//	sort(z.begin(), z.end());
//
//	cout << z[x.size() - Count - 1] << endl;
//
//	system("pause");
//	return 0;
//}