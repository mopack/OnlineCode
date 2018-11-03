//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//#include <unordered_map>
//using namespace std;
//
//// UnorderMap 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> twoSum(vector<int>&A, int Target) {
//		unordered_map<int, int>Map; Map.reserve(A.size()); // {v, i}
//		for (int i = 0; i != A.size(); i++) {
//			auto it = Map.find(Target - A[i]);
//			if (it != Map.end()) return{ i, it->second };
//			Map.insert({ A[i], i });
//		}
//	}
//};
//
//// Struct-Sort Method 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> twoSum(vector<int>&A, int Target) {
//		vector<pair<int, int>>P; P.reserve(A.size()); // {A[i], i}
//		for (int i = 0; i != A.size(); i++)
//			P.emplace_back(A[i], i);
//		sort(P.begin(), P.end());
//
//		vector<int>V; V.reserve(A.size());
//		for (auto &p : P) V.emplace_back(p.first);
//
//		for (int k = 0; k != P.size(); k++) {
//			int i = P[k].second;
//			auto it = lower_bound(V.begin() + k + 1, V.end(), Target - A[i]);
//			if (it != V.end() && (*it) == (Target - A[i])) {
//				int j = P[it - V.begin()].second;
//				if (i != j) return{ i, j };
//			}
//		}
//	}
//};
//
//// Map Method. 4ms/PR99.
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> twoSum(vector<int>&A, int Target) {
//		map<int, int>map;
//		for (int i = 0; i != A.size(); i++) map.insert({ A[i], i });
//
//		for (int i = 0; i != A.size(); i++) {
//			auto it = map.lower_bound(Target - A[i]);
//			if (it != map.end() && ((*it).first == (Target - A[i])) && i != (*it).second) {
//				return{ i, (*it).second };
//			}
//		}
//	}
//};
//
//int main() {
//	class Solution az;
//	vector<int> x = { -1,-2,-3,-4,-5 };
//	az.twoSum(x, -8);
//
//	system("pause");
//	return 0;
//}