//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//
//// ¦n¤å¡G http://blog.gainlo.co/index.php/2016/03/08/system-design-interview-question-create-tinyurl-system/
//
//class Solution {
//private:
//	unordered_map<string, uint64_t> ltos;
//	unordered_map<uint64_t, string> stol;
//	int Counter;
//	string elements;
//
//public:
//	Solution() {
//		//ltos = unordered_map<string, uint64_t>();
//		//stol = unordered_map<uint64_t, string>();
//		Counter = 1;
//		elements = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	}
//	
//	// Encodes a URL to a shortened URL.
//	string encode(string longUrl) {
//		string short_url = base10ToBase62(Counter);
//		ltos[longUrl] = Counter;
//		stol[Counter] = longUrl;
//		Counter++;
//		return "http://tinyurl.com/" + short_url;
//	}
//
//	// Decodes a shortened URL to its original URL.
//	string decode(string shortUrl) {
//		string prefix = "http://tinyurl.com/";
//		shortUrl = shortUrl.substr(prefix.length());
//		uint64_t n = base62ToBase10(shortUrl);
//		return stol[n];
//	}
//
//	int base62ToBase10(string s) {
//		uint64_t n = 0;
//		for (int i = 0; i < s.length(); i++) {
//			n = n * 62 + convert(s[i]);
//		}
//		return n;
//	}
//
//	uint64_t convert(char c) {
//		if (c >= '0' && c <= '9') return c - '0';
//		else if (c >= 'a' && c <= 'z') return c - 'a' + 10;
//		else if (c >= 'A' && c <= 'Z') return c - 'A' + 36;
//		return -1;
//	}
//
//	string base10ToBase62(uint64_t n) {
//		string str = "";
//		while(n != 0){
//			str.insert(str.begin(), elements[n % 62]);
//			n /= 62;
//		}
//		while (str.length() != 6)
//			str.insert(str.begin(), '0');
//		return str;
//	}
//};
//
//int main() {
//	string url = "https://leetcode.com/problems/design-tinyurl";
//	 Solution solution;
//	 cout << solution.decode(solution.encode(url)) << endl;
//
//	system("pause");
//	return 0;
//}