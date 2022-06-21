#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
struct tree
{
	int node_value;
	struct tree* left;
	struct tree* right;
};
void inorder(struct tree* root) {
	if (root == NULL) {
		return;
	} inorder(root->left);
	printf("%d", root->node_value);
	inorder(root->right);
}
void preorder(struct tree* root) {
	if (root == NULL) {
		return;
	} printf("%d", root-> node_value);
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct tree* root) {
	if (root == NULL) {
		return;
	} postorder(root->left);
	postorder(root->right);
	printf("%d", root->node_value);
}
struct tree* createtree(value) {
	struct tree* newtree = (struct tree*)malloc(sizeof(struct tree));
	newtree->left = NULL;
	newtree->right = NULL;
	newtree->node_value = value;
	return newtree;
}
struct tree* insertleft(struct tree* root, int value) {
	root->left = createtree(value);
	return root->left;

}
struct tree* insertright(struct tree* root, int value) {
	root->right = createtree(value);
	return root->right;

}
int countnodes(struct tree* root) {
	int x, y;
	if (root != NULL) {
		x = countnodes(root->left);
		y = countnodes(root->right);
		return x + y + 1;
	} return 0;
}
int height_tree(struct tree* root) {
	int x, y;
	if (root == NULL) {
		return 0;
	} x = height_tree(root->left);
	y = height_tree(root->right);
	if (x > y) {
		return x + 1;
	} else {
		return y + 1;
	}
}
int count1degree(struct tree* root) {
	int x, y;
	if (root == NULL) {
		return 0;
	} x = count1degree(root->left);
	y = count1degree(root->right);
	if (root->left != NULL ^ root->right != NULL) {
		return 1;
	}
	else {
		return x + y;
	}
}
int count0degree(struct tree* root) {
	int x, y;
	if (root == NULL) {
		return 0;
	} x = count0degree(root->left);
	y = count0degree(root->right);
	if (root->left == NULL && root->right == NULL) {
		return 1;
	}
	else {
		return x + y;
	}
}
int count2degree(struct tree* root) {
	int x, y;
	if (root == NULL) {
		return 0;
	} x = count2degree(root->left);
	y = count2degree(root->right);
	if (root->left != NULL && root->right != NULL) {
		return 1;
	}
	else {
		return x + y;
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input5.txt", "r", stdin);
	freopen("output5.txt", "w", stdout);
#endif
	struct tree* root = createtree(1);
	insertleft(root, 2);
	insertright(root, 3);
	insertleft(root->left, 4);
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
	postorder(root);
	printf("\n");

	printf("%d\n", countnodes(root) );
	printf("%d\n", height_tree(root) );
	printf("%d\n", count0degree(root) );
	printf("%d\n", count1degree(root) );
	printf("%d\n", count2degree(root) );




}