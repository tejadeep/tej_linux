#include<stdio.h>
int main()
{
	int i,j;
	char a[20],b[10];
	scanf("%s",a);
	for(i=0;a[i];i++)
	{
		if(a[i]>='0' && a[i] <='9')
		{
		
		b[a[i]-48]++;

		}
	}
	for(j=0;j<10;j++)
	printf("%d ",b[j]);

}
