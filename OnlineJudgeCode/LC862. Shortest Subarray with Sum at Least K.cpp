//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <deque>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//// ·Æ°Êµ¡¤f Sliding Window 44ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int shortestSubarray(vector<int>&A, int K) {
//		vector<long long> AccSum(A.size() + 1, 0);
//		for (int i = 1; i <= A.size(); i++)
//			AccSum[i] = AccSum[i - 1] + A[i - 1];
//		int Ans = INT_MAX;
//
//		deque<int> q;
//		for (int E = 0; E <= A.size(); E++) {
//			while (q.size() && AccSum[E] - AccSum[q.back()] <= 0) 
//				q.pop_back();
//			while (q.size() && AccSum[E] - AccSum[q.front()] >= K) {
//				Ans = min(Ans, E - q.front());
//				q.pop_front();
//			}
//			q.push_back(E);
//		}
//		return (Ans == INT_MAX) ? -1 : Ans;
//	}
//};
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR // TLE
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////class Solution {
////public:
////	int shortestSubarray(vector<int>&A, int K) {
////		int S = 0, E = 0, Sum = A[0], Ans = INT_MAX;
////		while (1) {
////			if (Sum >= K) {
////				Ans = min(Ans, E - S + 1);
////				if (++S == A.size()) break;
////				E = S; Sum = A[S];
////			}else{
////				if (++E == A.size() || E - S + 1 >= Ans) {
////					if (++S == A.size()) break;
////					E = S; Sum = A[S];
////				}else{
////					Sum += A[E];
////				}
////			}
////		}
////		return (Ans == INT_MAX) ? (-1) : Ans;
////	}
////};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<int> x = { 1 };
//	cout<<az.shortestSubarray(x, 1);
//	system("pause");
//	return 0;
//} 