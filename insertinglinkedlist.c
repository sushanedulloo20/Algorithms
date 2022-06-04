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
struct node* start(struct node *head, int value) {
	struct node *p;
	p = malloc(sizeof(struct node));
	p->data = value;
	p->next = head;
	return p;
}
void end(struct node *head, int value) {
	struct node *p, *q;
	p = malloc(sizeof(struct node));
	p->data = value;
	p->next = NULL;
	q = head;
	while (q->next != NULL) {
		q = q->next;
	} q->next = p;
}
struct node * anyposition(struct node *head, int data, int index) {
	struct node * ptr = (struct node *) malloc(sizeof(struct node));
	struct node * p = head;
	int i = 0;

	while (i != index - 1)
	{
		p = p->next;
		i++;
	}
	ptr->data = data;
	ptr->next = p->next;
	p->next = ptr;
	return head;
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

	head = anyposition(head, 5, 2);
	head = anyposition(head, 1000, n );
	display(head);
}