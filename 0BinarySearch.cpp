//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class BinarySearch {
//public:
//	// BinarySearch by <algorithm>
//	//0. -2= LessThanBegin, -1=GreaterThanEnd, Else=Index(>=).
//	int bs(vector<int>&x, int key) {
//		if (x.empty()) return -1;
//		if (key < x[0]) return -2;
//		auto it = lower_bound(x.begin(), x.end(), key);
//		if (it == x.end()) return -1;
//		return it - x.begin();
//	}
//	//1. >=
//	int bsGE(vector<int>&x, int key) {
//		auto it = lower_bound(x.begin(), x.end(), key);
//		if (it == x.end()) return -1;
//		return it - x.begin();
//	}
//	//2. >
//	int bsG(vector<int>&x, int key) {
//		auto it = upper_bound(x.begin(), x.end(), key);
//		if (it == x.end()) return -1;
//		return it - x.begin();
//	}
//	//3. <= 
//	int bsLE(vector<int>&x, int key) {
//		auto it = lower_bound(x.begin(), x.end(), key);
//		if (it == x.end()) return -1;
//
//		while (it != x.begin() && *it > key)it--;
//		return it - x.begin();
//	}
//	//4. <
//	int bsL(vector<int>&x, int key) {
//		auto it = lower_bound(x.begin(), x.end(), key);
//		if (it == x.end()) return -1;
//		
//		while (it != x.begin() && *it >= key)it--;
//		return it - x.begin();
//	}
//
//	//----------------------------------------//
//	// BinarySearch by Hand
//	// >=
//	int hbsGE(vector<int>&x, int key) {
//		if (x.empty()) return -1;
//		int s = 0, e = x.size() - 1, m;  // (s, e, m) or (L, R, M)
//		while (s <= e) {
//			m = (s + e) / 2;
//			if (x[m] == key) return m;
//			else if (x[m] > key) e = m - 1;
//			else s = m + 1;
//		}
//		return s;
//	}
//	// >
//	int hbsG(vector<int>&x, int key) {
//		if (x.empty()) return -1;
//		int s = 0, e = x.size() - 1, m;  // (s, e, m) or (L, R, M)
//		while (s <= e) {
//			m = (s + e) / 2;
//			if (x[m] == key) return m;
//			else if (x[m] > key) e = m - 1;
//			else s = m + 1;
//		}
//
//		while (s != x.size() && x[s] <= key)s++;
//		return (s == x.size()) ? -1 : s;
//	}
//	// <=
//	int hbsLE(vector<int>&x, int key) {
//		if (x.empty()) return -1;
//		int s = 0, e = x.size() - 1, m;  // (s, e, m) or (L, R, M)
//		while (s <= e) {
//			m = (s + e) / 2;
//			if (x[m] == key) return m;
//			else if (x[m] > key) e = m - 1;
//			else s = m + 1;
//		}
//
//		while (s >= 0 && x[s] > key)s--;
//		return s;
//	}
//	// <
//	int hbsL(vector<int>&x, int key) {
//		if (x.empty()) return -1;
//		int s = 0, e = x.size() - 1, m;  // (s, e, m) or (L, R, M)
//		while (s <= e) {
//			m = (s + e) / 2;
//			if (x[m] == key) {  //!!
//				s = m;
//				break; 
//			}else if (x[m] > key) e = m - 1;
//			else s = m + 1;
//		}
//
//		while (s >= 0 && x[s] >= key)s--;
//		return s;
//	}
//};
//
//int main() {
//	BinarySearch az;
//	vector<int> x;
//	
//	x = {};
//	cout << az.bsG(x, 4) << ' ' << az.bsGE(x, 5) << ' ' << az.bsL(x, 3) << ' ' << az.bsLE(x, 3) << '\n';
//	x = { 1, 2, 3, 5, 6, 7 };
//	cout << az.bsGE(x, -2) << ' ' << az.bsGE(x, 5) << ' ' << az.bsL(x, 3) << ' ' << az.bsLE(x, 3) << '\n';
//
//	x = {};
//	cout << az.hbsG(x, 4) <<'\n';
//	x = { 1, 2, 5, 6 };
//	cout << az.hbsG(x, 4) <<' '<< az.hbsG(x, 7) <<'\n';
//
//	x = {};
//	cout << az.hbsL(x, 4) << '\n';
//	x = { 1, 2, 5, 6 };
//	cout << az.hbsL(x, 2) << ' ' << az.hbsL(x, 0) << '\n';
//
//	system("pause");
//	return 0;
//}