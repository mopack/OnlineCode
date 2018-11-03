//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//vector<int> x = { 1,8,1,100,1 }; // 0~x.size()-1
//
//int main() {
//	if (x.size() <= 0) { cout << "No one\n"; system("pause"); return 0; }
//
//	int mi, mv; // currently max vote's index & his vote's count
//	mi = x[0];  mv = 1;
//
//	for (int i = 1; i < x.size(); i++) {
//		if (mv == 0) {
//			mi = x[i]; mv = 1;
//		}else if(mi == x[i]){
//			mv++;
//		}
//		else {
//			mv--;
//		}
//	}
//
//	// final check
//	if (mv == 0) {
//		cout << "No one\n";
//	}
//	else {
//		int Count = 0;
//		for (int i = 0; i < x.size(); i++) if (x[i] == mi) Count++;
//		Count *= 2;
//
//		if (Count >= x.size()) { cout << mi << endl; } else { cout << "No one\n;"; }
//	}
//	
//	system("pause");
//	return 0;
//}