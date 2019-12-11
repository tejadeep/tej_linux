
#include<stdio.h>
#include<stdlib.h>
typedef struct sll
{
	int data;
	struct sll *link;
}node;
node *head=NULL;
void insertlast(int ele)
{
	node *new=(node *)malloc(sizeof(node));
	new->data=ele;
	new->link=head;
	if(head==NULL)
	{
		head=new;
		return;
	}
	node *temp=head;
	head->link=new;
	head=new;

}


void search(node *head)
{
	node *temp=head;
	while(temp)
	{
		if(temp==head)
		{
			printf("\n loop starts at %d ",temp->data);
			break;
		}
		temp=temp->link;
	}	
}
int main()
{
	int n;
	printf("enter no.of ele in list one\n");
	scanf("%d",&n);
	int a[n];
	printf("enter ele to list one \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		insertlast(a[i]);
	}
		
	search(head);
}
