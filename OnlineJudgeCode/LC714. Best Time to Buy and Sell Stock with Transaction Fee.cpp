//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//// AC
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int maxProfit(vector<int>&Price, int Fee) {
//		int N = Price.size();
//		vector<int>Buy(N), Sell(N);
//		Buy[0] = -Price[0]; Sell[0] = 0;
//		for (int i = 1; i < N; i++) {
//			Sell[i] = max(Sell[i - 1], Buy[i - 1] + Price[i] - Fee);
//			Buy[i] = max(Buy[i - 1], Sell[i]/*Sell[i-1] is also Accepted*/ - Price[i]);
//		}
//		return Sell[N-1];
//	}
//};
////
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int maxProfit(vector<int>&Price, int Fee) {
//		int Buy = -Price[0], Sell = 0;
//		for (int i = 1; i < Price.size(); i++) {
//			Sell = max(Sell, Buy + Price[i] - Fee);
//			Buy = max(Buy, Sell - Price[i]);
//		}
//		return Sell;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
