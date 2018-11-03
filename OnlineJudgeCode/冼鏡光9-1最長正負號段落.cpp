//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//
//int main() {
//	vector<int> x = {1,1,-1,-2,0,1,3,-1,-2,1};
//
//	int Length = 0;
//	int Neg = 0, NegMin = 0, NegMax = 0;
//	
//	vector<int>loc(x.size() * 2, 0);
//	int Mid = x.size();
//	loc[Mid] = 0;
//
//	for (int i = 0; i < x.size(); i++) {
//		if (x[i] < 0) {
//			Neg++;
//		}else if (x[i] > 0) {
//			Neg--;
//		}
//
//		if (Neg < NegMin) {
//			NegMin = Neg;
//			loc[Mid + NegMin] = i + 1;
//		}
//		else if (Neg > NegMax) {
//			NegMax = Neg;
//			loc[Mid + NegMax] = i + 1;
//		}
//		Length = max(Length, i + 1 - loc[Mid + Neg]);
//	}
//	cout << Length << endl;
//
//	system("pause");
//	return 0;
//}