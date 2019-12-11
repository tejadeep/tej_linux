#include<stdio.h>
int main()
{
	int n,k,m,i,q,count=0,c2=0,c3=0,c4;
	printf("enter the values\n");
	scanf("%d %d %d",&n,&k,&m);
	c4=k;
	char a[n];
	printf("emter the string\n");
	scanf("%s",a);

	printf("before~~~~  %s\n",a);
	for(i=0;i<n;i++)
	{	
		count++;


		printf("****************************************  %c   %d\n",a[i],count);
		if(a[i]=='0')
		c2++;
		if(a[i]=='1')
		c3++;
	
		if(count==k)
		{
		if(c2!=c3)
		{
			printf("~~~~~~~~~~~~~  %d %d\n",c2,c3);
			q=i-k+1;
			while(1)
			{

				
				if(a[q]=='1')
				{
				printf("^^^^^^^^^^^^^^^^^^ %d\n",q);

				a[q]='0';
				c2++;
				c3--;
				if(c2==c3)
				break;
					
				}
				c4--;
				if(c4==0)
				{
				c4=k;
				break;
				}
				q++;
				
			}

		}
		printf("~~~~~~~~~`` %s\n",a);
		c2=0;
		c3=0;
		count=0;


		}
			
	
	}

	printf("after ~~~~~~~  %s\n",a);

	

}
