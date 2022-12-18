#define _CRT_SECURE_NO_WARNINGS
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
	int a[3] = { 1,2,3 }, n;
	scanf("%d",&n);
	struct Node* head, * del;
	head = construct(a, 3);
	printf("head is %x\n",head);
	while (search(head, n) != NULL) {
		del = search(head, n);
		head = delete(head, del);
	}
	printf("%x", head);
	return 0;
}
struct Node* construct(int arr[], int size) {
	struct Node* p1, * p2, * p3;
	int i = 0;
	p1 = (struct Node*)malloc(sizeof(struct Node)); p1->val = arr[i]; i++;
	p2 = (struct Node*)malloc(sizeof(struct Node)); p2->val = arr[i]; i++;
	p3 = (struct Node*)malloc(sizeof(struct Node)); p3->val = arr[i]; i++;
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
	struct Node* p = target, * ptmp = head,*ph=head;
	//if (head == NULL)return NULL;
	if (p != head) {
		while (ptmp->next != target) {
			ptmp = ptmp->next;
		}//ptmp->next==target    
		ptmp->next = p->next;                //head  ...  ...  ptmp  target  p->next
		free(p);
	}
	else {//target==head
		ph = head->next;
		free(p);
	}
	return ph;
}