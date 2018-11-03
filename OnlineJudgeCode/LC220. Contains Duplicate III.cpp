//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////16ms/PR20
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool containsNearbyAlmostDuplicate(vector<int>&A, int K, int T) {
//		map<long long, int>Map;
//		int j = 0;
//		for (int i = 0; i < A.size(); i++) {
//			if (i - j > K) Map.erase(A[j++]);
//			auto it = Map.lower_bound((long long)A[i] - T);
//			if (it != Map.end() && abs(it->first - A[i]) <= T) return 1;
//			Map[A[i]] = i;
//		}
//		return 0;
//	}
//};
//
////min/max of index
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//
//	class Solution az;
//	vector<int> x = { 3,6,0,2 }; int k = 2, t = 2;
//	cout << "\nAns=" << az.containsNearbyAlmostDuplicate(x, k, t);
//	system("pause");
//	return 0;
//} 