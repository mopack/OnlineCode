//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	vector<int> x = {1,2,3,-5,4};
//
//	for (int i = 1; i < x.size(); i++) x[i] += x[i - 1]; //²Ö¶i©M
//	sort(x.begin(), x.end());
//
//	int i;
//	for (i = 1; i < x.size() && x[i] != x[i - 1]; i++);
//	cout << ((i == x.size()) ? "NO" : "YES") << endl;
//
//
//	system("pause");
//	return 0;
//}