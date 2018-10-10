//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//// 4ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution{
//public:
//	#define Area(x, y) ( (y-x)*min(h[x], h[y]) )
//	int maxArea(vector<int>&h) {
//		int Ans = 0;
//		for (int s = 0, e = h.size() - 1; s < e;) {
//			Ans = max(Ans, Area(s, e));
//			if (h[s] > h[e]) e--; else s++;
//		}
//		return Ans;
//	}
//};
//
//// 4ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int maxArea(vector<int>&h) {
//		int Ans = 0, H;
//		for (int s = 0, e = h.size() - 1; s < e;) {
//			H = min(h[s], h[e]);
//			Ans = max(Ans, (e - s) * H);
//			while (h[s] <= H && s < e) s++;
//			while (h[e] <= H && s < e) e--;
//		}
//		return Ans;
//	}
//};
//
//
//int main() {
//	Solution az;
//	vector<int> x = { 1, 1 }; // {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	cout << az.maxArea(x) << endl;
//
//	//for (int i = 0; i < x.size(); i++) {
//	//	for (int j = 0; j < x.size(); j++) {
//	//		printf("%d ", abs(j - i)*min(x[i], x[j]));
//	//	}
//	//	cout << endl;
//	//}
//
//	system("pause");
//	return 0;
//}