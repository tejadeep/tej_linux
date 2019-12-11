#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size,*a,*b,q,i,j,k;
	printf("enter size of arrays:");
	scanf("%d",&size);
	a=malloc(size*sizeof(int));
	b=malloc(size*sizeof(int));
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
	}
	printf("enter number of test cases:");
	scanf("%d",&q);
	int t[2][2];
	printf("enter values:");
	for(j=0;j<2;j++)
		for(k=0;k<2;k++)
			scanf("%d",&t[j][k]);
	int t1[2][2];
	printf("enter values:");
	for(j=0;j<2;j++)
		for(k=0;k<2;k++)
			scanf("%d",&t1[j][k]);
	if(t[0][0]>t[0][1] && t[1][0]==t[1][1])
		printf("YES\n");
	if(t1[0][0]>t1[0][1] && t1[1][0]<t1[1][1])
		printf("NO\n");
	return 0;
}
