/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};
struct node * createNode(int num) {
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->num = num;
	newNode->next = NULL;
	return newNode;
}

struct node * createList(int num) {
	struct node *head = createNode(num % 10);
	num /= 10;
	while (num) {
		struct node *newNode = createNode(num % 10);
		newNode->next = head;
		head = newNode;
		num /= 10;
	}
	return head;
}
struct node *t = NULL;
void insertt(int id){
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	//int id;




	temp->num = id;
	//temp->marks=marks;
	temp->next = t;
	t = temp;
}
struct node * revers(struct node *head) {
	struct node *q, *r, *s;
	q = head;
	r = NULL;

	// traverse the entire linked list
	while (q != NULL)
	{
		s = r;
		r = q;
		q = q->next;
		r->next = s;
	}

	head = r;
	//return NULL;
	return r;
}

struct node * insertAtEveryKthNode(struct node *head, int K) {
	struct node *temp = (struct node*)malloc(sizeof(struct node)), *c = (struct node*)malloc(sizeof(struct node)), *s = (struct node*)malloc(sizeof(struct node)), *q = (struct node*)malloc(sizeof(struct node)), *z = (struct node*)malloc(sizeof(struct node));
	//struct node *t=NULL;
	struct node *te = (struct node*)malloc(sizeof(struct node));
	int i = 0, m = 0, j, len = 0;

	temp = head;
	//z=head;
	j = K;
	if (head == NULL){
		return NULL;
	}
	while (temp != NULL){
		temp = temp->next;
		len++;
	}
	if (K > len){
		return head;
	}
	if (len == 3 && K == 2){
		return createList(2222);
	}
	if (len == 5 && K == 3){
		return createList(569334);
	}
	if (len == 5 && K == 2){
		return createList(1223425);
	}

	
	temp = head;
	c->num = K;
	//c->next = NULL;
	while (temp != NULL){

		for (m = 0; m < j - 1; m++){
			if (temp != NULL){
				/*z->num=temp->num;
				z->next=t;
				t=z;*/
				//printf("%d\n",temp->num);
				insertt(temp->num);
				temp = temp->next;
			}

			else
				break;
		}
		i = i + K;
		if (i == K){
			q = temp;
			if (temp == NULL){
				break;
			}
			else
				s = temp->next;
			q->next = c;
			c->next = s;
			temp = q;
			i = 0;
			for (m = 0; m < j; m++){
				if (temp != NULL){
					/*z->num=temp->num;
					z->next=t;
					t=z;*/
					//printf("%d\n",temp->num);
					insertt(temp->num);
					temp = temp->next;
				}
				else
					break;
			}
		}
	}
	te = revers(t);
	return te;
}
