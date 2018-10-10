//#include <iostream>
//#include <cstdlib>
//using namespace std;
//inline void flip_digit(int &x) { x  = ((x == 0) ? 1 : 0);}
//inline void flip(int &x) {x =  1 - x;}
//int main() {
//	int d[20], pos[20];
//	int even, n, count;
//	while (cin >> n && n) {
//		count = 0;
//
//		cout << endl;
//		for (int i = 0; i < n; i++) {
//			d[i] = 0; cout << '0';
//		}
//		cout << " : {}\n";
//
//		even = 1;
//		while (1) {
//			if (even) 
//				flip_digit(d[0]);
//			else{
//				int i;
//				for (i = 0; i < n && d[i] == 0; i++);
//				if (i == n - 1) break;
//				flip_digit(d[i + 1]);
//			}
//			count = 0;
//			for (int i = n - 1; i >= 0; i--) {
//				cout << d[i];
//				if (d[i] == 1)pos[count++] = i + 1;
//			}
//			cout << " : {" << pos[count - 1];
//
//			for (int i = count - 2; i >= 0; i--) cout << "," << pos[i];
//			cout << "}\n";
//
//			flip(even);
//		}
//	}
//
//	return 0;
//}