//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//	
//	#define NEXT(x) (x=Next[x])
//
//	int countPrimes(int n) {
//		n--;
//		if (n <= 1)return 0;
//
//		vector<int>Next(n + 1);
//		vector<int>Back(n + 1);
//
//		for (int i = 2; i <= n; i++) {
//			Next[i] = i + 1; Back[i] = i - 1;
//		}
//		Next[n] = Back[2] = NULL;
//
//		for(int prime = 2; prime*prime <= n; NEXT(prime))
//			for(int factor = prime; prime*factor <= n; NEXT(factor))
//				for (int x = prime*factor; x <= n; x*= prime) {
//					Next[Back[x]] = Next[x];
//					Back[Next[x]] = Back[x];
//				}
//
//		int Count = 0;
//		for (int i = 2; i!=NULL; NEXT(i)) {
//			Count++;
//		}
//
//		return Count;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//}