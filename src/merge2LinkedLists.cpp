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
//non recursion

/*struct node * merge2LinkedLists(struct node *head1, struct node *head2) {
	struct node *result = NULL, *root;
	root = result;
	if (head1 == NULL && head2 == NULL)
		return NULL;
	if (head1 == NULL)
		return head2;
	else if (head2 == NULL)
		return head1;
	else
	{
		if (head1->num < head2->num)
		{
			result = head1;
			head1 = head1->next;
		}
		else
		{
			result = head2;
			head2 = head2->next;
		}
		root = result;
		while (head1 != NULL && head2 != NULL)
		{
			if (head1->num < head2->num)
			{
				result->next = head1;
				result = result->next;
				head1 = head1->next;
			}
			else
			{

				result->next = head2;
				result = result->next;
				head2 = head2->next;
			}
		}
		if (head1 == NULL)
			result->next = head2;
		else if (head2 == NULL)
			result->next = head1;

		return root;
		
}*/
//using recursion
struct node * merge2LinkedLists(struct node *head1, struct node *head2) {
	struct node *result;
	if (head1 == NULL)
		return head2;
	else if (head2 == NULL)
		return head1;

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
		
	

	return result;

}
