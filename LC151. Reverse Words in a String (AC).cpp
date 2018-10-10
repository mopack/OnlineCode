//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	void reverseWords(string &s) {
//		string ans = "", t;
//		vector<string> subs;
//
//		int last = 0;
//		for (int i = 0; i < s.size(); i++) {
//			if (s[i] == ' ') {
//				//cout << i <<':'<< s.substr(last, i - last + 1) << endl;
//				if(last < i)
//					subs.push_back(s.substr(last, i - last));
//				last = i + 1;
//				
//			}
//		}
//		//cout << 'n' << ':' << s.substr(last, s.size() - last + 1) << endl;
//		if (last < s.size())
//			subs.push_back(s.substr(last, s.size() - last ));
//		
//		if(subs.size()>=1)
//			ans += subs[subs.size() - 1];
//		for (int i = subs.size() - 2; i >= 0; i--) {
//			ans += ' ' + subs[i];
//		}
//		
//		s = ans;
//		return;
//	}
//}ans151;
//
//int main() {
//	string s1 = "";
//	ans151.reverseWords(s1);
//	cout << s1 <<"-" << endl;
//	system("pause");
//	return 0;
//}