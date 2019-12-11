#include<stdio.h>
int main()
{
int x,y,a,b;
	printf("entyer the two numbers");
	scanf("%d %d",&x,&y);
  a= y ^ ((x ^ y) & -(x < y));
 	b= x ^ ((x ^ y) & -(x < y));

	printf("minimum==%d\nmaximum== %d \n",a,b);

}
