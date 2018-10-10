//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string s, ss;
//	vector<int>loc;
//	// text=s, pat=subs, loc
//
//	while (cin >> s >> ss) {
//		loc.clear(); loc.assign(ss.size(), -1);
//
//		if (ss.size() > s.size()) {
//			cout << "not found\n"; continue;
//		}
//
//		for (int i = 0, j = 0; i < s.size() && j < ss.size(); j++) {
//			for (; i < s.size() && s[i]!=ss[j]; i++) 
//			if (i >= s.size()) {
//				cout << "not found\n"; break;
//			}else{
//				loc[j] = i;	cout << i << ' ';
//			}
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}