#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *link;
} node;
/*
 * |data|link = address of the next data
 *   head
 *
 * */

int main()
{
	/**
	 *
	 * |data1|ptr2 >>> |data2|ptr3
	 * data|ptr>>>>next data
	 * head 
	 *
	 * 45, 80, 4
	 */
	int count = 0;
	
	node *head = NULL;
	head = malloc(sizeof(struct node));
	head -> data = 45;
	head -> link = NULL;

	node *new;
	new = malloc(sizeof(struct node));
	new -> data = 80;
	new -> link = NULL;
	head -> link = new;

	new = malloc(sizeof(struct node));
	new -> data = 4;
	new -> link = NULL;
	head -> link -> link = new;

	node *ptr = NULL;
	ptr = head;
	while (ptr != NULL)
	{
		count++;
		printf("%d : %d\n", ptr -> data, count);
		ptr = ptr -> link;
	}

	return (0);

}



