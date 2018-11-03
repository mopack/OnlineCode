//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <bitset>
//using namespace std;
////Sol: . Present: AC: 25Lines/12ms/PR97
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool canWin(int N, int Total, vector<char>&m, int use) {
//		if (~m[use]) return m[use];
//		m[use] = 0;
//		for (int i = 0; i<N; ++i) {
//			int mask = 1 << i;
//			if (use&mask) continue;
//			if (i + 1 >= Total || !canWin(N, Total - i - 1, m, use | mask)) {
//				m[use] = 1;
//				return m[use];
//			}
//		}
//		return m[use];
//	}
//	bool canIWin(int N, int Total) {
//		if (N >= Total) return 1;
//		int total = N*(N + 1) / 2;
//		if (total<Total) return 0;
//		if (total == Total) return N & 1;
//		if (Total <= 0)    return 1;
//		vector<char> m(1 << N, -1);
//		return canWin(N, Total, m, 0);
//	}
//};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool canWin(int N, int Total, int Key, vector<int>&d) {
//		if (d[Key] != -1) return d[Key];
//
//		for (int i = N; i >= 1; i--) { // both increasing/decreasing are acceptable 
//			if (Key & (1 << i)) continue;
//			if (i >= Total || !canWin(N, Total - i, Key | (1 << i), d)) {
//				return d[Key] = 1;
//			}
//		}
//		return d[Key] = 0;
//	}
//	bool canIWin(int N, int Total) {
//		if (N*(N + 1) / 2 < Total) return 0;
//
//		vector<int>d(1 << (N + 1), -1); // 1:can, 0:can't, -1:unknown
//		return canWin(N, Total, 0, d);
//	}
//};
//

//static int fast = []() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool CanWin(int Key, int Total, int N, bitset<1 << 21>&vis, bitset<1 << 21>&can) {
//		if (vis.test(Key)) return can.test(Key);
//		vis.set(Key);
//
//		for (int i = 1; i <= N; i++) {
//			if ((1 << i) & Key) continue;
//			if (i >= Total || !CanWin(Key | (1 << i), Total - i, N, vis, can)) return can[Key] = 1;
//		}
//		return 0;
//	}
//	bool canIWin(int N, int Total) {
//		if (N * (N + 1) / 2 < Total) return 0;
//		bitset<1 << 21>vis, can;
//		return CanWin(0, Total, N, vis, can);
//	}
//};

////Sol: . Present: AC: 25Lines/12ms/PR97
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////class Solution {
////public:
////	bitset<1 << 20>W, L;
////	int N;
////	bool canWin(int T, int State) {
////		if (T <= 0 || L[State]) return 0;
////		if (W[State]) return 1;
////
////		for (int i = 0; i < N; i++) {
////			if (State & (1 << i)) continue;
////			if (!canWin(T - (i + 1), State | (1 << i))) {
////				W.set(State); return 1;
////			}
////		}
////		L.set(State); return 0;
////	}
////	bool canIWin(int N, int Total) {
////		this->N = N;
////		if (Total <= 0)return 1;
////		int total = N*(N + 1) / 2;
////		if (total <  Total) return 0;
////		if (total == Total) return N & 1;
////		return canWin(Total, 0);
////	}
////};
//
////Sol: . Present: AC: 23Lines/8ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	vector<char> s; // -1:unknown, 1:win, 0:lose
////	bool canWin(int N, int T, int State) {
////		if (T <= 0) return 0;
////		if (s[State]!=-1) return s[State];
////
////		for (int i = 0; i < N; i++) {
////			if (State & (1 << i)) continue;
////			if (!canWin(N, T - (i + 1), State | (1 << i))) return s[State] = 1;
////		}
////		return s[State] = 0;
////	}
////	bool canIWin(int N, int Total) {
////		if (Total <= 0)return 1;
////		int total = N*(N + 1) / 2;
////		if (total <  Total) return 0;
////		if (total == Total) return N & 1;
////		s = vector<char>(1 << N, -1);
////		return canWin(N, Total, 0);
////	}
////};
////class Solution { // Sol1: TLE (no hash, TLE!!)
////public:
////	int s[21];
////	bool Win(int Total) { //Can I Win?
////		for (int i = 1; i <= s[0]; i++) if (s[i] >= Total)return 1;
////
////		for(int i = 1; i<= s[0];i++){
////			int si = s[i], ss0 = s[s[0]];
////			s[i] = ss0; s[0]--;
////			bool b1 = Win(Total - i);
////			s[i] = si; s[++s[0]] = ss0;
////			if (b1 == 0)return 1;
////		}
////		return 0;
////	}
////	bool canIWin(int N, int Total) {
////		if (Total <= N)return 1;
////		for (int i = 1; i <= N; i++)s[i] = i;
////		s[0] = N;
////		return Win(Total);
////	}
////};
//
//int main() {
//	Solution az;
//	cout<<az.canIWin(20,210);
//	system("pause");
//	return 0;
//} 