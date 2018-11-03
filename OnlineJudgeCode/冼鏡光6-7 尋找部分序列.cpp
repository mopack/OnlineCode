//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string text, pat;
//	vector<int>loc;
//	// text=s, pat=subs, loc
//
//	while (cin >> text >> pat) {
//		loc.clear(); loc.assign(pat.size(), -1);
//
//		if (pat.size() > text.size()) {
//			cout << "not found\n"; continue;
//		}
//
//		for (int i = 0, j = 0; i < text.size() && j < pat.size(); j++) {
//			for (; i < text.size() && text[i] != pat[j]; i++);
//
//			if (i >= text.size()) {
//				cout << "not found\n"; break;
//			}else{
//				loc[j] = i;
//				cout << i << ' ';
//			}
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}