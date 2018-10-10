//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int Given, Count;
//
//	while (cin >> Given && Given) {
//		Count = 0;
//		
//		int left, right, sum;
//		for (sum = 0, right = 1; sum < Given; sum += right, right++);
//
//		for (left = 1, right--; left <= Given / 2;) {
//			if (sum > Given) {
//				sum -= (left++);
//			}else{
//				if (sum == Given) {
//					printf("\n%d = sum from %d to %d", Given, left, right);
//					Count++;
//				}
//				sum += (++right);
//			}
//		}
//		printf("\nCount=%d\n", Count);
//	}
//
//	system("pause");
//	return 0;
//}