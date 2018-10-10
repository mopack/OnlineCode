//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <bitset>
//
//using namespace std;
//
//bool isp[] = { 0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0 };
//
//class Solution {
//public:
//	int countPrimeSetBits(int L, int R) {
//		int ans = 0;
//		for (int i = L; i <= R; i++)
//			if (isp[bitset<32>(i).count()])ans++;
//		return ans;
//	}
//}az;
//
//
////int N = 32;
////int Next[1000001], Back[1000001]; 
////inline void NEXT(int &x) { x = Next[x]; }
////int main() {
////	freopen("in.txt", "rt", stdin); freopen("out4.txt", "wt", stdout);
////	for (int i = 2; i <= N; i++)Next[i] = i + 1, Back[i] = i - 1;
////	Next[N] = Back[2] = NULL; Next[0] = 0;
////
////	for (int i = 2; i*i <= N; NEXT(i))
////		for (int j = i; i*j <= N; NEXT(j))
////			for (int m = i*j; m <= N; m *= i) {
////				Next[Back[m]] = Next[m];
////				Back[Next[m]] = Back[m];
////			}
////	int P = 2;
////	for (int i = 0; i < N; i++) {
////		if (i == P) {
////			printf("1,");
////			NEXT(P);
////		}
////		else printf("0,");
////	}
////	printf("0};");
////	return 0;
////}
//int main() {
//	return 0;
//} 