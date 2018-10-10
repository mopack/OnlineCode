//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <bitset>
//using namespace std;
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int> grayCode(int N) {
//		if (N == 0) return{ 0 };
//		vector<int>Ans = { 0 };
//		bitset<32>d(0);
//		for (bool even = 1; 1; even = !even) {
//			if (even) d.flip(0);
//			else {
//				int i;
//				for (i = 0; !d[i]; i++);
//				if (i == N - 1) return Ans;
//				d.flip(i + 1);
//			}
//			Ans.push_back(d.to_ulong());
//		}
//	}
//};
//
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
//
//
