//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//
//using namespace std;
//
//int main() {
//	vector<int> f = { 1,3,5,7,9 };
//	vector<int> g = { 2,6,8 };
//
//	int ans = 2147483647;
//	for (int fi = 0, gi = 0; fi < f.size() && gi < g.size();) {
//		if (f[fi] >= g[gi]) {
//			ans = min(ans, f[fi] - g[gi]);
//			gi++;
//		}
//		else {
//			ans = min(ans, g[gi] - f[fi]);
//			fi++;
//		}
//	}
//	cout << ans << endl;
//	
//	system("pause");
//	return 0;
//}