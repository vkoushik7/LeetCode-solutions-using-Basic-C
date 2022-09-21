//Leet Code 
//Reverse linked list
#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node *head = NULL;
struct Node *addnode(int d)
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
static struct Node *g = NULL;
struct Node* reverseList(struct Node* h)
{
	if (h->next==NULL)
	{
		h->next = g;
		g = h;
		struct Node *ex = g;
		g = NULL;
		return ex;
	}
	else
	{
		struct Node *n;
		n = h->next;
		h->next = g;
		g = h;
		return reverseList(n);
	}
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
	int n,a;
	scanf("%d",&n);
	while (n--)
	{
		scanf("%d",&a);
		addnode(a);
	}
	display(head);
	printf("\n\n");
	head = reverseList(head);
	display(head);
	
}