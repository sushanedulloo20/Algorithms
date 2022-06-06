#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* left;
	struct node* right;
};

struct node* createnode(int data) {
	struct node* n;
	n = (struct node*)malloc(sizeof(struct node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}
void preorder(struct node* node) {
	if (node == NULL) {
		return;
	}
	printf("%d ", node->data);
	preorder(node->left);
	preorder(node->right);
}
struct node* getnewnode(int data) {
	struct node* n;
	n = (struct node*)malloc(sizeof(struct node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}
struct node* copytree(struct node* node) {
	if (node == NULL) {
		return NULL;
	}
	struct node* newnode = getnewnode(node->data);
	newnode->left = copytree(node->left);
	newnode->right = copytree(node->right);
	return newnode;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input5.txt", "r", stdin);
	freopen("output5.txt", "w", stdout);
#endif
	struct node *p = createnode(4);
	struct node *p1 = createnode(1);
	struct node *p2 = createnode(6);
	struct node *p3 = createnode(5);
	struct node *p4 = createnode(2);
	p->left = p1;
	p->right = p2;
	p1->left = p3;
	p1->right = p4;
	preorder(p);
	copytree(p);
	printf("\n");
	preorder(p);



}
























