#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int roll;
	node *next;
};
node *root = NULL;

void append(int roll)
{
	if(root == NULL) //empty
	{
		root = new node();
		root->roll = roll;
		root->next = NULL;
	}
	else
	{ 
		node *current_node = root;
		while(current_node->next != NULL) 
			current_node = current_node->next;
	
		node *newnode = new node();
		newnode->roll = roll;
		newnode->next = NULL;
	
		current_node->next = newnode;
	}
}

void print()
{
	node *current_node = root;
	while(current_node != NULL) 
	{
		printf("%d\n", current_node->roll);
		current_node = current_node->next;
	}
}

int main()
{
	append(1);
	append(2);
	append(6);
	print();
	
	return 0;
}
