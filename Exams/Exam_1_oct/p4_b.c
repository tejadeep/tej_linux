//change n=bits
// a=00001010
// b=00000111
//o/p is 3

#include<stdio.h>
int main()
{
	int n,m,pos,a,b,c=0;
	printf("enter two number\n");
	scanf("%d %d",&n,&m);
	pos=sizeof(int)*8-1;
	for(;pos>=0;pos--)
	{
		a=n>>pos&1;
		b=m>>pos&1;
		if(a!=b)
		c++;
		
	}
	printf("we need to change %d bits \n",c);
	
	
	
}
