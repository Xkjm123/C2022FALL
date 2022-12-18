#include<stdio.h>
#include<stdlib.h>
struct Node {
	int val;
	struct Node* next;
};
struct Node* construct(int arr[], int size);
struct Node* insert(struct Node* head, int val);
int main() {
	int a[3] = { 1,2,4 };
	struct Node* head;
	head = construct(a, 3);
	insert(head, 3);
	printf("%x", head);
	return 0;
}
struct Node* construct(int arr[], int size) {
	struct Node* p1, * p2, * p3;
	p1 = (struct Node*)malloc(sizeof(struct Node)); p1->val = 1;
	p2 = (struct Node*)malloc(sizeof(struct Node)); p2->val = 2;
	p3 = (struct Node*)malloc(sizeof(struct Node)); p3->val = 4;
	p1->next = p2; p2->next = p3; p3->next = NULL;
	return p1;
}
struct Node* insert(struct Node* head, int val) {
	struct Node* newp = malloc(sizeof(struct Node)); newp->val = val;
	struct Node* p = head;
	while (p != NULL) {
		if (p->next != NULL) {
			if (p->val < val && p->next->val >= val) {
				p->next = newp;
				p = p->next;
				newp->next = p;
			}
		}
		else {
			p->next = newp;
			newp->next = NULL;
		}
		p = p->next;
	}
	return head;
}