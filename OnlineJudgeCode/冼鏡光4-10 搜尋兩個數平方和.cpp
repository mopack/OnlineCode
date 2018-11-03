//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//int n, x, y, t;
//vector<pair<int, int>> ans;
//
//int main() {
//	while (cin >> n && n) {
//		// init
//		ans.clear();
//
//		x = 1;
//		y = int(sqrt(double(n) + 0.5));
//
//		while (x <= n && y > 0 && x<=y) {
//			t = x*x + y*y;
//			if ( t == n) {
//				ans.push_back(make_pair(x, y));
//				x++; y--;
//			}else if( t > n){
//				y--;
//			}else{
//				x++;
//			}
//		}
//
//		// output
//		for (int i = 0; i < ans.size(); i++)
//			printf("(%d, %d)=%d\n", ans[i].first, ans[i].second, ans[i].first*ans[i].first + ans[i].second*ans[i].second);
//	}
//
//
//	system("pause");
//	return 0;
//}