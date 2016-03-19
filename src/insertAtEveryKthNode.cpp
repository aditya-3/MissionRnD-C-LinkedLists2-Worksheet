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

struct node * insertAtEveryKthNode(struct node *head, int K) {
	int count = 0;
	if (head == NULL || K<=0 )
		return NULL;
	else
	{
		struct node *temp=head;
		
		while (temp != NULL)
		{
			if (count%K == K - 1)
			{
				struct node *temp1 = (struct node *)malloc(sizeof(struct node));
				temp1->num = K;
				temp1->next = temp->next;
				temp->next = temp1;
				temp = temp->next;
			}
				temp = temp->next;
				count++;
		}
		return head;
	}
	
}
