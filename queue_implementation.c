#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int size;
	int f;
	int r;
	int* arr;
};
int isfull(struct queue *q) {
	if (q->r == q->size - 1) {
		return 1;
	} else {
		return 0;
	}
}
int isempty(struct queue *q) {
	if (q->r == q->f) {
		return 1;
	} else {
		return 0;
	}
}
void enequeue(struct queue *q, int newitem) {
	if (isfull(q)) {
		printf("queue is full");
	} else {
		q->r++;
		q->arr[q->r] = newitem;
	}
}

int dequeue(struct queue *q) {
	int a = -1;
	if (isempty(q)) {
		printf("queue is empty");
	} else {
		q->f++;
		a = q->arr[q->f];
	}
	return a;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input5.txt", "r", stdin);
	freopen("output5.txt", "w", stdout);
#endif

	struct queue* q = (struct queue*)malloc(sizeof(struct queue));

	q->size = 100;
	q->f = q->r = -1;
	q->arr = (int*)malloc(q->size * sizeof(int));
	enequeue(q, 7);
	enequeue(q, 12);
	enequeue(q, 15);
	printf("%d", dequeue(q));

}