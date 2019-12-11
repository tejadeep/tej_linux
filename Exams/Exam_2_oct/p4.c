#include<stdio.h>
#define SIZE 100

void para(int pos,int n,int  open ,int close)
{
	static char str[SIZE];
	if(close==n)
	{
			printf("%s\n",str);
			return;
	}
	else
	{
		if(open > close)
		{
			str[pos]=')';
			para(pos+1,n,open,close+1);
		}
		if(open<n)
		{
			str[pos]='(';
			para(pos+1,n,open+1,close);	
		}
	}
}

void paranthesis(int n)
{
	if(n>0)
		para(0,n,0,0);
	return ;
}

int main()
{
	int n;
	printf("enter num to print paranthesis\n");
	scanf("%d",&n);
	paranthesis(n);
	return 0;
}

