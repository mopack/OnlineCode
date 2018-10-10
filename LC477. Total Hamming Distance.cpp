//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <bitset>
//#include <map>
//using namespace std;
//
//class Solution {
//public:
//	int totalHammingDistance(vector<int>& nums) {
//		int ans = 0, N= nums.size(), c;
//		for (int i = 31; i >= 0; i--) {
//			c = 0;
//			for (auto &n : nums) {
//				if (n & 1)c++;
//				n >>= 1;
//			}
//			ans += c * (N - c);
//		}
//		return ans;
//	}
//}az;
//
//int main() {
//	vector<int> x = { 1337,7331 };
//	cout<<endl<<az.totalHammingDistance(x);
//	//cout<<bitset<32>(x[0]).to_string()<<endl;
//	//cout << bitset<32>(-x[0]).to_string();
//
//	system("pause");
//	return 0;
//} 