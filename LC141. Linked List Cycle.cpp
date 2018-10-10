//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//// AC (時間複雜度：2N+1次比較，3(N-1)+1次賦值 N為開頭到循環點or末點的個數)
//class Solution { 
//public:
//	bool hasCycle(ListNode *R) {
//		if (!R) return 0;
//		ListNode *A = R, *B;
//
//		while(A->next){
//			if (A->next == R) return 1;
//
//			B = A->next;
//			A->next = R;
//			A = B;
//		}
//		return 0;
//	}
//};
//int main() {
//	ListNode *a = new ListNode(1);
//	class Solution az;
//	cout<<az.hasCycle(a);
//
//	system("pause");
//	return 0;
//} 