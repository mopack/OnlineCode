//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int canCompleteCircuit(vector<int>& Gas, vector<int>& Cost) {
//		int st = Gas.size() - 1, ed = 0, Sum = Gas[st] - Cost[st];
//		while (st > ed) {
//			if (Sum >= 0) {
//				Sum += Gas[ed] - Cost[ed];
//				ed++;
//			}else{
//				st--;
//				Sum += Gas[st] - Cost[st];
//			}
//		}
//		return (Sum >= 0) ? st : -1;
//	}
//};
//
//// 0ms, Others
//class Solution {
//public:
//	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//		int n = gas.size();
//		vector<int> diff(n);
//		for (int i = 0; i<n; i++) {
//			diff[i] = gas[i] - cost[i];
//		}
//		int sum1 = 0, sum2, cand;
//		for (int i = 0; i<n; i++) {
//			for (; i<n && diff[i] <= 0; i++) sum1 = sum1 + diff[i];
//			if (i == n && sum1 >= 0) return i - 1;
//			cand = i;
//			sum2 = 0;
//			for (; i<n; i++) {
//				sum2 = sum2 + diff[i];
//				if (sum2 < 0) break;
//			}
//			sum1 = sum1 + sum2;
//			if (i == n && sum1 >= 0) return cand;
//		}
//		return -1;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
