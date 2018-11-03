//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//
//int main() {
//	string a, b;
//	vector<vector<int>>d; 
//	
//	while (cin >> a >> b) {
//		// init d (as d[a.size()][b.size()])
//		d.clear();
//		for (int i = 0; i <= a.size(); i++) {
//			d.push_back(vector<int>());
//			for (int j = 0; j <= b.size(); j++) {
//				d[i].push_back(0);
//			}
//		}
//
//		// dp
//		for (int i = 1; i <= a.size(); i++) {
//			for (int j = 1; j <= b.size(); j++) {
//				if (a[i - 1] == b[j - 1]) {
//					d[i][j] = d[i - 1][j - 1] + 1;
//				}
//				else {
//					d[i][j] = max(d[i][j - 1], d[i - 1][j]);
//				}
//			}
//		}
//
//		// output
//		int count = d[a.size()][b.size()];
//		cout << "length=" << count << endl;
//
//		string result(count, 0);
//
//		for (int i = a.size(), j = b.size(); (i != 0) && (j != 0);) {
//			if (d[i][j] == d[i - 1][j]) {
//				i--;
//			}else if(d[i][j]==d[i][j-1]){
//				j--;
//			}else{
//				result[--count] = a[i - 1];
//				i--; j--;
//			}
//		}
//		cout << result << endl;
//	}
//	system("pause");
//	return 0;
//}