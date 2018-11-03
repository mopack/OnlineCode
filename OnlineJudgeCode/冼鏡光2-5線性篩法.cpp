//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//typedef unsigned long ul;
//ul Back[1001], Next[1001];
//ul n, Count;
//
//inline void NEXT(int &x) {
//	x = Next[x];
//}
//inline void REMOVE(int &x) {
//	Next[Back[x]] = Next[x];
//	Back[Next[x]] = Back[x];
//}
//
//int main() {
//
//
//	while (cin >> n && n) {
//		// init
//		Count = 0;
//		for (int i = 2; i <= n; i++)
//			Back[i] = i - 1, Next[i] = i + 1;
//		Back[2] = Next[n] = NULL;
//
//		// sieve
//		for (int prime = 2; prime * prime <= n; NEXT(prime))
//			for (int fact = prime; prime * fact <= n; NEXT(fact))
//				for (int mult = prime * fact; mult <= n; mult *= prime)
//					REMOVE(mult);
//
//		//// simulate-sieve
//		//for (int i = 2; i*i <= n; NEXT(i))	// prime
//		//	for (int j = i; i*j <= n; NEXT(j))	// factor
//		//		for (int m = i*j; m <= n; m *= i)
//		//			REMOVE(m);
//
//		for (int i = 2; i != NULL; NEXT(i)) {
//			if (Count % 8 == 0)cout << endl;
//			cout << i << ' ';
//			Count++;
//		}
//		cout <<endl << "Total=" << Count << endl;
//	}
//
//	return 0;
//}