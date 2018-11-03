//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <stack>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//
////Sol: . Present: AC: 21Lines/12ms/PR99 (best is 8ms, improved by using hand scanf instead of sscanf)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> exclusiveTime(int n, vector<string>& logs) {
//		vector<int>Ans(n, 0); stack<int>s;
//		char action[6]; int Fid, Curr, Prev;
//		for (auto &log : logs) {
//			sscanf(log.c_str(), "%d:%[a-z]:%d", &Fid, action, &Curr);
//			if (action[0] == 's') {
//				if (!s.empty()) Ans[s.top()] += Curr - Prev;
//				s.push(Fid);
//				Prev = Curr;
//			}else{
//				Ans[s.top()] += Curr - Prev + 1;
//				s.pop();
//				Prev = Curr + 1;
//			}
//		}
//		return Ans;
//	}
//};
//
////Sol: . Present: ¿¡∏m: Lines/ms/PR 
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////struct ITS {
////	int id, T; bool st;
////};
////class Solution {
////public:
////	ITS Get(string &s) {
////		ITS ret;
////		int n, i = 0, T, id; bool st;
////		for (n = 0; s[i] != ':'; n = 10 * n + s[i] - 48, i++); i++;
////		ret.id = n;
////		ret.st = (s[i] == 's');
////		for (; s[i] != ':'; i++); i++;
////		for (n = 0; i < s.size(); n = 10 * n + s[i] - 48, i++);
////		ret.T = n;
////		return ret;
////	}
////	vector<int> exclusiveTime(int n, vector<string>& logs) {
////		vector<int>Ans(n, 0); ITS L = Get(logs[0]);
////		for (int i = 1; i < logs.size(); i++) {
////			ITS N = Get(logs[i]);
////			Ans[L.id] += N.T - L.T;
////			L = N;
////		}
////		Ans[L.id]++;
////		return Ans;
////	}
////};
//int main() {
//	//freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	//class Solution az;
//	//vector<string> x = { "0:start:0","1:start:5","2:start:6","3:start:9","4:start:11","5:start:12","6:start:14","7:start:15","1:start:24","1:end:29","7:end:34","6:end:37","5:end:39","4:end:40","3:end:45","0:start:49","0:end:54","5:start:55","5:end:59","4:start:63","4:end:66","2:start:69","2:end:70","2:start:74","6:start:78","0:start:79","0:end:80","6:end:85","1:start:89","1:end:93","2:end:96","2:end:100","1:end:102","2:start:105","2:end:109","0:end:114" };
//	////vector<string> x = { "0:start:0", "0:start:2", "0:end:5", "0:start:6", "0:end:6", "0:end:7" };
//	//vector<int> y = az.exclusiveTime(8, x);
//	//for (auto Y : y)cout << Y << ' ';
//	
//	int a, b; char line[6];
//	string s = "0:end:0";
//	sscanf(s.c_str(), "%d:%[a-z]:%d", &a, line, &b);
//	cout << a << ' ' << b << '\n';
//	cout << string(line) << '\n';
//	system("pause");
//	return 0;
//} 