//#include <iostream>
//#include <vector>
//using namespace std;
//
//// 4ms/PR100/24Lines
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int> majorityElement(vector<int>& A) {
//		int x = 0, y = 0, xc = 0, yc = 0; // Init x, y can be any value
//		for (auto a : A) {
//			if (a == x) xc++;
//			else if (a == y) yc++;
//			else if (xc == 0) x = a, xc = 1; 
//			else if(yc == 0) y = a, yc = 1;
//			else xc--, yc--;
//		}
//
//		xc = yc = 0;
//		for (auto a : A) {
//			if (a == x) xc++;
//			else if (a == y) yc++;
//		}
//		vector<int> Ans;
//		if (xc > A.size()/3) Ans.push_back(x);
//		if (yc > A.size()/3) Ans.push_back(y);
//		return Ans;
//	}
//};
//
//int main() {
//	class Solution az;
//	//vector<int> A = { 1,2,3 };
//	system("pause");
//	return 0;
//} 