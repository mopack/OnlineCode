//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//typedef long long ll;
//
//ll ipart(int n, int maxi) {
//	if (n == 1 || maxi == 1)
//		return 1;
//	if (n < maxi)
//		return ipart(n, n);
//	if (n == maxi)
//		return 1 + ipart(n, maxi - 1);
//
//	return ipart(n, maxi - 1) + ipart(n - maxi, maxi);
//}
//
//
//int main() {
//	int n;
//	while (cin >> n && n) {
//		cout << ipart(n, n) << endl;
//	}
//	return 0;
//}