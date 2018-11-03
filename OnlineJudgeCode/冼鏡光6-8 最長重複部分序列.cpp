//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//string s = "abcabcabcabcabcabcabcabc";  //text
//string p = "abc";
//vector<int>loc;
//
//bool subs(int n) { //修改自6-7；p^n是否為s的子序列
//	int Count;
//	loc.clear();
//
//	if (p.size() > s.size())return 0;
//
//	for (int i = 0, j = 0; i < s.size() && j < p.size(); j++) {
//		Count = 0;
//		do {
//			for (; i < s.size() && s[i] != p[j]; i++);
//			if (i >= s.size()) return 0;
//			loc.push_back(i++);
//			Count++;
//		} while (Count < n);
//	}
//	return 1;
//}
//int main() {
//	// input s, p;
//
//	// binarySearch
//	int low = 1, high = s.size() / p.size(), mid;
//	if (subs(low) == 0) { cout << "No\n"; system("pause"); return 0; }
//	while (low + 1 < high) {
//		mid = (low + high) / 2;
//		if (subs(mid) == 1)
//			low = mid;
//		else
//			high = mid;
//	}
//
//	// check & resize loc
//	if (subs(high) == 1) {
//		cout << high << endl;
//		for (int i = 0; i < loc.size(); i++) cout << loc[i] << ' ';
//	}else{
//		subs(low);
//		cout << low << endl;
//		for (int i = 0; i < loc.size(); i++) cout << loc[i] << ' ';
//	}
//
//	system("pause");
//	return 0;
//}