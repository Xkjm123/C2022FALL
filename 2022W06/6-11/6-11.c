#include<stdio.h>
#include<stdlib.h>
struct Node {
	int val;
	struct Node* next;
};
struct Node* construct(int arr[], int size);
struct Node* insert(struct Node* head, int val);
int main() {
	int a[3] = { 1,2,3 };
	struct Node* head;
	head = construct(a, 3);
	head=insert(head,4);
	printf("%x",head);
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
struct Node* insert(struct Node* head, int val) {
	struct Node* newp = malloc(sizeof(struct Node)); newp->val = val;
	newp->next = head;
	return newp;
}