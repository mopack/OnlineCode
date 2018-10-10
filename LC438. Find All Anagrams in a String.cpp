//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int d[26] = {};
//	bool all0() {
//		for (auto x : d)if (d[x])return 0;
//		return 1;
//	}
//	vector<int> findAnagrams(string s, string p) {
//		vector<int> ans;
//		if (s.size() < p.size())return ans;
//
//		for (auto x : p)d[x - 97]++;
//		for (int i = 0; i < p.size(); i++)d[s[i] - 97]--;
//		if (all0())ans.push_back(0);
//
//		for (int i = 1; i + p.size() <= s.size(); i++) {
//			d[s[i - 1] - 97]++;
//			d[s[i + p.size() - 1] - 97]--;
//			if (all0())ans.push_back(i);
//		}
//		return ans;
//	}
//};
//int main() {
//	class Solution az;
//	vector<int> ans = az.findAnagrams("baa", "aa");
//	for (auto x : ans)cout << x << endl;
//	system("pause");
//	return 0;
//} 