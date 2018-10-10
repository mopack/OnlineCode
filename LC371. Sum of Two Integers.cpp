//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <bitset>
//
//using namespace std;
//
////Sol: . Present: AC: Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int getSum(int a, int b) {
//		int two = 1, d = 0; bool c = 0; // init
//		while (a||b||c) {
//			if ((a & 1) && (b & 1) && c) { //3
//				d |= two;
//				c = 1;
//			}else if( ((a&1) && (b & 1))|| ((a & 1) && c)|| (c && (b & 1))){ //2
//				c = 1;
//			}else if(!(a & 1) && !(b & 1) && !c){ // 0
//				c = 0;
//			}else{ // 1
//				d |= two;
//				c = 0;
//			}
//			if (two < 0) break;
//			b >>= 1; a >>= 1; two <<= 1;
//		}
//		return d;
//	}
//};
//
////Sol: . Present: AC: Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int getSum(int a, int b) {
//		while (b) {
//			int an = a ^ b;        //¾l¼Æ
//			int bn = (a & b) << 1; //¶i¦ì 
//			a = an, b = bn;
//		}
//		return a;
//	}
//};
//
//int main() {
//	Solution az;
//	//int n = 1073741824;
//	//cout << n * 2 << endl;
//	cout << az.getSum(-1,1);
//	//int n = -10, one = 1;
//	//n = ~n;
//	//n |= one;
//	//cout<<bitset<32>(n<<1).to_string()<<endl;
//	//cout << bitset<32>(1).to_string() << endl;
//	system("pause");
//	return 0;
//} 