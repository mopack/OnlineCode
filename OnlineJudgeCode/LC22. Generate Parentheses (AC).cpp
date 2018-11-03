//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
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
//			return;
//		}
//
//		int i = (n - left) * 2 - right;
//
//		if (left != 0) {
//			x[i] = '(';
//			gen(x, left - 1, right + 1);
//		}
//
//		if (right != 0) {
//			x[i] = ')';
//			gen(x, left, right - 1);
//		}
//		
//		return;
//	}
//	vector<string> generateParenthesis(int n) { //n*2
//		ans.clear();
//		Solution::n = n;
//
//		string empty(n * 2, ' '); // 10 ' '
//		gen(empty, n, 0);
//
//		return ans;
//	}
//}aa;
//
//int main() {
//	freopen("in.txt", "rt", stdin); freopen("out.txt", "wt", stdout);
//	int xx;
//	cin >> xx;
//	vector<string>  d =  aa.generateParenthesis(xx);
//
//	for (int i = 0; i < d.size(); i++) {
//		cout << d[i] << endl;
//	}
//
//	return 0;
//}
