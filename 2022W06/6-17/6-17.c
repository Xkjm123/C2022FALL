#include<stdio.h>
#include<stdlib.h>
struct Node {
	int val;
	struct Node* next;
};
struct ret {
	int val;
	struct Node* newhead;
};
struct Node* construct(int arr[], int size);
struct Node* insert(struct Node* head, int val);
struct Node* search(struct Node* head, int val);
struct ret getval(struct Node* head);
struct Node* merge(struct Node* head1, struct Node* head2);
int main() {
	int a[3] = { 1,2,5 },b[3]={3,4,6};
	struct Node* head1,*head2;
	head1 = construct(a, 3);
	head2 = construct(b, 3);
	head1 = merge(head1, head2);
	return 0;
}
struct Node* construct(int arr[], int size) {
	struct Node* p1, * p2, * p3;
	p1 = (struct Node*)malloc(sizeof(struct Node)); p1->val = 1;
	p2 = (struct Node*)malloc(sizeof(struct Node)); p2->val = 2;
	p3 = (struct Node*)malloc(sizeof(struct Node)); p3->val = 5;
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
struct Node* search(struct Node* head, int val) {
	struct Node* p = head;
	while (p != NULL) {
		if (p->val == val) return p;
		p = p->next;
	}
	return NULL;
}
struct ret getval(struct Node* head) {
	struct Node* p = head;
	struct ret ret;
	int val=p->val;
	head = p->next;
	free(p);
	ret.val = val;
	ret.newhead = head;
	return ret;
}
struct Node* merge(struct Node* head1, struct Node* head2) {
	for (int i = 0; i < 3; i++) {
		struct ret gotval = getval(head2);
		insert(head1, gotval.val);
	}
	return head1;
}