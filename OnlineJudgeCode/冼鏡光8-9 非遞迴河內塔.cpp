//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//// »¼°jª©¥»
//void t(int n, int s, int m, int e) {
//	if (n == 1) {
//		printf("%d: %d -> %d\n", n, s, e);
//	}
//	else {
//		t(n - 1, s, e, m);
//		printf("%d: %d -> %d\n", n, s, e);
//		t(n - 1, m, s, e);
//	}
//}//t(3, 1, 2, 3);
//
//// «D»¼°jª©¥»
//int n;
//unsigned long NumofMove, Counter;
//vector<int> pin; // loc of disks
//int dir[2]; // 0=pos, 1=neg
//
//int whichDisk() {
//	unsigned long a, b, c, i;
//	a = Counter;
//	Counter = b = a + 1;
//	for (c = a^b, i = 0; c != 0; c >>= 1, i++);
//	return i;
//}
//int main() {
//	cin >> n;
//
//	// re
//	t(n, 1, 2, 3);
//	cout << endl;
//
//	// init
//	NumofMove = (0x01UL << n) - 1; // 2^n-1
//	Counter = 0; 
//
//	if (n & 0x01) { dir[0] = 0; dir[1] = 1; }
//	else { dir[0] = 1; dir[1] = 0; }
//
//	pin.clear();
//	for (int i = 0; i <= n; i++) pin.push_back(1);
//
//	// go
//	for (int i = 1; i <= NumofMove; i++) {
//		int disk = whichDisk();
//		int index = disk & 0x01;
//		int Next = (pin[disk] + dir[index]) % 3 + 1;
//		//printf("%6lu%8d%10d%8d\n", i, disk, pin[disk], Next);
//		printf("%d: %d -> %d\n", disk, pin[disk], Next);
//		pin[disk] = Next;
//	}
//	system("pause");
//	return 0;
//}