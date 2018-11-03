//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//// 4ms/PR98
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int DFS(int r, int c, vector<vector<int>>&d, vector<vector<int>>&Tri) {
//		if (c < 0 || c > r + 1) return 0;
//		//cout << r << ' ' << c << ' ' << d[r][c] << '\n';
//		if (d[r][c] != INT_MIN) return d[r][c];
//
//		if (r + 1 == Tri.size()) d[r][c] = Tri[r][c];
//		else d[r][c] = Tri[r][c] + min(DFS(r + 1, c, d, Tri), DFS(r + 1, c + 1, d, Tri));
//		//cout << r << ' ' << c << ' ' << d[r][c] << '\n'; 
//		return d[r][c];
//	}
//	int minimumTotal(vector<vector<int>>&Tri) {
//		if (Tri.empty()) return 0;
//		vector<vector<int>>d(Tri.size(), vector<int>(Tri.size(), INT_MIN));
//		return DFS(0, 0, d, Tri);
//	}
//};
//
////Others 4ms
//class Solution {
//public:
//	int minimumTotal(vector<vector<int>>& triangle) {
//		// top down
//		vector<vector<int>> sum = triangle;
//		int size = triangle.size();
//		// sum[0][0] is triangle[0][0]
//		for (int i = 1; i < size; i++) {
//			sum[i][0] = sum[i - 1][0] + triangle[i][0];
//			sum[i][i] = sum[i - 1][i - 1] + triangle[i][i];
//		}
//
//		int ret = INT_MAX;
//		// if (size == 1) {
//		//     return sum[0][0];
//		// }
//		// if (size == 2) {
//		//     ret = min(sum[1][1], sum[1][0]);
//		//     return ret;
//		// }
//		for (int i = 1; i < size; i++) {
//			for (int j = 1; j < i; j++) {
//				sum[i][j] = min(sum[i - 1][j - 1], sum[i - 1][j]) + triangle[i][j];
//			}
//		}
//
//		for (int i = 0; i < size; i++) {
//			ret = min(ret, sum[size - 1][i]);
//		}
//
//		return ret;
//	}
//};
////Other's 0ms
//class Solution {
//public:
//	int minimumTotal(vector<vector<int>>& triangle) {
//
//		int result = INT_MAX;
//		for (int i = 1; i < triangle.size(); i++)
//		{
//			for (int j = 0; j < triangle[i].size(); j++)
//			{
//				int minVal = INT_MAX;
//				if (j > 0)
//					minVal = min(minVal, triangle[i - 1][j - 1]);
//
//				if (j + 1 < triangle[i].size())
//					minVal = min(minVal, triangle[i - 1][j]);
//
//				triangle[i][j] += minVal;
//			}
//		}
//
//		int maxI = triangle.size() - 1;
//
//		if (maxI < 0)
//			return 0;
//
//		int maxJ = triangle[maxI].size() - 1;
//
//		for (int j = 0; j <= maxJ; j++)
//		{
//			result = min(result, triangle[maxI][j]);
//		}
//		return result;
//	}
//};
//int main() {
//	class Solution az;
//	vector<vector<int>>Tri ={ {2}, { 3,4 }, { 6,5,7 }, { 4,1,8,3 }};
//	az.minimumTotal(Tri);
//	system("pause");
//	return 0;
//} 
