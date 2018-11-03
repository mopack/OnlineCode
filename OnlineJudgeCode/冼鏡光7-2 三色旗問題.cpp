//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	vector<char> x = {'b','w','r','r','w'};
//
//	int bi = 0, wi = 0, ri = x.size()-1;
//	while (wi <= ri) {
//		if (x[wi] == 'w'){
//			wi++;
//		}else if (x[wi] == 'b') {
//			swap(x[bi], x[wi]);
//			bi++; wi++;
//		}else {
//			while (wi < ri && x[ri] == 'r') ri--;
//			swap(x[ri], x[wi]);
//			ri--;
//		}
//	}
//
//	for (int i = 0; i < x.size(); i++)cout << x[i] << ' ';
//	cout << endl;
//
//	system("pause");
//	return 0;
//}