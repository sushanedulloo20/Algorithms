#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
//don't have duplicates
//inorder gives sorted order in binary search tree
struct tree
{
	int value;
	struct tree* left;
	struct tree* right;
};
struct tree *insert(struct tree *node, int key) {
	if (node == NULL) {
		struct tree *temp = (struct tree *)malloc(sizeof(struct tree));
		temp->value = key;
		temp->left = temp->right = NULL;
		return temp;
	}
	if (key < node->value)
		node->left = insert(node->left, key);
	else
		node->right = insert(node->right, key);

	return node;
}
int search(struct tree* root, int item) {
	if (root == NULL) {
		return -1;
	}
	if (item == root->value) {
		return root->value;
	} else if (item > root->value) {
		return search(root->right, item);
	} else {
		return search(root->left, item);
	}
}
void inorder(struct tree *root) {
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->value);
		inorder(root->right);
	}
}
struct tree* minnode(struct tree* root) {
	struct tree *current = root;
	while (current->left != NULL) {
		current = current->left;
	} return current;
}
struct tree* deletenode(struct tree* root, int item) {
	if (root == NULL) {
		return root;
	} if (item == root->value) {
		if (root->left == NULL) {
			struct tree* temp = root->right;
			free(temp);
			return temp;
		} else if (root->right == NULL) {
			struct tree* temp = root->left;
			free(temp);
			return temp;
		} else if (root->right != NULL && root->left != NULL) {
			struct tree* min = minnode(root->right);
			root->value = min->value;
			root->right = deletenode(root->right, min->value);
			return root;

		}
	} else if (item > root->value) {
		root->right = deletenode(root, item);
	} else {
		root->left = deletenode(root, item);
	}
	return root;

}
int main() {

#ifndef ONLINE_JUDGE
	freopen("input5.txt", "r", stdin);
	freopen("output5.txt", "w", stdout);
#endif
	struct tree* root = NULL;
	int a, k;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &k);
		root = insert(root, k);
	} inorder(root);
	printf("\n");

	printf("%d", search(root, 15));
	printf("\n");
	deletenode(root, 9);
	inorder(root);

	printf("\n");
	minnode(root);

}

