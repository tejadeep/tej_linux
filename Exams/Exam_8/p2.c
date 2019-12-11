#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,n,j=0,k=0,a,x,y;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	scanf("%d",&x);
	scanf("%d",&y);
	a=arr[0];
	int ma[n],mi[n];
	for(i=1;i<n;i++)
	{
		if(arr[i]<a){
			mi[j]=arr[i];
			j++;}
		else
		{
			ma[k]=arr[i];
			k++;
		}
	}

	int maxi=y;
	if(y>a)
	{
		for(i=0;i<k;i++)
		{
			if(ma[i]==y)
				break;
			else
				if(ma[i]>maxi)
					maxi=ma[i];
		}
	}
	else
	{
		for(i=0;i<j;i++)
		{
			if(mi[i]==y)
				break;
			else
				if(mi[i]>maxi)
					maxi=mi[i];
		}
	}
	printf("%d\n",maxi);
	return 0;
}
