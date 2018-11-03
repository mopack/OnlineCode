//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int cursor;
//
//int h_seq(string x) {
//	switch (x[cursor]) {
//		case '0': return 1;
//		case '1':
//			cursor++;
//			if (h_seq(x) == 1) {
//				cursor++;
//				if (h_seq(x) == 1) return 1;
//			}
//			return 0;
//		default: return 0;
//	}
//}
//
//int h_sequence(string x) {
//	cursor = 0;
//	if (h_seq(x) == 1)
//		if (cursor == x.size() - 1)
//			return 1;
//	return 0;
//}
//int main() {
//
//	system("pause");
//	return 0;
//}