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
//class UnionFind {
//public:
//	int N;
//	vector<int>P, Size;
//	UnionFind(int _N) : N(_N) {
//		Size = vector<int>(N, 1);
//		for (int i = 0; i < N; i++)P.push_back(i);
//	}
//	int Find(int x) {
//		int p, r, pn;
//		for (p = x; p != P[p]; p = P[p]);
//		r = p;
//		for (p = x; p != P[p];) {
//			pn = P[p];
//			P[p] = r;
//			p = pn;
//		}
//		return r;
//	}
//	void Union(int a, int b) {
//		int Fa = Find(a), Fb = Find(b);
//		if (Fa == Fb)return;
//		P[Fb] = Fa;
//		Size[Fa] += Size[Fb];
//	}
//};
//class Solution {
//public:
//	int arrayNesting(vector<int>&A) {
//		UnionFind UF(A.size());
//		for (int i = 0; i != A.size(); i++) 
//			UF.Union(i, A[i]);
//
//		return *max_element(UF.Size.begin(), UF.Size.end());;
//	}
//};
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class UnionFind {
//public:
//	int N;
//	vector<int>P, Size;
//	UnionFind(int _N) : N(_N) {
//		Size = vector<int>(N, 1);
//		for (int i = 0; i < N; i++)P.push_back(i);
//	}
//	int Find(int x) {
//		if (x == P[x]) return x;
//		return P[x] = Find(P[x]);
//	}
//	void Union(int a, int b) {
//		int Fa = Find(a), Fb = Find(b);
//		if (Fa == Fb)return;
//		P[Fb] = Fa;
//		Size[Fa] += Size[Fb];
//	}
//};
//class Solution {
//public:
//	int arrayNesting(vector<int>&A) {
//		UnionFind UF(A.size());
//		for (int i = 0; i != A.size(); i++)
//			UF.Union(i, A[i]);
//
//		return *max_element(UF.Size.begin(), UF.Size.end());;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<int>x = { 5,4,0,3,1,6,2 };
//	az.arrayNesting(x);
//	system("pause");
//	return 0;
//} 