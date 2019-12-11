#include<stdio.h>
main()
{
	int num,i,j,temp;
	printf("enter the size of array\n");
	scanf("%d",&num);
	int a[num];
	printf("enter the values\n");
	for(i=0;i<num;i++)
	scanf("%d",&a[i]);
	i--;
	for(j=0;j<num/2;j++,i--)
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;

	}
	for(i=0;i<num;i++)
	printf("%d ",a[i]);



}
