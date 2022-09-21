//Leet Code
//Rotate linkedlist
#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node *head = NULL;
struct Node *addNode(int d)
{
	struct Node *temp;
	temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = d;
	temp->next = NULL;
	if (head==NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head = temp;
	}
	return head; 
}
struct Node *rotatelist(struct Node *t,int k)
{	
	struct Node *p = t;
	struct Node *h = t;
	struct Node *ta = t;
	if (t==NULL)
	{
		return NULL;
	}
	else if (t->next==NULL)
	{
		return t;
	}
	else if (k==0)
	{
		return t;
	}
	else
	{	
		int c=0,i=0;
		for (ta=t;ta!=NULL;ta=ta->next,c++);
		ta=t;
		while (k>c)
		{
			k=k-c;
		}
		if (c==k)
		{
			return h;
		}
		for (i=0;i<(c-k)-1;i++)
		{
			p=p->next;
			h=h->next;
			ta=ta->next;
		}
		h=h->next;
		for (i=0;i<k;i++)
		{
			ta=ta->next;
		}
		ta->next=t;
		p->next=NULL;
	}
	return h;
}
void display(struct Node *t)
{
	if (t==NULL)
	{
		return;
	}
	else
	{
		printf("%d ",t->data);
		display(t->next);
	}
}
int main()
{
	struct Node temp;
	addNode(1);
	addNode(2);
	//addNode(3);
	//addNode(4);
	//addNode(5);
	display(head);
	printf("\n\n");
	head = rotatelist(head,5);			
	printf("\n\n");
	display(head);
}