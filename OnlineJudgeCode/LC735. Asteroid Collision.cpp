//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <stack>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: 17Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int> asteroidCollision(vector<int>&A) {
//		//bool all0 = 1; // no need worry if there are zeros
//		//for(auto &a : A) 
//		//	if (a) { all0 = 0; break; }
//		//if (all0) return A;
//
//		vector<int> s;
//		for (auto a : A) {
//			if (a > 0) s.push_back(a);
//			else {
//				int x = -a;
//				while (s.size() && s.back() > 0 && s.back() < x) s.pop_back();
//				if (s.empty() || s.back() < 0) s.push_back(a);
//				else if (s.back() == x) s.pop_back();
//			}
//		}
//		return s;
//	}
//};
//int main() {
//  //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<int> x = { -2,-1,1,2 };
//	az.asteroidCollision(x);
//	system("pause");
//	return 0;
//} 