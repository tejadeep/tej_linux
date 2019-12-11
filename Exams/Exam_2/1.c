#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct triangle
{
	int a,b,c;
};

typedef struct triangle triangle;

int * sort(int *s,int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(s[j]>s[j+1])
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	return s;
}

void sort_by_area(triangle* tr, int n) 
{
	int *s,buf[n];
	s=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		int x=(tr[i].a+tr[i].b+tr[i].c)/2;
		s[i]=sqrt(x*(x-tr[i].a)*(x-tr[i].b)*(x-tr[i].c));
		buf[i]=s[i];
	}
	s=sort(s,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s[j]==buf[i])
			{
				printf("%d %d %d\n",tr[j].a,tr[j].b,tr[j].c);
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	triangle arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&(arr[i].a));
		scanf("%d",&(arr[i].b));
		scanf("%d",&(arr[i].c));
	}
	sort_by_area(arr,n);
	return 0;
}
