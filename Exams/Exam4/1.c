#include<stdio.h>
int main()
{
	int t,n,k,i,j,p,m=1;
	printf("enter input data\n");
	scanf("%d\n",&t);
	char str[30][20];
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&n,&k);
	
		printf("enter the string\n");
		scanf("%s",str[i]);
	printf("%s\n",str[i]);
		for(j=0;j<n;j++)
		{	
		
			if((str[i][j]>='a' && str[i][j]<='z')||(str[i][j]>='A' && str[i][j]<='Z'))
			{
			for(p=1;p<=k;p++)
			{
			str[i][j]=str[i][j]+1;
			if(str[i][j]>'z')
				{
					str[i][j]='a';			
				}
			else if(str[i][j]>'Z'&&str[i][j]<'a')
				{
					str[i][j]='A';
				}
			}
			
			}
			
		}
	printf("%s\n",str[i]);

	}
	




}
