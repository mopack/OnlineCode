//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//
//// 240ms/PR30
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
//		int Ans = 0;
//		unordered_map<int, int> AB;
//		for (auto &a : A) {
//			for (auto &b : B) {
//				AB[a + b]++;
//			}
//		}
//		for (auto &c : C) {
//			for (auto &d : D) {
//				Ans += AB[-c - d];
//			}
//		}
//		return Ans;
//	}
//};
//
////80ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
//		int Ans = 0;
//		unordered_map<int, int> AB(A.size() * B.size() * 2);
//		for (auto a : A) {
//			for (auto b : B) {
//				++AB[a + b];
//			}
//		}
//		for (auto c : C) {
//			for (auto d : D) {
//				auto it = AB.find(-c - d);
//				if (it != AB.end()) Ans += it->second;
//			}
//		}
//		return Ans;
//	}
//};
//
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
