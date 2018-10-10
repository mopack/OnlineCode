//BT's DFS: Preorder/Inorder/Postorder Traversal 
//          Forms: 1. Recursion/ Recursion out form/ 2.1 Traversal as an Array / 2.2 Traversal as an Array with Backtracking / 
//                 3. Iteration. (Loop as NonRecursion of either Form 1. or 2.)
//                 (VisitAsAnArray；，外處理、回傳可以不同\
// three form of Backtracking, 參數化、出入型、每次恢復型
// two form of NULL Processing
//BT's BFS: Level Order Traversl (LOT)

//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};

// 樹常用工具
//class Codec {
//public:
//	// Encodes a tree to a single string.
//	string serialize(TreeNode* root) {
//		string s = "";
//		vector<TreeNode*> a = { root }, b;
//		while (!a.empty()) {
//			b.clear();
//			for (int i = 0; i < a.size(); i++)
//				if (!a[i]) s.push_back(0);
//				else {
//					string t = to_string(a[i]->val);
//					s += char(t.size()) + t;
//					b.push_back(a[i]->left);
//					b.push_back(a[i]->right);
//				}
//				swap(a, b);
//		}
//		while (s.size()>0 && s.back() == 0)s.pop_back();
//		return s;
//	}
//	// Decodes your encoded data to tree.
//	TreeNode* deserialize(string s) {
//		int id = 0, N, Val;
//		// Creating Root
//		if (s.empty() || s[0] == 0) return NULL; // No Root!
//		N = s[id++];
//		Val = stoi(s.substr(id, N));
//		id += N;
//		TreeNode* root = new TreeNode(Val);
//
//		vector<TreeNode*> a = { root }, b;
//		while (!a.empty()) {
//			b.clear();
//			for (int i = 0; i < a.size(); i++)
//				for (int lr = 0; lr <= 1; lr++) {
//					if (id >= s.size())return root;
//					if (N = s[id++]) {  // not NULL
//						Val = stoi(s.substr(id, N));
//						id += N;
//						TreeNode* t = new TreeNode(Val);
//						((lr) ? a[i]->right : a[i]->left) = t;
//						b.push_back(t);
//					}
//				}
//			swap(a, b);
//		}
//		return root;
//	}
//};

////Level Order Traversal
//void LOT(TreeNode *t) {
//	vector<int> ans = {};
//	vector<TreeNode*> a, b;
//	
//	a = { t };
//
//	while (1) {
//		b = {};
//		for (int i = 0; i < a.size(); i++) {
//			if (a[i] == NULL) {
//				ans.push_back(0);
//			}else{
//				ans.push_back(a[i]->val);
//				if (a[i]->left != NULL || a[i]->right != NULL) {
//					b.push_back(a[i]->left);
//					b.push_back(a[i]->right);
//				}
//			}
//		}
//		
//		if (b.size() == 0) break;
//		a = b;
//	}
//
//	//display in stdout
//	for (int i = 0; i < ans.size(); i++) {
//		printf("%d ", ans[i]);
//	}
//	cout << endl;
//}
//