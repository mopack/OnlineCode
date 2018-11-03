//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//class Solution { //Sol1: AC (72 ms)
//public:
//	unordered_map<string, int> map;
//	vector<string> findRestaurant(vector<string>& L1, vector<string>& L2) {
//		for (int i = 0; i < L1.size(); i++) map[L1[i]] =  - i - 1;
//		for (int i = 0; i < L2.size(); i++) if (map[L2[i]]) map[L2[i]] = i - map[L2[i]];
//		int minN = 2147483647;
//		for (auto m : map) if (m.second > 0 && m.second < minN) minN = m.second;
//		vector<string> ans;
//		for (auto m : map) if (m.second == minN) ans.push_back(m.first);
//		return ans;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 