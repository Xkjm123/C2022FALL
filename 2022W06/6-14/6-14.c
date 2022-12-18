#include<stdio.h>
#include<stdlib.h>
struct Node {
	int val;
	struct Node* next;
};
struct Node* construct(int arr[], int size);
struct Node* search(struct Node* head, int val);
struct Node* delete(struct Node* head, struct Node* target);
int main() {
	int a[3] = { 1,2,3 };
	struct Node* head,  *del;
	head = construct(a, 3);
	del = search(head, 2);
	head = delete(head, del);
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
struct Node* search(struct Node* head, int val) {
	struct Node* p = head;
	while (p != NULL) {
		if (p->val == val) return p;
		p = p->next;
	}
	return NULL;
}
struct Node* delete(struct Node* head, struct Node* target) {
	struct Node* p = target, * ptmp = head;
	if (head == NULL)return NULL;
	if (p != head) {
		while (ptmp->next != target) {
			ptmp = ptmp->next;
		}
		ptmp->next = p->next;
		free(p);
	}
	else {      
		head = head->next;
		free(p);
	}
	return head;
}