#include<stdio.h>
#include<stdlib.h>
struct Node {
	int val;
	struct Node* next;
};
struct Node* construct(int arr[], int size);
struct Node* reverse(struct Node* head);
int main() {
	int a[3] = { 1,2,3 };
	struct Node* head;
	head = construct(a, 3);
	printf("%x", head);
	return 0;
}
struct Node* construct(int arr[], int size) {
	struct Node* p1, * p2, * p3;
	p1 = (struct Node*)malloc(sizeof(struct Node)); p1->val = 1;
	p2 = (struct Node*)malloc(sizeof(struct Node)); p2->val = 2;
	p3 = (struct Node*)malloc(sizeof(struct Node)); p3->val = 3;
	p1->next = p2; p2->next = p3; p3->next = NULL;
	return p1;
}
struct Node* reverse(struct Node* head) {
	struct Node* ph = head, * ptail, * p = head;
	while (ph->next != NULL) {
		while (p->next->next != NULL) {
			p = p->next;
		}
		p->next->next = p;
		p->next = NULL;
	}
	return p;
}