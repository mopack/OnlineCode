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
//// AC (�ɶ������סG2N+1������A3(N-1)+1����� N���}�Y��`���Ior���I���Ӽ�)
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