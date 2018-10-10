//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
////Sol: . Present: AC: 13Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int majorityElement(vector<int>&A) {
//		int Count = 0, ME;
//		for (auto x : A)
//			if (Count == 0) {
//				ME = x, Count = 1;
//			}else if (x == ME) Count++;
//			else Count--;
//		return ME;
//	}
//};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int majorityElement(vector<int>&A) {
//		int Count = 0, ME;
//		for (auto x : A){
//			if (Count == 0) ME = x;
//			Count += (x == ME)?1:-1;
//		}
//		return ME;
//	}
//};
//
//// 
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int majorityElement(vector<int>&A) {
//		int Count = 0, ME;
//		for (auto x : A) {
//			if (Count == 0) ME = x;
//			Count += (x == ME) ? 1 : -1;
//		}
//		return ME;
//	}
//};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int majorityElement(vector<int>&A) {
//		// Find
//		int MC = 0, MV; // Majority Element's Count & Value
//		for (auto a : A) {
//			if (MC == 0) MV = a;
//			MC += (MV == a) ? 1 : -1;
//		}
//		return MV;
//
//		// Check
//		//if (MC == 0) return -1;
//		//MC = 0;
//		//for (auto a : A) {
//		//	if (a == MV) MC++;
//		//}
//		//return (MC * 2 >= A.size()) ? (MV) : -1;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 