//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <queue>
//
//using namespace std;
//
//// input & output
//vector<int> f = {2,0,0,4,4,3,5}; // function f(0~f.size()-1)
//vector<bool> ans;
//
//// core dataset
//vector<int> Yn;
//queue<int> q; // queue;
//
//int main() {
//	for (int i = 0; i < f.size(); i++) 
//		Yn.push_back(0), ans.push_back(1);
//
//	for (int i = 0; i < f.size(); i++) Yn[f[i]]++;
//
//	// push Yn[i]=0
//	for (int i = 0; i < f.size(); i++) 
//		if (Yn[i] == 0) q.push(i);
//
//	while (q.empty() != 1) {
//		int t = q.front(); q.pop();
//		ans[t] = 0;
//		if (--Yn[f[t]] == 0) q.push(f[t]);
//	}
//
//	// output
//	for (int i = 0; i < ans.size(); i++)cout << int(ans[i]) << ' ';
//	cout << endl;
//
//	system("pause");
//	return 0;
//}