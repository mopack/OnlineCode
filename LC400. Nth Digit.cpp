//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//unsigned int d[11] = { 0, 9, 189, 2889, 38889, 488889, 5888889, 68888889, 788888889, 2147483648};
//unsigned int ten[11] = {1,1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000 };
//class Solution { //AC 0ms PR100.00%
//public:
//	int findNthDigit(int n) {
//      //method: input:n => get base, N(=n-d[base-1]) => N/base & N%base =>
//		int b, N, Num; char line[12];
//		for (b = 1; d[b] < n; b++);
//		N = n - d[b - 1] - 1; // index
//		Num = ten[b] + N/b;
//		sprintf(line, "%d", Num);
//		string s(line);
//		return s[N%b] - 48;
//	}
//};
//int main() {
//	//string s = "123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100";
//  // 
//	class Solution az;
//	//az.findNthDigit(100000000);
//	//for (int i = 0; i < s.size(); i++) {
//	//	if (s[i] != az.findNthDigit(i + 1) + 48)cout << i+1 << ',';
//	//	printf("%3d:%d\t", i + 1, az.findNthDigit(i+1));
//	//	if ((i + 1) % 9 == 0)cout << endl;
//	//}
//
//	//for (int i = 0; i < s.size(); i++) {
//	//	printf("%3d:%c\t", i + 1, s[i]);
//	//	if ((i+1) % 9 == 0)cout << endl;
//	//}
//	//long long sum = 0, ten = 1;
//	//for (int i = 1; i <= 10; i++) {
//	//	sum += 9 * ten*i;
//	//	printf("%2d: %lld\n", i, sum);
//	//	ten *= 10;
//	//}
//	//for (int i = 10; i <= 188; i += 2) {
//	//	printf("%3d: %c\t", i + 1, s[i]);
//	//	if ((i - 10) % 20 == 18)cout << endl;
//	//}
//	//for (int ten = 1; ten > 0; cout << ten << ',', ten*=10);
//	system("pause");
//	return 0;
//} 