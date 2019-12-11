#include<stdio.h>
int main()
{
	int n,v;
	printf("enter number\n");
	scanf("%d",&n);
	int i,j,l,m,k;
	for(i=0;i<n;i++)
	{
		v=0;
		k=96+n;
		for(j=0;j<(n+i);j++)
		{
			if(j<((n-1)-i))
				printf(" ");
			else if(j<n)
			{
				printf("%c",k);
				k--;
			}
			else
			{
				if(v==0)
					k++;
				k++;
				printf("%c",k);
				v++;
			}
		}
		printf("\n");
	}
	int k1=96+n;
	for(l=0;l<(n-1);l++)
	{
		int v1=0;
		for(m=0;m<((2*n)-l-2);m++)
		{
			if(m<=l)
				printf(" ");
			else if(m<n)
			{
				printf("%c",k1);
				k1--;
			}
			else 
			{
				if(v1==0)
					k1++;
				k1++;
				printf("%c",k1);
				v1++;
			}
		}
		printf("\n");
	}
}
