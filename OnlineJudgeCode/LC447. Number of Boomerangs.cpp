//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//	vector<int> d[501];
//	inline int dis(int x1, int y1, int x2, int y2) {
//		return (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
//	}
//public:
//	int numberOfBoomerangs(vector<pair<int, int>>&P) {
//		int t, ans = 0;
//		for (int i = 0; i < P.size(); i++)
//			for (int j = i + 1; j < P.size(); j++) {
//				t = dis(P[i].first, P[i].second, P[j].first, P[j].second);
//				d[i].push_back(t);
//				d[j].push_back(t);
//			}
//
//		//for (int i = 0; i < P.size(); i++) {
//		//	sort(d[i].begin(), d[i].end());
//		//	cout << endl << i << ':';
//		//	for (int j = 0; j < d[i].size(); j++) {
//		//		cout << d[i][j] << ' ';
//		//	}
//		//}
//
//		for (int i = 0; i < P.size(); i++) {
//			sort(d[i].begin(), d[i].end());
//			cout << endl << i << ':';
//			for (int j = 1; j < d[i].size(); j++) {
//				if (d[i][j] == d[i][j - 1]) {
//					t = j - 1; cout << "[" << t << ",";
//					while (j + 1 < d[i].size() && d[i][j + 1] == d[i][j])j++;
//					t = j - t + 1;
//					//cout << j << "]"<< " " << t;
//					//cout <<"="<< t * (t - 1) << endl;
//					ans += t*(t - 1);
//				}
//			}
//		}
//		return ans;
//	}
//}az;
//
//
//int main() { 
//	vector<pair<int, int>> x = { { 0,0 },{ 1,0 },{ -1,0 },{ 0,1 },{ 0,-1 } };
//	az.numberOfBoomerangs(x);
//	system("pause");
//	return 0;
//} 