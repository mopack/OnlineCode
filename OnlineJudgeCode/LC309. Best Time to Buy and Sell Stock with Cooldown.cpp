//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int maxProfit(vector<int>&Price) {
//		int buy = INT_MIN, buy0 = 0, sell = 0, sell0 = 0;
//		for (auto &p : Price) {
//			buy0 = buy;
//			buy = max(sell0 - p, buy0);
//			sell0 = sell;
//			sell = max(buy0 + p, sell0);
//		}
//		return sell;
//	}
//};
//
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 

//buy[i] = max(rest[i - 1] - price, buy[i - 1])
//sell[i] = max(buy[i - 1] + price, sell[i - 1])
//rest[i] = max(sell[i - 1], buy[i - 1], rest[i - 1])

// buy[i] <= rest[i], rest[i] = max(sell[i-1], rest[i-1])
// rest[i] = sell[i-1]

//buy[i] = max(sell[i - 2] - price, buy[i - 1])
//sell[i] = max(buy[i - 1] + price, sell[i - 1])
