//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//struct A {
//	int i, v;
//	bool operator<(A t)const{
//		return (v == t.v) ? (i < t.i) : (v < t.v);
//	}
//};
//class Solution {
//public:
//	bool containsNearbyDuplicate(vector<int>& nums, int k) {
//		vector<A>a(nums.size());
//		for (int i = 0; i != nums.size(); i++)a[i].i = i, a[i].v = nums[i];
//		sort(a.begin(), a.end());
//
//		for(int i=1; i <a.size();i++)
//			if (a[i].v == a[i - 1].v && (a[i].i - a[i-1].i <= k))
//				return 1;
//		return 0;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 