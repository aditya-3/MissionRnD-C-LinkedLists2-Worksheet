/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/
#include<stdlib.h>
#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
void link(struct node *temp1, struct node *temp2)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	struct node *t;
	t = temp1;
	temp1->next = temp2;

}
struct node * merge2LinkedLists(struct node *head1, struct node *head2) {
	struct node *result;
	if (head1 == NULL)
		return head2;
	else if (head2 == NULL)
		return head1;
	else
	{
		if (head1->num < head2->num)
		{
			result = head1;
			result->next = merge2LinkedLists(head1->next,head2);
		}
		else
		{
			result = head2;
			result->next = merge2LinkedLists(head1, head2->next);
		}
		
	}
	return result;

}
