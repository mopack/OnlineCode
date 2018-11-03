//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//typedef unsigned int u32;
//
//u32 reverse(u32 n) {
//	//printf("%X\n", (n & 0x000000FF ));
//	//printf("%X\n", (n & 0x0000FF00 ));
//	//printf("%X\n", (n & 0x00FF0000));
//	//printf("%X\n", (n & 0xFF000000) >> 8);
//	//printf("%X\n", (n & 0xFF000000) >> 16);
//	//printf("%X\n", (n & 0xFF000000) >> 24);
//
//	u32 output = (
//		(n & 0x000000FF) << 24|
//		(n & 0x0000FF00) << 8  |
//		(n & 0x00FF0000) >> 8  |
//		(n & 0xFF000000) >> 24 );
//	return output;
//}
//
//int main() {
//	u32 a = 0x12345678;
//	printf("%X\n", reverse(a));
//
//
//	system("pause");
//	return 0;
//}