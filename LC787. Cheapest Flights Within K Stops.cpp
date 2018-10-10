//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////17L/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int findCheapestPrice(int N, vector<vector<int>>& flights, int sta, int dst, int K) {
//		vector<int>d(N, INT_MAX); // d[x] = distance from x to dst
//		for (auto &f : flights)
//			if (f[1] == dst) d[f[0]] = f[2];
//
//		for (int k = 1; k <= K; k++) {
//			for (auto &f : flights) {
//				if (d[f[1]] != INT_MAX)
//					d[f[0]] = min(d[f[0]], d[f[1]] + f[2]);
//			}
//		}
//		return (d[sta] == INT_MAX) ? -1 : d[sta];
//	}
//};
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 