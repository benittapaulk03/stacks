#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node *top=NULL;
void push(int val)
{
	struct node* newnode;
	newnode= (struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	if(top==NULL)
	newnode->next=NULL;
	else
	{
	newnode->next=top;
	}
	top=newnode;
	printf("node is pushed");
}
void pop()
{
	if(top==NULL)
	printf("Underflow");
	else
	{
	struct node*temp=top;
	int temp_data=top->data;
	top=top->next;
	free(temp);
	printf("%d is popped",temp_data);
	}
}
void display()
{
	if(top==NULL)
	printf("nothing to print");
	else
	{
	printf("the stack is \n");
	struct node* temp=top;
	while(temp->next!=NULL)
	{
		printf("\t%d",temp->data);
		temp=temp->next;
	}
	printf("\t%d\n",temp->data);
	}
}
void main()
{
	int ch,val;
	while(1)
	{
		printf("1.Push\n2.Pop\n3.Display\nEnter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("Enter element to be pushed: ");
				scanf("%d",&val);
				push(val);
				break;
				
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			default:
			{
				printf("\ninvalid choice");
				exit(0);
			}
		}
	}
}

	


	
	
