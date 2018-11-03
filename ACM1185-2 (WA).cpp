//#include <iostream>
//#include <cstdlib>
//#include <string>
//
//using namespace std;
//
//int pow10[9], d[10000001];
//
//int main() {
//	d[1] = 0; d[2] = 0; d[3] = 0; d[4] = 1;
//	int i1, i2, i3, idig = 0, itask = 10, f3, f2, f1, d3=0, d2 = 2, d1 = 4;
//
//	pow10[0] = 1;
//	for (int i = 1; i <= 8; i++)pow10[i] = pow10[i - 1] * 10;
//
//	//int x = 1;
//	//for (int i = 1; i <= 10; i++) {
//	//	x *= i;
//	//	printf("%d! = %d\n", i, x);
//	//}
//
//	for (int i = 5; i <= 50; i++) {//10000000
//		
//		if (i == itask) {
//			idig++;
//			itask *= 10;
//		}
//		// get i's front
//		if (idig <= 1) {
//			i3 = 0;
//			i2 = i/10;
//			i1 = i%10;
//		}
//		else {
//			i3 = i / pow10[idig];
//			i2 = (i % pow10[idig]) / pow10[idig - 1];
//			i1 = (i % pow10[idig-1])/ pow10[idig - 2];
//		}
//
//		//if (i == 7) { //testing
//		//	i = i;
//		//}
//
//		// multi
//		int t;
//
//		t = (d3*100 + d2 * 10 + d1)*(i3*100 + i2 * 10 + i1);
//		
//		d[i] = d[i - 1] + idig;
//
//		int dd = (d3 > 0) ? 2 : (d2 > 0) ? 1 : 0;
//		int ii = (idig >= 2) ? 2 : idig;
//
//		if (t >= pow10[ii + dd + 1])d[i]++;
//
//		for (int j = 4; j >= 2; j--) {
//			if (t >= pow10[j]) {
//				f3 = t / pow10[j];
//				f2 = (t % pow10[j]) / pow10[j - 1];
//				f1 = (t % pow10[j - 1]) / pow10[j - 2];
//				break;
//			}
//		}
//		if (t < 100) {
//			f3 = 0;
//			f2 = (t % 100)/10;
//			f1 = t % 10;
//		}
//		
//		//printf("%d * %d = %d d=%d\n", d3*100 + d2 * 10 + d1, i3 * 100 + i2 * 10 + i1, f3 * 100 + f2 * 10 + f1, d[i]);
//
//		d3 = f3;
//		d2 = f2;
//		d1 = f1;
//	}
//
//	int qn,a;
//	cin >> qn;
//	for (int q = 1; q <= qn; q++) {
//		cin >> a;
//		cout << d[a]+1 << endl;
//	}
//	//system("pause");
//	return 0;
//}