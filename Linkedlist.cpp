#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int roll;
	node *next;
} node;
node *root = NULL;

void append(int roll)
{
	if(root == NULL)
	{
		root = new node();
		root->roll = roll;
		root->next = NULL;
	}
	else 
	{
		node *current_node = root;
		while(current_node->next != NULL) current_node = current_node->next;
		
		node *newnode = new node();
		newnode->roll = roll;
		newnode->next = NULL;
		
		current_node->next = NULL;
	}
}

void print()
{
	node *current_node = NULL;
	while(current_node != NULL)
	{
		printf("%d\n", current_node->roll);
		current_node = current_node->next;
	}
}

int main()
{
	append(21);
	append(7);
	append(2);
	append(33);
	append(9);
	append(8);
	append(4);
	append(5);
	
	print();
	
	return 0;
}
