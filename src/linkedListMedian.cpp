/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	int i=0, j=0,k,m=0,n=0;
	struct node *temp;
	temp = head;
	if (head == NULL){
		return -1;
	}
	while (temp != NULL){
		i++;
		temp = temp->next;
	}
	if (i % 2 != 0){
		i = (i / 2) + 1;
		temp = head;
		for (k = 1; k < i; k++){
			temp = temp->next;
		}
		return temp->num;
	}
	else{
		i = i / 2;
			j = i + 1;
			temp = head;
			for (k = 1; k < i; k++){
				temp = temp->next;
			}
			m = temp->num;
			temp = temp->next;
			n = temp->num;
			return (m + n) / 2;

	}


	

	
}
