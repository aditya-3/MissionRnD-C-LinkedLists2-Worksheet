/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * reverseLinkedList(struct node *head) {
	if (head == NULL)
		return NULL;
	else if (head->next == NULL)
		return head;
	else if (head->next->next == NULL)
	{
		int temp = head->num;
		head->num = head->next->num;
		head->next->num = temp;
		return head;
	}
	else
	{
		struct node *prevNode=NULL, *currNode = head , *nextNode=NULL;
		while (currNode->next != NULL)
		{
			nextNode = currNode->next;
			currNode->next = prevNode;
			prevNode = currNode;
			currNode = nextNode;
		}
		currNode->next = prevNode;
		head = currNode;
		return head;

	}
}
