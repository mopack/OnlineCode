//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol1: Coding: 2min/12lines, Present: AC: 12ms/100PR
//static int fast = []() {ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL); return 0; }();
//class Solution {
//public:
//	vector<vector<int>> transpose(vector<vector<int>>& A) {
//		int N = A.size(), M = A[0].size();
//		vector<vector<int>> B(M, vector<int>(N, 0)); //***** 先賦與值，速度較快!!
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < M; j++)
//				B[j][i] = A[i][j];
//		return B;
//	}
//};
//
////Sol1: Coding: 2min/12lines, Present: AC: 16ms/98PR
//static int fast = []() {ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL); return 0; }(); 
//class Solution {
//public:
//	vector<vector<int>> transpose(vector<vector<int>>& A) {
//		int N = A.size(), M = A[0].size();
//		vector<vector<int>> B(M, vector<int>(N));
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < M; j++)
//				B[j][i] = A[i][j];
//		return B;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 