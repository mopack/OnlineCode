//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//
////class Solution { // ¼É¤Oªk AC
////public:
////	int ans;
////	int subarraySum(vector<int>& n, int k) {
////		int s, e, sum=0;
////		for (s = 0; s < n.size(); s++) {
////			sum = 0;
////			for (e = s; e < n.size(); e++) {
////				sum += n[e];
////				if (sum == k)ans++;
////			}
////		}
////		return ans;
////	}
////};
//
////unordered_map <int, int>Map;
////
////class Solution { //AC
////public:
////	int subarraySum(vector<int>& n, int k) {
////		Map.clear();
////		int sum = 0, ans = 0;
////		Map[0] = 1;
////
////		for (int i = 0; i < n.size(); i++) {
////			sum += n[i];
////			if (Map[sum - k]) ans += Map[sum - k];
////			Map[sum]++;
////		}
////
////		return ans;
////	}
////};
//int main() {
//
//	system("pause");
//	return 0;
//}