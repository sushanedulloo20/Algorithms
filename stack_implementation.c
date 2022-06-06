#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct stack {
	int items[MAX];
	int top;
};
int count = 0;
void createempty(struct stack* s) {
	s->top = -1;
}
int isfull(struct stack* s) {
	if (s->top == MAX - 1) {
		return 1;
	} else {
		return 0;
	}
}
int isempty(struct stack* s) {
	if (s->top == -1) {
		return 1;
	} else {
		return 0;
	}
}
void push(struct stack* s, int newitem) {
	if (isfull(s)) {
		printf("Stack full");
	} else {
		s->top++;
		s->items[s->top] = newitem;
	}
	count++;

}
void pop(struct stack* s) {
	if (isempty(s)) {
		printf("Stack empty");
	} else {
		s->top--;
	} count--;
}
void printstack(struct stack* s) {
	for (int i = 0; i < count; i++) {
		printf("%d ", s->items[i]);
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input5.txt", "r", stdin);
	freopen("output5.txt", "w", stdout);
#endif
	struct stack* s = (struct stack*)malloc(sizeof(struct stack));
	createempty(s);
	push(s, 1);
	push(s, 2);
	push(s, 3);
	push(s, 4);
	printstack(s);
	pop(s);
	push(s, 9);
	printf("\n");
	printstack(s);
}