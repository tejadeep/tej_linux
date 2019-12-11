#include<stdio.h>
#include<stdlib.h>

int main()
{
	int T,size,i,j,*a,K,cnt;
	printf("enter no of test cases:");
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		cnt=0;
		printf("enter size of array:");
		scanf("%d",&size);
		a=malloc(size*sizeof(int));
		for(j=0;j<size;j++)
			scanf("%d",&a[j]);
		for(j=0;j<size;j++)
		{
			if(a[j]==0 && a[j+1]==0 && a[j+2]==0)
				cnt=3;
		}
		printf("%d\n",cnt);
		free(a);
	}
	return 0;
}
