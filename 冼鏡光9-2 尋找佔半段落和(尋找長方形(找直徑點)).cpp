//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//
//int main() {
//	vector<int> x = { 1,3,1,1,4,1,2,1,2,2,2 };
//	
//	if (x.size() <= 0) { cout << "NO\n"; system("pause"); return 0;}
//
//	//init
//	vector<pair<int, int>> ans; ans.clear();
//
//	int total=0; double half;
//	for (int i = 0; i < x.size(); i++)total += x[i];
//	half = total / 2.0;
//
//	//
//	int end = 0, start = 0;
//	int sum = x[end];
//	while (end < x.size() - 1) {
//		if (sum < half) {
//			sum += x[++end];
//		}
//		else if (sum > half) {
//			sum -= x[start++];
//		}
//		else {
//			ans.push_back(make_pair(start, end));
//			sum += x[++end];
//		}
//	}
//
//	// output
//	printf("total=%d\n", total);
//	for (int i = 0; i < ans.size(); i++) {
//		int s = ans[i].first, e = ans[i].second;
//		int sum = 0;
//		for (int j = s; j <= e; j++)sum += x[j];
//		printf("x[%d~%d]=%d", s, e, sum);
//
//		sum = 0;
//		for (int j = 0; j <= s - 1; j++)sum += x[j];
//		for (int j = e+1; j <= x.size() - 1; j++)sum += x[j];
//		printf("; else=%d\n", sum);
//	}
//	// c(4,2) = 6  有六個長方形
//	system("pause");
//	return 0;
//}