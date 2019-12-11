#include<stdio.h>
int main()
{
	int num,i,count=0;
	float res=0;
	printf("enter the size of elements\n");
	scanf("%d",&num);
	int a[num];
	printf("enter the elements\n");
	for(i=0;i<num;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<num;i++)
	{
	res=res+(float)a[i];
	count++;
	}
	res=res/count;
	printf("avg of all elements is %.3f\n",res);
	


}
