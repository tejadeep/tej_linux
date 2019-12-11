#include<stdio.h>
#include<stdlib.h>
struct vot
{
	int num;
	struct vot *next;
};
typedef struct vot SL;

void add_beg(SL **);
void display(SL *);
int main()
{
	SL *hptr=0;
	char ch;
	do
	{
		add_beg(&hptr);
		printf("want more Y/N \n");
		scanf(" %c",&ch);

	}while(ch=='y'||ch=='Y');
	printf("1st linked list ");
	display(hptr);
	printf("\n");
	find(hptr);
	

	
	
	return 0;
}
void find(SL *ptr)
{
	int n,c=1;
	printf("enter the numeber\n");
	scanf("%d",&n);
	while(ptr)
	{
	if(c>=n)
	printf("%d ",ptr->num);
	ptr=ptr->next;
	c++;
	}
	
	
}
void add_beg(SL **ptr)
{
	SL *temp;
	temp=(SL *)malloc(sizeof(SL));
	printf("enter the number\n");
	scanf("%d",&temp->num);
	
	temp->next=*ptr;
	*ptr=temp;
	
}
	

void display(SL *p)
{
	while(p)
	{
	printf("%d ",p->num);
	p=p->next;
	}
	printf("\n");
}



