//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <set>
//#include <unordered_set>
//using namespace std;
//
//// 64ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<vector<int>> threeSum(vector<int>&A) {
//		vector<vector<int>> Ans;
//		sort(A.begin(), A.end());
//
//		int a, b, c, sum;
//		for (int i = 0; i + 2 < A.size(); i++) {
//			if ((a = A[i]) > 0) break;
//			if (i > 0 && a == A[i - 1])continue;
//			for (int j = i + 1, k = A.size() - 1; j < k; ) {
//				b = A[j], c = A[k], sum = a + b + c;
//				if (sum == 0) {
//					Ans.push_back({ a,b,c });
//					while (b == A[++j]);
//					while (c == A[--k]);
//				}else if (sum > 0) k--;
//				else j++;
//			}
//		}
//		return Ans;
//	}
//};
//
//// 96ms / PR30
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//typedef vector<int>::iterator It;
//class Solution {
//public:
//	vector<vector<int>> threeSum(vector<int>&A) {
//		vector<vector<int>>Ans;
//		sort(A.begin(), A.end());
//		for (int i = 0; i + 2 < A.size() && A[i] <= 0; i++){
//			if (i > 0 && A[i] == A[i - 1]) continue;
//			It j = A.begin() + i + 1, k = A.end();
//			while(j < k){
//				int J = *j, K = -A[i] - J;
//				k = lower_bound(j + 1, k, K);
//				
//				if (k == A.end() || *k != K) j++;
//				else {
//					Ans.push_back({ A[i], J, K });
//					while (*j == J)j++;
//					while (*k == K)k--;
//				}
//			}
//		}
//		return Ans;
//	}
//};
//
//
//// 480ms / PR7
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<vector<int>> threeSum(vector<int>&A) {
//		set<vector<int>>Ans;
//		sort(A.begin(), A.end());
//		for(int i = 0; i + 2 < A.size(); i++)
//			for (int j = i + 1; j + 1 < A.size(); j++) {
//				int key = -A[i] - A[j];
//				if (binary_search(A.begin() + j + 1, A.end(), key)) 
//					Ans.insert({ A[i], A[j], key });
//			}
//		return vector<vector<int>>(Ans.begin(), Ans.end());
//	}
//};
//
//int main() {
//	Solution az;
//	vector<int> x = { -1,0,1,2,-1,-4};
//	az.threeSum(x);
//
//	system("pause");
//	return 0;
//}