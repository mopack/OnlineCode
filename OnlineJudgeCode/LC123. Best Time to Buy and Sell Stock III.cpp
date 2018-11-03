//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;

//class Solution { // AC
//public:
//	vector<int> L, H;
//	vector<vector<int>> D;
//	int maxProfit(vector<int>&P) {
//		for (int i = 0; i < P.size(); i++)
//			if (i + 1 < P.size() && P[i] < P[i + 1]) {
//				L.push_back(P[i]);
//				while (i + 1 < P.size() && P[i] < P[i + 1])i++;
//				H.push_back(P[i]);
//			}
//
//		int lowest;
//		for (int s = 0; s < L.size(); s++) {
//			D.push_back(vector<int>(L.size(), 0));
//			D[s][s] = H[s] - L[s];
//			lowest = L[s];
//			for (int i = s + 1; i < L.size(); i++) {
//				lowest = min(lowest, L[i]);
//				D[s][i] = max(D[s][i - 1], H[i] - lowest);
//			}
//		}
//		//for (int i = 0; i < L.size(); i++, cout<<endl)
//		//	for (int j = 0; j < L.size(); j++)cout << D[i][j] << ' ';
//
//		if (L.size() == 0)return 0;
//		int p = D[0][L.size() - 1];
//		for (int i = 0; i + 2 <= L.size(); i++)
//			p = max(p, D[0][i] + D[i + 1][L.size() - 1]);
//		return p;
//	}
//}az;
//
//int main() {
//	vector<int> x = {1,2,10};
//	cout<<az.maxProfit(x);
//	system("pause");
//	return 0;
//} 