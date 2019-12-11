#include<stdio.h>
int main()
{
	char s[20];
	int i,c1=0,c2=0;
	printf("enter the string\n");
	scanf("%s",s);
	
	for(i=0;s[i];i++)
	{
		if(s[i]=='o' || s[i]=='O')
		c1++;
		if(s[i]=='Z' || s[i]=='z')
		c2++;
	
	
	}
		if(c1==(2*c2))
		printf("Yes\n");
		else
		printf("No\n");
		
		return 0;
	


}
