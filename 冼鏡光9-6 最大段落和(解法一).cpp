//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//
//int main() {
//	vector<int> x = {1,2,-6,3,-2,4,-1,3,2,-4};
//	int ma = 0; // currently largest sum from 0~i
//	int ans = 0; // currently largest sum
//
//	for (int i = 0; i < x.size(); i++) {
//		if (ma + x[i] < 0) ma = 0;
//		else
//			ma += x[i];
//		ans = max(ans, ma);
//	}
//	cout << ans << endl;
//
//	system("pause");
//	return 0;
//}