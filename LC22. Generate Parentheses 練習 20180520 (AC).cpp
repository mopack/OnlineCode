//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//	vector<string> ans;
//	int n;
//
//	void gen(string x, int left, int right) {
//		if (left == 0 && right == 0) {
//			ans.push_back(x);
//		}
//		else {
//			int i = (n - left) * 2 - right;
//			if (left != 0) {
//				x[i] = '(';
//				gen(x, left - 1, right + 1);
//			}
//			if (right != 0) {
//				x[i] = ')';
//				gen(x, left, right - 1);
//			}
//			
//		}
//	}
//	vector<string> generateParenthesis(int n) {
//		ans.clear();
//		Solution::n = n;
//
//		string empty(n*2, ' ');
//		gen(empty, n, 0);
//
//		return ans;
//	}
//};
//
//int main() {
//	string empty(10, '.');
//	cout << empty << endl;
//	system("pause");
//	return 0;
//}