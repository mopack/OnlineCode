//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//vector<int> s; // stack
//inline int pop() {
//	int temp = s[s.size() - 1];
//	s.pop_back();
//	return temp;
//}
//int main() {
//	vector<int> x = {2,1,3,5,4};
//
//	vector<int> dom(x.size(),-1);
//	s.clear(); 
//
//	for (int i = 0; i < x.size(); i++) {
//		while (s.size() > 0 && x[s.back()] <= x[i])
//			dom[pop()] = i;
//		s.push_back(i);
//	}
//
//	for (int i = 0; i < dom.size(); i++)cout << dom[i] << ' ';
//	cout << endl;
//
//	system("pause");
//	return 0;
//}