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
//	vector<int> x = { 1,-3,2,1,-2,3,5,2,-4,3 };
//	
//	if (x.size() <= 0) { cout << "0\n"; system("pause"); return 0; }
//
//	int ans=1, last= x.size()-1;
//	for (int i = x.size() - 2; i >= 0; i--) {
//		while (x[i] > abs(x[last])) last--;
//		ans = max(ans, last - i + 1);
//	}
//	cout << ans << endl;
//
//	system("pause");
//	return 0;
//}