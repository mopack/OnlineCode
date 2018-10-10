//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
////4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int divide(int A0, int B0) {
//		if (A0 == INT_MIN && B0 == -1) return INT_MAX;
//
//		bool Neg = (A0 > 0) ^ (B0 > 0);
//		unsigned int A = abs(A0);
//		unsigned int B = abs(B0);
//		int Count = 0;
//
//		for (int i = 31; i >= 0; i--) {
//			if ((A >> i) >= B) {
//				Count = Count << 1 | 1;  // Reminder
//				A -= B << i;
//			}else {
//				Count = Count << 1;
//			}
//		}
//
//		return Neg ? -Count : Count;
//	}
//};
//
//// 1080ms/PR5
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int divide(int A0, int B0) {
//		if (A0 == INT_MIN && B0 == -1) return INT_MAX;
//
//		bool Neg = (A0 < 0) ^ (B0 < 0);
//		unsigned int A = abs(A0), B = abs(B0), Count = 0;
//
//		if (B == 1) {
//			Count = A;
//		}else{
//			while (A >= B) {
//				A -= B; Count++;
//			}
//		}
//
//		if (Neg) Count = -Count;
//		return Count;
//	}
//};
//
//int main() {
//	class Solution az;
//	cout<<az.divide(-1, 1);
//	system("pause");
//	return 0;
//} 
