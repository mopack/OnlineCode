//#include <iostream>
//#include <cstdlib>
//#include <vector>
//using namespace std;
//
//
//
//class Solution {
//public:
//
//	#define NEXT(x) x = Next[x]
//
//	int countPrimes(int n) {
//		n--;
//		if (n <= 1)return 0;
//
//		vector<int>Back(n+1); //vector->速度慢，但是容量很大
//		vector<int>Next(n+1);
//
//		// init
//		int Count = 0;
//		for (int i = 2; i <= n; i++)
//			Back[i] = i - 1, Next[i] = i + 1;
//		Back[2] = Next[n] = NULL;
//
//		// sieve
//		for (int prime = 2; prime * prime <= n; NEXT(prime))
//			for (int fact = prime; prime * fact <= n; NEXT(fact))
//				for (int x = prime * fact; x <= n; x *= prime){
//					Next[Back[x]] = Next[x]; 
//					Back[Next[x]] = Back[x]; 
//				}
//
//
//		for (int i = 2; i != NULL; NEXT(i)) {
//			//if (Count % 8 == 0)cout << endl;
//			//cout << i << ' ';
//			Count++;
//		}
//		return Count;
//	}
//}ans;
//
//int main() {
//	cout << ans.countPrimes(2) << endl;
//
//	system("pause");
//	return 0;
//}