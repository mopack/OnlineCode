//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//#include <queue>
//#include <functional>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/16ms/PR35
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//struct EF {
//	int e, f;
//	bool operator<(EF t)const {
//		return f > t.f;
//	}
//};
//class Solution {
//public:
//	vector<int> topKFrequent(vector<int>& nums, int K) {
//		unordered_map<int, int>Map;
//		for (auto x : nums) Map[x]++;
//		vector<EF>v(Map.size()); int i = 0;
//		for (auto &m : Map) {
//			v[i].e = m.first;
//			v[i].f = m.second;
//			i++;
//		}
//		sort(v.begin(), v.end());
//
//		vector<int>Ans;
//		for (int i = 0; i < K; i++)
//			Ans.push_back(v[i].e);
//		return Ans;
//	}
//};
//// 8ms/PR100 NlogN
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> topKFrequent(vector<int>& nums, int k) {
//		unordered_map<int, int> map;
//		for (auto x : nums) map[x]++;
//		
//		vector<pair<int, int>>vp(map.begin(), map.end());
//		sort(vp.begin(), vp.end(), [](pair<int, int>a, pair<int, int>b) { return a.second > b.second;});
//		
//		vector<int>ans;
//		for (int i = 0; i < k; i++) ans.push_back(vp[i].first);
//		return ans;
//	}
//};
//
//
//// 8ms / PR100 NlogK
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> topKFrequent(vector<int>& nums, int k) {
//		unordered_map<int, int> map;
//		for (auto x : nums) map[x]++;
//
//		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q; // {f, ele}
//		for (auto &x : map) { //N
//			q.push({ x.second, x.first }); //logk
//			if (q.size() > k)q.pop(); //1
//		}
//
//		vector<int>ans(k);
//		for (int i = k - 1; i >= 0; i--) {
//			ans[i] = q.top().second; 
//			q.pop();
//		}
//		return ans;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<int>x = { 1,1,1,2,2,3 }; int k = 2;
//	az.topKFrequent(x, 2);
//	system("pause");
//	return 0;
//} 