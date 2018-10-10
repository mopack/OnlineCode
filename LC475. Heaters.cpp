//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//
//class Solution { // 48ms PR98.70%
//public:
//	int findRadius(vector<int>&p, vector<int>&h) {
//		sort(p.begin(), p.end()); sort(h.begin(), h.end());
//		int pi, hi, R;
//
//		for (pi = 0; p[pi] < h[0]; pi++);
//		R = h[0] - p[0];
//
//		for (hi = 0; pi < p.size(); hi++) {
//			while (hi + 1 < h.size() && h[hi + 1] < p[pi])hi++;
//			if (hi + 1 == h.size()) return max(R, p.back() - h[hi]);
//
//			for (; pi < p.size() && p[pi] <= h[hi + 1]; pi++) R = max(R, min(p[pi] - h[hi], h[hi + 1] - p[pi]));
//		}
//		return R;
//	}
//};
//
//int main() {
//	class Solution az;
//	vector<int> x = { 25921153,510616708 }, y = { 771515668,357571490,44788124,927702196,952509530 };
//	
//	cout << az.findRadius(x, y);
//	system("pause");
//	return 0;
//} 