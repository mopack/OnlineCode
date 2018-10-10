//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	vector<int> f = { 1,3,4,7,9 };
//	vector<int> g = { 3,5,7,8,10 };
//
//	int ans = 0;
//	for (int fi = 0, gi = 0; fi < f.size() && gi < g.size();) {
//		if (f[fi] < g[gi]) {
//			fi++;
//		}else if(f[fi]>g[gi]){
//			gi++;
//		}
//		else {
//			printf("f[%d]=g[%d]=%d\n", fi, gi, f[fi]); ans++;
//			fi++; gi++;
//		}
//	}
//	cout << ans << endl;
//
//	system("pause");
//	return 0;
//}