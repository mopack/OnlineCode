//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_set>
//using namespace std;
//
//
//
//class Solution { //Sol1: 20ms PR98.86%  O(n) (Suppose hashing as constant time)
//public:
//	unordered_set<int> is, on; //is means exists; on mean has already counted in sum.
//	int findPairs(vector<int>&a, int k) {
//		if (k<0)return 0;
//		int sum = 0;
//		if (k) {
//			for (auto x : a)is.insert(x);
//			for (auto x : a)
//				if (is.find(x + k) != is.end() && on.find(x) == on.end())on.insert(x), sum++;
//		}else {
//			for (auto x : a)
//				if (is.find(x) == is.end()) is.insert(x);
//				else {
//					if (on.find(x) == on.end()) on.insert(x), sum++;
//				}
//		}
//		return sum;
//	}
//};
//int main() {
//	vector<int> x = {1,2,3,4,5};
//	class Solution az;
//	cout<<az.findPairs(x, 1);
//	system("pause");
//	return 0;
//} 