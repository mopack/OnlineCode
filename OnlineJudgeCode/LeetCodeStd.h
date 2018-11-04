#pragma once
#include <bits/stdc++.h>
#include <string>
// -- Leetcode Standard Class -- //
//class Master {
//public:
//	int guess(string word);
//};

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};