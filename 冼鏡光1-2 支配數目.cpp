//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	vector<int> f = { 1,3,5,7,9 };
//	vector<int> g = { 2,3,4,7,8 };
//	
//	int ans = 0;
//	for (int fi = 0, gi = 0; fi < f.size() && gi < g.size();) {
//		if (f[fi] <= g[gi]) {
//			fi++;
//		}
//		else {
//			gi++;
//			ans += f.size() - fi;
//			//cout << f.size() - fi << ",";
//		}
//	}
//	cout << ans << endl;
//
//	system("pause");
//	return 0;
//}