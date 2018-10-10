//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//struct Point {
//	int x, y;
//	Point() {}
//	Point(int xa, int ya) { x = xa; y = ya; }
//
//	bool operator<(Point t)const{
//		return x < t.x;
//	}
//
//};
//vector<Point> p;
//vector<Point> ans;
//
//int main() {
//	// test data
//	ans.clear();
//
//	p.clear();
//	p.push_back(Point(2, 4)); 
//	p.push_back(Point(3, 3));
//	p.push_back(Point(4, 1));
//	p.push_back(Point(1, 2));
//	// A,B,C,D ans:A,B,C
//
//	// algorithm
//	sort(p.begin(), p.end());
//	int maxY = -2147483647;
//
//	for (int i = p.size() - 1; i >= 0; i--) {
//		if (p[i].y > maxY) {
//			ans.push_back(p[i]);
//			maxY = p[i].y;
//		}
//	}
//
//	// output
//	for (int i = 0; i < ans.size(); i++) {
//		printf("(%d,%d) ", ans[i].x, ans[i].y);
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}