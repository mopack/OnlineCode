//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <sstream>
//#include <unordered_map>
//using namespace std;
//
////44ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<vector<string>> findDuplicate(vector<string>&Paths) {
//		vector<vector<string>> Ans; int AnsI = 0;
//		unordered_map<string, int>Con2AnsI;
//		unordered_map<string, string> Single;
//
//		for (auto &Path : Paths) {
//			stringstream ss(Path);
//			string Root, s, FCon, FName;
//			getline(ss, Root, ' '); Root.push_back('/');
//			while (getline(ss, s, ' ')) {
//				s.pop_back();
//				int LeftI = find(s.begin(), s.end(), '(') - s.begin();
//				FCon =  s.substr(LeftI + 1);
//				FName = Root + s.substr(0, LeftI);
//
//				auto it = Con2AnsI.find(FCon);
//				if (it == Con2AnsI.end()) {
//					auto is = Single.find(FCon);
//					if (is == Single.end()) {
//						Single.insert({ FCon, FName });
//					}else{
//						Con2AnsI.insert({ FCon, AnsI++ });
//						Ans.push_back({ is->second, FName });
//					}
//				}else{
//					Ans[it->second].push_back(FName);
//				}
//			}
//		}
//		return Ans;
//	}
//};
//
//int main() {
//	class Solution az;
//	vector<string> x = { "root/a 1.txt(abcd) 2.txt(efgh)","root/c 3.txt(abcd)","root/c/d 4.txt(efgh)","root 4.txt(efgh)" };
//	az.findDuplicate(x);
//	system("pause");
//	return 0;
//} 
