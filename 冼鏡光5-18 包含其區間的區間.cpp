//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//typedef pair<int, int> Point;
//
//vector<Point> p; // 兩端點相異
//vector<pair<int, int>> ans;
//
//int main() {
//	// input
//	int n, u, v;
//	cin >> n;
//	p.clear();
//	while (n--) {
//		cin >> u >> v;
//		p.push_back(make_pair(u, v));	
//	}
//
//	sort(p.begin(), p.end()); //善用pair內建的比較
//
//	// ans
//	ans.clear();
//
//	int ci = 0;
//	for (int i = 1; i < p.size(); i++) {
//		if (p[i].second <= p[ci].second) {
//			ans.push_back(make_pair(ci, i));
//		}
//		else {
//			ci = i;
//		}
//	}
//
//	// output
//	for (int i = 0; i < ans.size(); i++)
//		printf("[%d,%d] contains [%d,%d]\n", p[ans[i].first].first, p[ans[i].first].second,
//			p[ans[i].second].first, p[ans[i].second].second);
//
//	system("pause");
//	return 0;
//}
////5
////1 3
////0 2
////2 3
////3 4
////3 3