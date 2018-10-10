//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int minCostClimbingStairs(vector<int>& cost) {
//		cost.push_back(0);
//		vector<int>d(cost.size() + 1, 0);
//		d[0] = cost[0]; d[1] = cost[1];
//		for (int i = 2; i < cost.size(); i++)
//			d[i] = min(d[i - 2], d[i - 1]) + cost[i];
//		return min(d[cost.size() - 1], d[cost.size() - 2]);
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 