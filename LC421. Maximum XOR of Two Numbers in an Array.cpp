//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <set>
//#include <bitset>
//
//using namespace std;
//class Solution {
//public:
//	int findMaximumXOR(vector<int>& nums) {
//		int ans = 0, mask = 0;
//		set<int> Set;
//
//		for (int i = 31; i >= 0; i--) {
//			mask |= (1 << i);
//			Set.clear();
//			for (auto x : nums) Set.insert(x & mask);
//
//			int temp = ans | (1 << i);
//			for (auto pre : Set) {
//				if (Set.find(temp^pre) != Set.end()) {
//					ans = temp; break;
//				}
//			}
//		}
//		return ans;
//	}
//}az;
//
//int main() {
//	vector<int> x ={ 3, 10, 5, 25, 2, 8 };
//	bitset<5> b;
//	for (auto &i : x) {
//		cout<<bitset<5>(i).to_string()<<endl;
//	}
//	system("pause");
//	return 0;
//} 