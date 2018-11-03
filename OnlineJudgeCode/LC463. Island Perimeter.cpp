//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
////class Solution { //Sol3: AC
////public:
////	int islandPerimeter(vector<vector<int>>&G) {
////		int ans = 0, F, state = 0;// 0:NotOnLand 1:First Land 2:Second Lands
////		int s, e, i, T, C0, D; // D: Counts of ConEdge F & F-1. C0: Counts of inner 0 gap. T: Counts of 1.
////
////		for (F = 0; F < G.size(); F++) {
////			for (s = 0; s < G[F].size() && G[F][s] == 0; s++);
////			if (s < G[F].size()) { if (state <= 1)state++; }
////			else { if (state)break; else continue;}
////			for (e = G[F].size() - 1; e >= 0 && G[F][e] == 0; e--);
////
////			for (C0 = 0, D = 0, T = 0, i = s; i <= e; i++) {
////				if (G[F][i]) {
////					T++;
////					if (state==2 && G[F - 1][i])D++;
////				}else {
////					C0++;
////					while (i + 1 <= e && G[F][i + 1] == 0) i++;
////				}
////			}
////			ans += (1 + C0 + T - D)* 2;
////		}
////		return ans;
////	}
////}az;
////class Solution { //Sol2: AC
////public:
////	int islandPerimeter(vector<vector<int>>&G) {
////		int ans = 0, state = 0;// 0:NotOnLand 1:First Land 2:Second Lands
////		int C0 = 0; // last Count
////		int D = 0; // ConEdge f & f-1
////		int s, e, t, i, Count0, F;
////
////		for (F = 0; F < G.size(); F++) {
////			for (s = 0; s < G[F].size() && G[F][s] == 0; s++);
////			if (s < G[F].size()) { if (state <= 1)state++; }
////			else { if (state)break; else continue;}
////
////			for (e = G[F].size() - 1; e >= 0 && G[F][e] == 0; e--);
////
////			for (Count0 = 0, D = 0, t = 0, i = s; i <= e; i++) {
////				if (G[F][i]) {
////					t++;
////					if (state==2 && G[F - 1][i])D++;
////				}
////				else {
////					Count0++;
////					while (i + 1 <= e && G[F][i + 1] == 0) i++;
////				}
////			}
////			ans += 2 + t + (C0 - D * 2) + Count0 * 2; C0 = t;
////		}
////		ans += C0;
////		return ans;
////	}
////}az;
////class Solution { //Sol1: AC
////public:
////	inline int Count0(vector<int>&G[F]) {
////		int s, e, ans =0;
////		for (s = 0; s < G[F].size() && G[F][s] == 0; s++);
////		for (e = G[F].size() - 1; e >= 0 && G[F][e] == 0; e--);
////		for (int i = s; i <= e; i++) 
////			if (G[F][i] == 0) {
////				ans++;
////				while (i + 1 <= e && G[F][i + 1] == 0) i++;
////			}
////		
////		return ans;
////	}
////	int islandPerimeter(vector<vector<int>>&G) {
////		int C0; // last Count
////		int D; // ConEdG[F]e f & f-1
////		int F, t, ans = 0;
////		// find first land
////		for (F = 0; F < G.size(); F++) {
////			t = 0;
////			for (int i = 0; i < G[F].size(); i++) if (G[F][i]) t++;
////			if (t) {
////				ans = 2 + t; C0 = t; ans += Count0(G[F]) * 2;
////				break;
////			}
////		}
////		// second lands
////		for (F++; F < G.size(); F++) {
////			t = 0; D = 0;
////			for (int i = 0; i < G[F].size(); i++) 
////				if (G[F][i]) {
////					t++;
////					if (G[F - 1][i])D++;
////				}
////			if (t == 0)break;
////			ans += 2 + t + C0 - D * 2 + Count0(G[F]) * 2;
////			C0 = t;
////		}
////		ans += C0 + Count0(G[F - 1]) * 2;
////		return ans;
////	}
////}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 