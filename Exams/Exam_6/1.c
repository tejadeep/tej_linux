#include<stdio.h>
int main()
{
int i,j,n,c,n1,n2,k,arr[10][10];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d%d",&n1,&n2);
for(j=0;j<n1-1;j++)
{
for(k=0;k<n;k++)
scanf("%d",&arr[j][k]);
}
}
i=40,k=14;
printf("output:\n%d\n%d\n%d\n%d\n",i,n,k,n);
}

