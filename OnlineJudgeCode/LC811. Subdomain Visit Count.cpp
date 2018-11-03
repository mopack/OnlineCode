//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//class Solution {
//public:
//	unordered_map<string, int> map;
//	vector<string> subdomainVisits(vector<string>& cpdomains) {
//		int f, n;
//		char line[109]; string S;
//
//		for (auto &s : cpdomains) {
//			for (f = 0; s[f] != ' '; f++);
//			sscanf(s.substr(0, f).c_str(), "%d", &n);
//
//			while (1) {
//				map[s.substr(f + 1)] += n;
//				for (f++; f < s.size() && s[f] != '.'; f++);
//				if (f == s.size())break;
//			}
//		}
//
//		vector<string> ans;
//		for (auto &v : map) {
//			sprintf(line, "%d", v.second);
//			S = line;
//			ans.push_back(S + " " + v.first);
//		}
//		return ans;
//	}
//}az;
//
//int main() {
//	//char line[100] = "231";
//	//int x, n = 211;
//	//x = sscanf(line, "%d", &n);
//	//cout << x << ' ' << n << endl;
//
//	vector<string> x = { "900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org" };
//	az.subdomainVisits(x);
//
//	system("pause");
//	return 0;
//} 