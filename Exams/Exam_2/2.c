#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {

return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);

}
int distinct_chars(const char *a)
{
    int dist = 0;
   
    while (*a != '\0') {
        if (!strchr(a + 1, *a))
            dist++;
        a++;
    }
    return dist;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) 
{
    int res = distinct_chars(a) - distinct_chars(b);
    return (res) ? res : lexicographic_sort(a, b);
    
}

int sort_by_length(const char* a, const char* b) 
{
    int res = strlen(a) - strlen(b);
    return (res) ? res : lexicographic_sort(a, b);

}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b))
{
    int sorted = 0;
    while (!sorted) {
        sorted = 1;
        for (int i = 0; i < len - 1; i++) {
            if (cmp_func(arr[i], arr[i + 1]) > 0) {
                char *tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                sorted = 0;
            }
        }
    }
}
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

	lexicographic_sort(strj,str[j+1])
        /*        strcpy(a,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],a);*/



        }
        }
       

        for(i=0;i<num;i++)
        scanf("%s",str[i]);


                for (i = 0; i < num-1; i++)
      {
    // Last i elements are already in place  
    for (j = 0; j < num-i-1; j++)
        if (strcmp(str[j],str[j+1])==0)
        {
           // swap(&str[j], &str[j+1]);  

	lexicographic_sort(strj,str[j+1])
        /*        strcpy(a,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],a);*/



        }
        }
       




                for (i = 0; i < num-1; i++)
      {
    // Last i elements are already in place  
    for (j = 0; j < num-i-1; j++)
        if (strcmp(str[j],str[j+1])==0)
        {
           // swap(&str[j], &str[j+1]);  
	sort_by_length(str[j],str[j+1]);
 



        }
        }
       



                for (i = 0; i < num-1; i++)
      {
    // Last i elements are already in place  
    for (j = 0; j < num-i-1; j++)
        if (strcmp(str[j],str[j+1])==0)
        {
           // swap(&str[j], &str[j+1]);  

	sort_by_number_of_distinct_characters(str[j],str[j-1]);
      



        }
        }
       
}
