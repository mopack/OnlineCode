//#include <iostream>
//#include <cstdlib>
//
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//
//using namespace std;
//
//
//
//int numofquest;
//int paysum;
//
//int type[] = { 1,5,10,20,50 };
//int pay[5], ret[5];
//int ask;
//int change[5][5], chsum[5];
//
//void reflashchange() {
//	for (int i = 0; i <= 4; i++) {
//		chsum[i] = 0;
//	}
//
//	for (int i = 0; i <= 4; i++) {
//		for (int j = i + 1; j <= 5; j++) {
//			change[i][j] = pay[i] * type[i] / type[j];
//			chsum[j] += change[i][j];
//		}
//	}
//	return;
//}
//void exchange() {
//
//}
//int main() {
//	freopen("pb.in", "rt", stdin); freopen("pb.out", "wt", stdout);
//	cin >> numofquest;
//	while (numofquest--) {
//		//input
//		cin >> ask;
//
//		paysum = 0;
//		for (int i = 0; i < 5; i++) {
//			cin >> pay[i];
//			paysum += pay[i];
//		}
//		for (int i = 0; i < 5; i++) {
//			cin >> ret[i];
//		}
//
//		// remove the exchangable
//		for (int i = 1; i <= 4; i++) {
//			reflashchange();
//
//			int d = min(ret[i], chsum[i]);
//			ret[i] -= d;
//			exchange(d,i);
//		}
//
//	}
//	return 0;
//}