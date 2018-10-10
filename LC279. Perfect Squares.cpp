//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
////0ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////class Solution {
////public:
////	int numSquares(int n) {
////		while (n % 4 == 0) n >>= 2;
////		if (n % 8 == 7) return 4;
////		for (int a = 0; a * a <= n; a++) {
////			int b = sqrt(n - a * a);
////			if (a * a + b * b == n) {
////				return bool(a) + bool(b);
////			}
////		}
////		return 3;
////	}
////};
//
////84ms/PR22
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int numSquares(int n) {
//		vector<int>d(n + 1, INT_MAX);
//		d[0] = 0;
//		for (int i = 0; i <= n; i++) {
//			for(int j = 1, t; (t = i + j * j) <= n; j++){
//				d[t] = min(d[t], d[i] + 1);
//			}
//		}
//		return d[n];
//	}
//};
//
////88ms/PR20
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int numSquares(int n) {
//		vector<int>d(1, 0);
//		while (d.size() <= n) {
//			int m = d.size(), val = INT_MAX;
//			for (int i = 1; i * i <= m; i++) {
//				val = min(val, d[m - i * i] + 1);
//			}
//			d.push_back(val);
//		}
//		return d[n];
//	}
//};
//
////436ms/PR9
////可以用DP輔助增加效率
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int numSquares(int n) {
//		int Ans = n;
//		for (int i = 2; i * i <= n; i++) {
//			int a = n / (i * i), b = n % (i * i);
//			Ans = min(Ans, a + numSquares(b));
//		}
//		return Ans;
//	}
//};
//
//int main() {
//	//class Solution az;
//	cout << !!(-3);
//	system("pause");
//	return 0;
//} 
