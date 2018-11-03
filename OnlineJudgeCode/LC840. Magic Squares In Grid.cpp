//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	int numMagicSquaresInside(vector<vector<int>>& g) {
//		int ans = 0, s1, s2; bool v[10];
//		for (int i = 0; i + 2 < g.size(); i++) {
//			for (int j = 0; j + 2 < g[i].size(); j++) {
//				i++; j++;
//				s1 = g[i - 1][j - 1] + g[i - 1][j] + g[i - 1][j + 1];
//
//				s2 = g[i - 1][j - 1] + g[i][j - 1] + g[i + 1][j - 1];
//				if (s2 != s1) goto NEXT;
//
//				s2 = g[i + 1][j - 1] + g[i + 1][j] + g[i + 1][j + 1];
//				if (s2 != s1) goto NEXT;
//
//				s2 = g[i - 1][j + 1] + g[i][j + 1] + g[i + 1][j + 1];
//				if (s2 != s1) goto NEXT;
//
//				s2 = g[i - 1][j - 1] + g[i][j] + g[i + 1][j + 1];
//				if (s2 != s1) goto NEXT;
//
//				s2 = g[i - 1][j + 1] + g[i][j] + g[i + 1][j - 1];
//				if (s2 != s1) goto NEXT;
//
//				memset(v, 0, sizeof(v));
//				for(int ii = i-1; ii<= i+1;ii++)
//					for (int jj = j - 1; jj <= j + 1; jj++)
//						if(g[ii][jj]>=1 && g[ii][jj]<=9)
//							if (v[g[ii][jj]]) goto NEXT;
//							else v[g[ii][jj]] = 1;
//						else goto NEXT;
//			
//				ans++;
//			NEXT:;
//				i--; j--; 
//			}
//		}
//		return ans;
//	}
//}anz;
//
//int main() {
//	vector<vector<int>> x = { { 10,3,5 },{ 1,6,11 },{ 7,9,2 } };
//	cout << anz.numMagicSquaresInside(x) << endl;
//	system("pause");
//	return 0;
//}