//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> x;
//
//pair<int, int> find1() { //2n-3­Ó¤ñ¸û
//	int a1 = max(x[0], x[1]);
//	int a2 = min(x[0], x[1]);
//
//	for (int i = 2; i < x.size(); i++) {
//		if (x[i] > a1) {
//			a2 = a1; a1 = x[i];
//		}
//		else if (x[i] > a2){
//			a2 = x[i];
//		}
//	}
//	return make_pair(a1, a2);
//}
//
//pair<int, int> fs(int s, int e) {
//	if (s > e) return make_pair(-2147483647, -2147483647);
//	if (s == e) return make_pair(x[s], -2147483647);
//
//
//	pair<int, int> a1, a2, ans;
//
//	int m = (s + e) / 2;
//	a1 = fs(s, m);
//	a2 = fs(m + 1, e);
//
//	if (a1.first > a2.first) {
//		ans.first = a1.first;
//		ans.second = (a1.second > a2.first) ? a1.second : a2.first;
//	}
//	else {
//		ans.first = a2.first;
//		ans.second = (a2.second > a1.first) ? a2.second : a1.first;
//	}
//	return ans;
//}
//
//pair<int, int> find2() {
//	return fs(0, x.size() - 1);
//}
//
//int main() {
//	x = { 1,2,3,4,5,6,7,8 };
//
//	pair<int, int> Ans;
//	Ans = find1();
//	printf("(%d,%d)\n", Ans.first, Ans.second);
//
//	Ans = find2();
//	printf("(%d,%d)\n", Ans.first, Ans.second);
//
//	system("pause");
//	return 0;
//}