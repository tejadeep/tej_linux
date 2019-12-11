#include<stdio.h>
int main()
{
	 int a,b,n,m,pos,l,t,k=0;
	printf("enter two number\n");
	scanf("%d %d",&a,&b);
	

	printf("before ::: \n");
	pos=sizeof(int)*8-1;
	for(;pos>=0;pos--)
	printf("%d ",a>>pos&1);
		
	printf("\n");
	pos=sizeof(int)*8-1;
	for(;pos>=0;pos--)
	printf("%d ",b>>pos&1);
	printf("\n");
	printf("Enter the two positions\n");
	scanf("%d %d",&n,&m);


	printf("After :::::\n");
	pos=sizeof(int)*8-1;
	for(;pos>=0;pos--)
	{
	
	if(pos>=n && pos<=m)
	{
	pos=n;
		while(pos<=m)
		{
		l=a>>pos&1;
		t=b>>k&1;
		if(l!=t)
		a=a^1<<pos;
		pos++;	
		k++;

		}
		break;

	}


	}
	pos=sizeof(int)*8-1;
	for(;pos>=0;pos--)
	printf("%d ",a>>pos&1);	
	
}
