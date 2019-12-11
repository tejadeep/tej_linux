#include<stdio.h>
int main()
{
    int n,h;
    scanf("%d %d",&n,&h);
    long int wallpoint[n],length[n],max=0;
    long int ladder;
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&wallpoint[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&length[i]);
    }
    for(int i=0;i<n;i++)
    {
        double bolt=length[i]*25/100;
        double reach=wallpoint[i]-bolt;
        long int ladder=reach-h;
        if(ladder>max)
        {
            max=ladder;
        }
        
    }
    printf("%ld",max);

}
