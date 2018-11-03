//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution { //24ms PR97.73%
//public:
//	bool checkPossibility(vector<int>&a) {
//		if (a.size() <= 1)return 1;
//		bool mod = a[1] < a[0];
//		for(int i=2; i<a.size();i++)
//			if (a[i] < a[i - 1]) {
//				if (mod)return 0;
//				mod = 1; 
//				if (a[i] < a[i - 2]) a[i] = a[i - 1];
//			}
//		return 1;
//	}
//};
//int main() {
//	class Solution az;
//	vector<int> a = { 4,2,3 };
//	cout<<az.checkPossibility(a);
//	system("pause");
//	return 0;
//} 