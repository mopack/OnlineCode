//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <set>
//using namespace std;
//class Solution {
//public:
//	set<vector<int>> Set;
//	vector<vector<int>> subsetsWithDup(vector<int>&a) {
//		sort(a.begin(), a.end());
//		vector<bool>d(a.size(), 0); int i;
//		vector<vector<int>> ans = { {} }; vector<int> an;
//		while (1) {
//			for (i = 0; i < a.size(); i++)
//				if (d[i]) d[i] = 0;
//				else { d[i] = 1; break; }
//			if(i == a.size()) return ans;
//
//			for (an = {}; i < a.size(); i++)
//				if (d[i])an.push_back(a[i]);
//			if (Set.find(an) == Set.end()) Set.insert(an), ans.push_back(an);
//		}
//	}
//};
//bool Compare(vector<int>&a, vector<int>&b) {
//	if (a.size() != b.size()) return a.size() < b.size();
//	for (int i = 0; i < a.size(); i++)
//		if (a[i] != b[i]) return a[i] < b[i];
//	return 1;
//}
//
//void print(vector <vector<int>> &x) {
//	for (auto &c : x) {
//		cout << " {";
//		for (auto d : c)cout << d << ' ';
//		cout << "},";
//	}
//	cout << endl;
//}
//int main() {
//	class Solution az;
//	//vector<int> x = { 1,2,2 };
//	//az.subsetsWithDup(x);
//
//	vector <vector<int>> x = { {},{ 4 },{ 4,4 },{ 4,4,4 },{ 1 },{ 4,1 },{ 4,4,1 },{ 4,4,4,1 },{ 4,4,4,4 },{ 1,4 },{ 4,1,4 },{ 4,4,1,4 },{ 4,4,4,1,4 } };
//	vector <vector<int>> y = { {}, { 1 }, { 1,4 }, { 1,4,4 }, { 1,4,4,4 }, { 1,4,4,4,4 }, { 4 }, { 4,4 }, { 4,4,4 }, { 4,4,4,4 } };
//	sort(x.begin(), x.end(), Compare);
//	sort(y.begin(), y.end(), Compare);
//	
//	print(x);
//	print(y);
//
//	system("pause");
//	return 0;
//} 