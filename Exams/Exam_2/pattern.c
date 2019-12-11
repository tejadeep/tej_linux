#include<stdio.h>
main()
{
int i,j,k;
for(i=-3;i<=3;i++)
{
	k=i;
	if(k>0)
	k=-k;

	for(j=0;j<=3;j++)
	{
	if(j>k)
	printf(" ");
	else
	printf("* ");

	

	}
	printf("\n");
}








}
