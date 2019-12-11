#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int num,i,j;
	char *a;
	printf("enter the no of strings ypu want\n");
	scanf("%d",&num);
	char *str[num];
	for(i=0;i<num;i++)
	str[i]=malloc(15);
	printf("enter the strings\n");
	for(i=0;i<num;i++)
	scanf("%s",str[i]);
	
	
		for (i = 0; i < num-1; i++)      
      {
    // Last i elements are already in place  
    for (j = 0; j < num-i-1; j++)  
        if (strcmp(str[j],str[j+1])==0)  
	{
           // swap(&str[j], &str[j+1]);  
	
		strcpy(a,str[j]);
		strcpy(str[j],str[j+1]);
		strcpy(str[j+1],a);
		


	}
	}
	for(i=0;i<num;i++)
	printf("%s\n",str[i]);
	
}
