//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//bool OverEnd, isNull;
//inline int Get(int &id, string &s) {
//	if (id >= s.size()) { OverEnd = 1; return 0; } else OverEnd = 0;
//	char line[12] = {};
//	int n = s[id], x;
//	if (n == 0) { id++; isNull = 1; return 0; } else isNull = 0;
//
//	for (int i = 0; i < n; i++) line[i] = s[id + i + 1];
//	sscanf(line, "%d", &x);
//	id += n + 1;
//	return x;
//}
//TreeNode* deserialize(string s) {
//	if (s.size() <= 0 || s[0] == 0) return NULL;
//	vector<TreeNode*> a, b;
//
//	int id = 0;
//	TreeNode* root = new TreeNode(Get(id, s));
//	a = { root };
//
//	while (1) {
//		b = {};
//		for (int i = 0; i < a.size(); i++) {
//			for (int lr = 0; lr <= 1; lr++) {
//				int x = Get(id, s); if (OverEnd)return root;
//				if (isNull == 0) {
//					TreeNode* t = new TreeNode(x);
//					if (lr == 0) a[i]->left = t;
//					else a[i]->right = t;
//					b.push_back(t);
//				}
//			}
//		}
//		if (b.size() == 0) return root;
//		a = b;
//	}
//}