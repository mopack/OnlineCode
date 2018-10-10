//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int findDuplicate(vector<int>& A) {
//		int fast = A[A[0]], slow = A[0]; 
//		for (        ; fast != slow; fast = A[A[fast]], slow = A[slow]);
//		for (fast = 0; fast != slow; fast = A[fast], slow = A[slow]);
//		return fast;
//	}
//};
////
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int findDuplicate(vector<int>& A) {
//		int fast = 0, slow = 0;
//		do fast = A[A[fast]], slow = A[slow]; while (fast != slow);
//		for (fast = 0; fast != slow; fast = A[fast], slow = A[slow]);
//		return fast;
//	}
//};
////
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int findDuplicate(vector<int>& A) {
//		int fast = 0, slow = 0;
//		do fast = A[A[fast]], slow = A[slow]; while (fast != slow);
//		fast = 0;
//		while (fast != slow) fast = A[fast], slow = A[slow];
//		return fast;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 