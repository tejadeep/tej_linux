//dynamicallyyyy array 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,res=0;
	int *p;
	int i;
	printf("enter the size of array\n");
	scanf("%d",&num);
	p=malloc(num);
	printf("enter the eleements\n");
	for(i=0;i<num;i++)
	scanf("%d",&p[i]);
	
	for(i=0;i<num;i++)
	res=res+p[i];
	
	printf("sum of elements == %d\n",res);

}
