//#include <iostream>
//#include <cstdlib>
//#include <string>
//
//using namespace std;
//
//
//struct Big {
//	int len, n[10000];
//};
//
//inline void out(Big d) {
//	for (int i = d.len - 1; i >= 0; i--)cout << d.n[i];
//	//cout << endl;
//
//}
//
////int ii=0;
//Big mul(Big a, Big b) {
//	Big c;
//	
//	int t,u;
//	for (int i = 0; i <= a.len + b.len; i++)c.n[i] = 0;
//	for (int ai = 0; ai < a.len; ai++) {
//		for (int bi = 0; bi < b.len; bi++) {
//			t = a.n[ai] * b.n[bi];
//			c.n[ai + bi] += t % 10;
//
//			if (c.n[ai + bi] >= 10) {
//				c.n[ai + bi] -= 10; u = 1;
//			}
//			else
//				u = 0;
//
//			c.n[ai + bi + 1] += t / 10 + u;
//
//			//if (ii == 7) {
//			//	c.len = a.len + b.len;
//			//	out(c);  cout << endl;
//			//}
//		}
//
//	}
//	c.len = a.len + b.len; //0~c.len-1;
//	if (c.n[c.len-1] == 0)c.len--;
//	return c;
//}
//
//Big addone(Big a) {
//	a.n[0]++;
//	int i = 0;
//	while(a.n[i] >= 10) {
//		a.n[i] -= 10;
//		a.n[i+1]++;
//		i++;
//	}
//	//cout << a.len + 1 << ' ' << a.n[a.len + 1] << ':';
//	if (a.n[a.len])
//		a.len++;
//	return a;
//}
//Big fac(int a) {
//	Big result, one, temp;
//	one.len = 1;
//	for (int i = 1; i < 6000; i++)one.n[i] = 0;
//	one.n[0] = 1;
//
//	result = one;
//	temp = one;
//
//	printf("1!= 1\n");
//	for(int i =2; i<=a; i++){
//		temp = addone(temp);
//		//out(temp); cout << "<a\n";
//		//out(result); cout << "<b\n";
//		result = mul(temp, result);
//		printf("%d! =", i);
//		out(result); cout << endl;
//	}
//
//	return result;
//}
//
//int main() {
//	int qn, a;
//	string s;
//	Big d;
//
//	cin >> a;
//	Big result, one, temp;
//	one.len = 1;
//	for (int i = 1; i < 6000; i++)one.n[i] = 0;
//	one.n[0] = 1;
//
//	result = one;
//	temp = one;
//
//	//printf("1!= 1\n");
//	for (int i = 2; i <= a; i++) {
//		temp = addone(temp);
//		//out(temp); cout << "<a\n";
//		//out(result); cout << "<b\n";
//		//ii = i;
//		/*if (i == 7) {
//			i = i;
//		}*/
//		result = mul(temp, result);
//		//printf("%d! =", i);
//		//out(result); cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}