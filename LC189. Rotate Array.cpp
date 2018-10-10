//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//void print(vector<int>&a) {
//	for (auto x : a)cout << x << ' '; cout << endl;
//}
//
//class Solution { //Sol3: Cyclic Replacements (Space Complexity: O(1))
//public:
//	void rotate(vector<int>&a, int k) {
//		k %= a.size(); if (k == 0 || a.size() <= 1)return;
//		int C = a.size(), s, i, L;
//		for (s = 0; C; s++) {
//			L = a[s]; i = s;
//			do {
//				i = (i + k) % a.size();
//				swap(a[i], L);
//				C--;
//			} while (i != s);
//		}
//	}
//};
//
//class Solution { //Sol2: Reverse (Space Complexity: O(1))
//public:
//	void rotate(vector<int>&a, int k) { 
//		k %= a.size(); if (k == 0 || a.size()<=1)return;
//		reverse(a.begin(), a.end());
//		reverse(a.begin(), a.begin() + k);
//		reverse(a.begin() + k, a.end());
//	}
//};
//
//class Solution { //Sol1: vector insert method (Space Complexity: O(n))
//public:
//	void rotate(vector<int>&a, int k) {
//		k %= a.size(); if (k == 0 || a.size()<=1)return;
//		vector<int>x(a.end() - k, a.end());
//		x.insert(x.end(), a.begin(), a.end() - k);
//		a = x;
//	}
//};
//int main() {
//	vector<int> a = { 1,2,3,4,5,6 };
//	class Solution az;
//	az.rotate(a, 2);
//	
//	system("pause");
//	return 0;
//} 