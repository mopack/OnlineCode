// Horner's Method (O(N)Polynomial Algorithm) First Write
//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <sstream>
//#include <string>
//#include <algorithm>
//using namespace std;
//long long Poly(vector<int>&c, long long x) {
//	long long ans = c.back();
//	for (int i = c.size() - 2; i >= 0; i--) 
//		ans = ans * x + c[i];
//	return ans;
//}
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	string s; int x;
//	while (getline(cin, s)) {
//		stringstream ss(s);
//		vector<int>c; c.clear(); 
//		while (ss >> x) 
//			c.push_back(x);
//		reverse(c.begin(), c.end());
//		
//		getline(cin, s);
//		ss.clear();
//		ss.str(s);
//		bool first = 1;
//		while (ss >> x){
//			if (first)first = 0; else cout << ' ';
//			cout << Poly(c, x);
//		}
//		cout <<'\n';
//	}
//	return 0;
//} 

//Improved. 0.070sec
//#include <iostream>
//#include <vector>
//#include <string>
//#include <sstream>
//using namespace std;
//long long Poly(vector<int>&C, int X) {
//	long long Ans = 0;
//	for (auto &c : C)
//		Ans = Ans * X + c;
//	return Ans;
//}
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	string s; int x;
//	while (getline(cin, s)) {
//		stringstream ss(s);
//		vector<int>c; c.clear();
//		while (ss >> x) c.push_back(x);
//
//		getline(cin, s);
//		ss.clear(); ss.str(s);
//		bool first = 1;
//		while (ss >> x) {
//			if (first)first = 0; else cout << ' ';
//			cout << Poly(c, x);
//		}
//		cout << '\n';
//	}
//	return 0;
//}



