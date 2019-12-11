#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n;
printf("enter number of strings u need\n");
scanf("%d",&n);
char *p[n];
for(i=0;i<n;i++)
p[i]=malloc(15);
printf("enter the strings\n");
for(i=0;i<n;i++)
scanf("%s",p[i]);
//////////////////char *p[3]={"good", "morning","friends"};
for(i=0;i<3;i++)
	printf("%s\n",p[i]);

}
