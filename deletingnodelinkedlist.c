#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void display(struct node *head) {
	if (head == NULL) {
	}
	else {
		printf("%d ", head->data);
		display(head->next);
	}
}
struct node* deletefirst(struct node * head) {
	struct node *p;
	p = head;
	head = head->next;
	free(p);
	return head;
}
void deleteanyindex(struct node* head, int index) {
	struct node *p, *q;
	p = head;
	q = head->next;
	for (int i = 0; i < index - 1; i++) {
		p = p->next;
		q = q->next;
	}
	p->next = q->next;
	free(q);
}
struct node*deleteanyvalue(struct node *head, int value) {
	struct node*p, *q;
	p = head;
	q = head->next;
	while (q->data != value && q->next != NULL) {
		p = p->next;
		q = q->next;
	}
	if (q->data == value) {
		p->next = q->next;
		free(q);
	} return head;

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input5.txt", "r", stdin);
	freopen("output5.txt", "w", stdout);
#endif
	struct node *prev, *head, *p;
	int n, i;
	scanf("%d", &n);
	head = NULL;
	for (int i = 0; i < n; i++) {
		p = malloc(sizeof(struct node));
		scanf("%d", &p->data);
		p->next = NULL;
		if (head == NULL) {
			head = p;
		} else {
			prev->next = p;
		} prev = p;
	}
	head = deleteanyvalue(head, 2);
	deleteanyindex(head, 1);
	display(head);
}