#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
	
};
struct node *root = NULL;
void insert();
int main()
{
	int choice;
	
	do
	{
	printf("\n[1]insert data");
	printf("\n[2]exit");
	
	printf("Enter your choice...");
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 1: insert();
	break;
	default :printf("Enter correct choice...");
    }

 }	while(choice!=2);
}
void insert()

{
	int data;
	struct node *curr,*parent,*temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter data..");
	scanf("%d",&temp->data);
	temp->left = NULL;
	temp->right = NULL;
	if(root==NULL)
	{
		root = temp;
	}
	else
	{
		root=curr=parent;
		while(curr)
		{
			parent = curr;
			if(temp->data>curr->data)
			{
				curr = curr->right;
			}
			else
			{
				curr = curr->left;
			}
		}
		if(temp->data>parent->data)
		{
			parent->right = temp;
		}
		else
		{
			parent->left = temp;
		}
	}
}
