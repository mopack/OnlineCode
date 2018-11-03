//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//// Sol3 µy·L§ï¨}Sol2ªºDP
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int> x = vector<int>(19 + 1, 0);
//	Solution() {
//		x[0] = x[1] = 1;
//		for (int i = 2; i <= 19; i++) {
//			for (int j = 1; j <= i; j++) {
//				x[i] += x[j - 1] * x[i - j];
//			}
//		}
//	}
//	int numTrees(int N) {
//		return x[N];
//	}
//};
//
//// Sol2: DP  0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution { 
//public:
//	int numTrees(int N) {
//		vector<int> x(N+1, 0);
//		x[0] = x[1] = 1;
//		for (int i = 2; i <= N; i++)
//			for (int j = 1; j <= i; j++)
//				x[i] += x[j - 1] * x[i - j];
//
//		return x[N];
//	}
//};
//
//// Sol 1 : »¼°j TLE(N=19®É)
//class Solution {
//public:
//	int numTrees(int N) {
//		if (N <= 1) return 1;
//
//		int ans = 0;
//		for (int i = 1; i <= N; i++) {
//			//int x = numTrees(i - 1), y = numTrees(N - i);
//			ans += numTrees(i - 1) *  numTrees(N - i);
//			//printf("(%d,%d): N(1~%d)=N(%d)=%d N(%d~N)=N(%d)=%d\N", N, i, i - 1, i - 1, x, i + 1, N - i, y);
//		}
//		return ans;
//	}
//}az;
//int main() {
//	Solution az;
//	cout<<az.numTrees(19);
//
//	system("pause");
//	return 0;
//}