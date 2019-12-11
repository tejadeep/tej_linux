#include<stdio.h>
int main()
{
	int m,n,i,j,x,y;
	printf(" enter rows & columns \n");
	scanf("%d%d",&m,&n);
	int mz[m][n];
	printf("enter the maze values only 0,1,2 numbers\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mz[i][j]);
		}
	}
	printf("enter x,y values\n");
	scanf("%d%d",&x,&y);
	int cnt=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			if(mz[i][j]==1)
				continue;
			else if(mz[i][j]==2|1)
				cnt++;

		}
	}		
	cnt++;
	printf("shortest path is %d\n",cnt);
	
}
