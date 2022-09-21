//Leet Code
//Add two number
#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
	int val;
	struct ListNode *next;
};
struct ListNode *head0 = NULL;
struct ListNode *head1 = NULL;
struct ListNode *head2 = NULL;
struct ListNode *addnode0(int d)
{
	struct ListNode *temp;
	temp = (struct ListNode *)malloc(sizeof(struct ListNode));
	temp->val = d;
	temp->next = NULL;
	if (head0==NULL)
	{
		head0 = temp;
	}
	else
	{
		temp->next = head0;
		head0 = temp;
	}
	return head0;
}
struct ListNode *addnode1(int d)
{
	struct ListNode *temp;
	temp = (struct ListNode *)malloc(sizeof(struct ListNode));
	temp->val = d;
	temp->next = NULL;
	if (head1==NULL)
	{
		head1 = temp;
	}
	else
	{
		temp->next = head1;
		head1 = temp;
	}
	return head1;
}
int reverse(int a)
{
	long int rem=0,rev=0;
	int v = a;
	while (v != 0)
	{
		rem = v % 10;
    	rev = rev * 10 + rem;
    	v /= 10;
  	}
  	return rev;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode *t1;
	int val1=0,val2=0;
	for (t1=l1;t1!=NULL;t1=t1->next)
	{
		val1 = val1*10 + t1->val;
	}
	for (t1=l2;t1!=NULL;t1=t1->next)
	{
		val2 = val2*10 + t1->val;
	}
	int v = val1 + val2;
	v = reverse(v);
	struct ListNode *head = NULL;
	if (v==0)
	{
		struct ListNode *temp;
		temp = (struct ListNode *)malloc(sizeof(struct ListNode));
		temp->val = (v%10);
		temp->next = NULL;
		v/=10;											
		if (head==NULL)
		{
			head = temp;
		}
		else
		{
			temp->next = head;
			head = temp;
		}
	}
	while (v>0)
	{
		struct ListNode *temp;
		temp = (struct ListNode *)malloc(sizeof(struct ListNode));
		temp->val = (v%10);
		temp->next = NULL;
		v/=10;											
		if (head==NULL)
		{
			head = temp;
		}
		else
		{
			temp->next = head;
			head = temp;
		}
	}
	return head;
}
void display(struct ListNode *t)
{
	if (t==NULL)
	{
		printf("\n");
		return;
	}
	else
	{
		printf("%d ",t->val);
		display(t->next);
	}
}
int main()
{
	printf("Enter data for l1: ");
	int n,a;
	scanf("%d",&n);
	while (n--)
	{
		scanf("%d",&a);
		addnode0(a);
	}
	printf("Enter data for l2: ");
	scanf("%d",&n);
	while (n--)
	{
		scanf("%d",&a);
		addnode1(a);
	}
	struct ListNode *t = addTwoNumbers(head0,head1);
	printf("\n\n\n\n");
	display(t);
}