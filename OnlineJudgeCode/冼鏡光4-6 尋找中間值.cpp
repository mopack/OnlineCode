//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	// input
//	vector<int> x; int Target;
//
//	if (Target > x.front() || Target < x.back()) { cout << "Error\n"; system("pause"); return 0; }
//
//	int Start = 0, End = x.size() - 1, Mid;
//	while (Start <= End) {
//		Mid = (Start + End) / 2;
//		if (Target > x[Mid])
//			Start = Mid + 1;
//		else if (Target < x[Mid])
//			End = Mid - 1;
//		else {
//			cout << Mid << endl; break;
//		}
//	}
//	// check x[Start]?
//
//	system("pause");
//	return 0;
//}