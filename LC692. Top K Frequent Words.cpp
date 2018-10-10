//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//bool Compare(pair<string, int>&a, pair<string, int>&b) {
//	if (a.second == b.second) return a.first < b.first;
//	return a.second > b.second;
//}
//class Solution {
//public:
//	vector<string> topKFrequent(vector<string>&words, int K) {
//		unordered_map<string, int>Map;
//		for (auto &s : words) Map[s]++;
//		vector<pair<string, int>> sn (Map.begin(), Map.end());
//		sort(sn.begin(), sn.end(), Compare);
//
//		vector<string>Ans;
//		for (int i = 0; i < K; i++) {
//			Ans.push_back(sn[i].first);
//		}
//		return Ans;
//	}
//};
//
//class Solution {
//public:
//	vector<string> topKFrequent(vector<string>&words, int K) {
//		unordered_map<string, int>Map;
//		for (auto &s : words) Map[s]++;
//		vector<pair<string, int>> sn(Map.begin(), Map.end());
//		sort(sn.begin(), sn.end(), [](pair<string, int>&a, pair<string, int>&b) {
//			if (a.second == b.second) return a.first < b.first;
//			return a.second > b.second;
//		});
//
//		vector<string>Ans;
//		for (int i = 0; i < K; i++) {
//			Ans.push_back(sn[i].first);
//		}
//		return Ans;
//	}
//};
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	vector<string>x = { "i", "love", "leetcode", "i", "love", "coding" }; int K = 2;
//	class Solution az;
//	az.topKFrequent(x, K);
//	system("pause");
//	return 0;
//} 