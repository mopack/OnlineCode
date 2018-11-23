//#include <bits/stdc++.h>
////#include "LeetCodeStd.h"
//// --------------- //
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	vector<int> findOrder(int N, vector<pair<int, int>>& L2F) {
////
////	}
////};

//#include <iostream>
//#include <cstdlib>
//#include <bitset>
//using namespace std;
//
//// max <= 10^7, thus max <= 2^24
//// max! <= max^max 24*24 <= 600
//
//struct big {
//	bitset<192347> n;
//	int len;
//	big() {
//		len = 0;
//		for (int i = 0; i < 192347; i++)n[i] = 0;
//	}
//}one;
//
//big shift(big n, int a);
//big power(big m, big n);
//big cn2(big n);
//big mul(big a, big b);
//big factorial(big n);
//big int2big(int in);
//
//big shift(big n, int a) {
//	for (int i = 0; i < n.len - a; i++)n.n[i] = n.n[i + a];
//	n.len-=a;
//	return n;
//}
//big power(big m, big n) { //n>=1
//	//printf("power(%d,%d)", big2int(m), big2int(n));
//
//	big temp = one;
//	while (n.len >1 ||(n.len==1 && n.n[0])) {
//		if (n.n[0]) {
//			//printf("mul(%d,%d)=%d\n", big2int(temp), big2int(m), big2int(mul(temp, m)));
//			//printf("%d * %d=%d\n", big2int(temp), big2int(m), big2int(mul(temp, m)));
//			temp = mul(temp, m);
//			
//		}
//		//printf("%d * %d=%d\n", big2int(m), big2int(m), big2int(mul(m, m)));
//		m = mul(m,m);
//
//		// n/=2
//		n = shift(n, 1);
//	}
//	//printf("=%lld\n",big2int(temp));
//	return temp;
//}
//unsigned long long big2int(big n) {
//	unsigned long long ans = 0, two = 1;
//	for (int i = 0; i < n.len; i++) {
//		ans += two * n.n[i];
//		two *= 2;
//	}
//	return ans;
//}
//
//void printbi(big n) {
//	for (int i = 10; i >= 0; i--) cout << n.n[i];
//
//	cout << endl;
//}
//
//big cn2(big n) {
//	int nint = big2int(n);
//
//	// x = (2^n+1)
//	big x;
//	x.len = nint+1;
//	x.n[0] = 1; x.n[x.len - 1] = 1;
//
//	// (2^n+1)^n
//	big result = power(x, n);
//	
//	//printf("power(%d, %d)=%d\n", big2int(x), n, big2int(result));
//
//	// m = n / 2
//	big m = shift(n, 1);
//
//	// shift n per time, and shift m times; thus shift amount = m*n
//	int sh = big2int(mul(m,n));
//
//	big ans = shift(power(x, n), sh);
//
//	// mask
//	ans.len= n.len;
//	while (ans.n[ans.len - 1] == 0)ans.len--;
//
//	return ans;
//}
//big mul(big a, big b) {
//	big c;
//
//	for (int i = 0; i <= a.len + b.len; i++) c.n[i] = 0; //fill(a, a+N, 0)
//
//	for (int ai = 0; ai < a.len; ai++) {
//		for (int bi = 0; bi < b.len; bi++){
//			if (a.n[ai] & b.n[bi]) {
//				//c.n[ai + bi]++
//				int k = ai + bi;
//				while (c.n[k]) {
//					c.n[k] = 0; k++;
//				}
//				c.n[k] = 1;
//			}
//			//printbi(c);
//		}
//	}
//
//	c.len = a.len + b.len;
//	if (c.n[c.len-1] == 0)c.len--;
//
//	//printf("%d * %d = %d\n", big2int(a), big2int(b), big2int(c));
//	return c;
//}
//big factorial(big n) {
//	big m;
//	if (n.len == 1 && n.n[0] == 1) {
//		//cout << "=1\n";
//		return one;
//	}
//	else if (n.n[0] == 1) {// is odd
//		m = n;
//		m.n[0] = 0;
//		int ii = big2int(mul(n, factorial(m))) , in = big2int(n), ifm = big2int(factorial(m)), im= big2int(m);
//		//printf("n=%d is odd. m=n-1=%d. return n*f(m-1)=%d*%d=%d\n", in, im, in, ifm, ii);
//		return mul(n, factorial(m));
//	}
//	else {
//		// n>> 1 (a.k.a n/=2)
//		m.len = n.len-1;
//		for (int i = 1; i < n.len; i++) m.n[i - 1] = n.n[i];
//		
//
//		m = factorial(m);
//
//		int ic = big2int(cn2(n)), in = big2int(n), im = big2int(m), i2 = big2int(factorial(m)),imm=big2int(mul(m, m)),icm=big2int(mul(cn2(n), mul(m, m)));
//		//printf("n=%d is even. m=(n/2)!=%d. return= cn2(n)*m*m = %d * %d = %d\n", in, im, ic, imm, icm);
//
//		return mul(cn2(n), mul(m, m));
//	}
//}
//big int2big(int in) {
//	big d;
//	//10carry->2carry
//	d.len = 0;
//	while (in > 0) {
//		d.n[d.len++] = (in % 2);
//		in >>= 1;
//	}
//	return d;
//}
//int main() {
//	//bitset<64> s(string("1000100010001000100010001000100010001000100010001000100010001000"));
//	//cout << sizeof(s) << endl;
//
//
//	int qn, in;
//	//cin >> qn;
//	big d,f;
//
//	one.len = 1; one.n[0] = 1;
//
//	for (int i = 1; i <= 10; i++) {
//		d = int2big(i);
//		printf("%d! = %d\n",i,big2int(factorial(d)));
//	}
//
//	//for (int q = 1; q <= qn; q++) {
//	//	cin >> in;
//	//	d = int2big(in);
//	//	f = factorial(d);
//	//	cout << f.len << endl;
//	//}
//	system("pause");
//	return 0;
//}