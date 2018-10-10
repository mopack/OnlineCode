//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	bool lemonadeChange(vector<int>&bills) {
//		int a[2] = { 0,0};
//		for (auto b : bills) {
//			if (b == 5) {
//				a[0]++;
//			}else if(b == 10){
//				if (a[0] <= 0)return 0;
//				a[0]--; a[1]++;
//			}
//			else {
//				if (a[1] && a[0]) {
//					a[1]--; a[0]--;
//				}
//				else if (a[0] >= 3){
//					a[0] -= 3;
//				}
//				else return 0;
//			}
//		}
//		return 1;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 