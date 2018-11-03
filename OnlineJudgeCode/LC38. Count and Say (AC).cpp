//// 1041-1049 8min
//
//#include <iostream>
//#include <cstdlib>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//	string countAndSay(int n) {
//		string say = "1";
//		int value, times, k;
//
//		for (int i = 2; i <= n; i++) {
//			string newsay = "";
//
//			for (int j = 0; j < say.length(); j++) {
//				value = say[j];
//				times = 1;
//
//				for (k = j + 1; k < say.length(); k++) {
//					if (say[k] == value)
//						times++;
//					else
//						break;
//				}
//
//				newsay += char(times + 48);
//				newsay += value;
//
//				j = k - 1;
//			}
//
//			say = newsay;
//		}
//
//		return say;
//	}
//}answer;
//
//int main() {
//	int n;
//	cin >> n;
//	cout << answer.countAndSay(n) << endl;
//
//	//system("pause");
//	return 0;
//}