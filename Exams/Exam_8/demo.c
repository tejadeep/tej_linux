#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the isValid function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//
char* isValid(char* s) {
   char a[26]={0};
   int i,n,flag=0,flag2=0,flag3=0;
    for(i=0;s[i];i++)
    {
	if(s[i]=='n')
        printf("  %c\n",s[i]);
        if(s[i]>='A'&& s[i]<='Z')
       a[s[i]-65]++;
    else 
        a[s[i]-97]++;
    }
        for(i=0;i<26;i++)
        {
        if(a[i]!=0)
        {   
            if(flag==0)
            {
            n=a[i];
            flag=1;
            }
            else if( (a[i]==n+1)||(a[i]==n-1) && flag2==0)
            {
                if(flag2==0)
                flag2=1;
            }
            else if(n!=a[i])
            { 
    for(int m=0;m<26;m++)
    printf("%d ",a[m]);
		if(flag3==0)
		flag3=1;
		else
                return "NO";   
            }
        }

        }

    for(i=0;i<26;i++)
    printf("%d ",a[i]);
   
    return "YES";

}

int main()
{
//    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = isValid(s);
	printf("%s\n",result);
  //  fprintf(fptr, "%s",result);

  //  fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
