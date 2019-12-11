#include <stdio.h>

int main()
{
    int i,t, n, count, min=1000000000;
	printf("enter test cases\n");
    scanf("%d", &t);
    
    while(t--) {
	printf("size array\n");
        scanf("%d",&n);
        int arr[n];
	printf("entyer the values\n");
        for(int i=0; i<n; i++)
	 {
            scanf("%d", &arr[i]);
            
            if(arr[i]<min)
		 {
	   		 min=arr[i];
			 count = 0;
		 }
            if(arr[i]==min) 
		count++;
            
        }
        if(count%2==0)
	 printf("Unlucky\n");
        else printf("Lucky\n");
        count = 0;
        min = 1000000000;
    }
    
    return 0;
}
