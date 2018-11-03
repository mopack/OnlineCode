//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//#include <map>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////8ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////class Solution {
////public:
////	vector<pair<int, int>> kSmallestPairs(vector<int>&A, vector<int>&B, int K) {
////		int N = min(int(A.size() * B.size()), K);
////		vector<pair<int, int>>Ans;
////		if (N == 0) return Ans;
////
////		vector<int> id(A.size(), 0);
////		while (N--) {
////			int mv = INT_MAX, mi = -1;
////			for(int i = 0; i < A.size();i++){
////				int x = A[i] + B[id[i]];
////				if (id[i] < B.size() && x < mv) {
////					mv = x, mi = i;
////				}
////			}
////			Ans.push_back({ A[mi], B[id[mi]++] });
////		}
////		return Ans;
////	}
////};
//// 76ms/PR16
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////class Solution {
////public:
////	vector<pair<int, int>> kSmallestPairs(vector<int>&A, vector<int>&B, int K) {
////		vector<pair<int, int>> Ans;
////		for (auto a : A)
////			for (auto b : B) Ans.push_back({ a, b });
////		sort(Ans.begin(), Ans.end(), [](pair<int, int>a, pair<int, int>b) { return a.first + a.second < b.first + b.second; });
////		if (Ans.size() > K) Ans.resize(K);
////		return Ans;
////	}
////};
//
////276ms
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	vector<pair<int, int>> kSmallestPairs(vector<int>&A, vector<int>&B, int K) {
////		multimap<int, pair<int, int>>Map;
////		int AL = min(int(A.size()), K), BL = min(int(B.size()), K);
////		for (int i = 0; i < AL; i++)
////			for (int j = 0; j < BL; j++)
////				Map.insert({ A[i] + B[j],{ A[i],B[j] } });
////
////		vector<pair<int, int>> Ans;
////		int N = min(K, int(Map.size()));
////		auto it = Map.begin();
////		for (int i = 1; i <= N; i++, it++) {
////			Ans.push_back(it->second);
////		}
////		return Ans;
////	}
////};
//////300ms
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	vector<pair<int, int>> kSmallestPairs(vector<int>&A, vector<int>&B, int K) {
////		multimap<int, pair<int, int>>Map;
////		int AL = min(int(A.size()), K), BL = min(int(B.size()), K);
////		for(int i = 0; i < AL; i++)
////			for(int j = 0; j < BL; j++)
////				Map.insert({ A[i] + B[j], {A[i],B[j]} });
////
////		vector<pair<int, int>> Ans;
////		int N = min(K, int(Map.size()));
////		auto it = Map.begin();
////		for (int i = 1; i <= N; i++, it++) {
////			Ans.push_back(it->second);
////		}
////		return Ans;
////	}
////};
//
////68ms
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//struct Comp {
//	bool operator()(pair<int, int>a, pair<int, int>b) {
//		return a.first + a.second < b.first + b.second;
//	}
//};
//class Solution {
//public:
//	vector<pair<int, int>> kSmallestPairs(vector<int>&A, vector<int>&B, int K) {
//		priority_queue<pair<int, int>, vector<pair<int, int>>, Comp> q; //MaxHeap
//		for(auto a : A)
//			for (auto b : B) {
//				q.push({ a, b });
//				if (q.size() > K) q.pop();
//			}
//
//		vector<pair<int, int>> Ans(q.size());
//		for (int i = q.size() - 1; !q.empty(); i--, q.pop())
//			Ans[i] = q.top();
//		return Ans;
//	}
//};
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<int> a = { 1,7,11 }, b = { 2, 4, 6 }; int k = 3;
//	az.kSmallestPairs(a, b, k);
//	system("pause");
//	return 0;
//} 