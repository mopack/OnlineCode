//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//
//class Employee {
//public:
//	int id;
//	int importance;
//	vector<int> subordinates;
//};
//
//class Solution {
//public:
//	int ans = 0;
//	unordered_map<int, int> id2index;
//	vector<Employee*> *em;
//	void go(int x) { //input: index
//		ans += (*em)[x]->importance;
//		for (auto y : (*em)[x]->subordinates)go(id2index[y]);
//	}
//	int getImportance(vector<Employee*> employees, int id) {
//		em = &employees;
//		for (int i = 0; i < employees.size(); i++) id2index[employees[i]->id] = i;
//		go(id2index[id]);
//		return ans;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 