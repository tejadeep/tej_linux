#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(char *x,char *y)
{
	char temp;
	temp=*x;
	*x=*y;
	*y=temp;


}

void permute(char *a,int i,int n)
{
	int j;
	if(i==n)
		printf("%s\n",*a);
	else
	{
		for(j=i;j<=n;j++)
	{

		swap((a+i),(a+j));
		permute(a,i+1,n);
		swap((a+i),(a+j));

	}



	}


}

int main()
{
	char **a;
	int n,m,i;
	printf("enter the num\n");
	scanf("%d",&m);
	printf("entyer the string\n");
	a=malloc(m);
	for(i=0;i<m;i++)
	a[i]=malloc(20);		
	for(i=0;i<m;i++)
	scanf("%s",a[i]);

	for(i=0;i<m;i++)
	{
	n=strlen(a[i]);
	permute(a[i],0,n-1);
	}
	getchar();

	return 0;


}


