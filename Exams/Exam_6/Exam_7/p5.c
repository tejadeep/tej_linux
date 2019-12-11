//#include <bits/stdc++.h>
//using namespace std;
#include<stdio.h>

int min(int a, int b)
{
	if(a>b)
	return a;
	else
	return b;
	
	
}
void swap(int xp, int yp)  
{  
    int temp = xp;  
   xp = yp;  
    yp = temp;  
}  
/*
void Sort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
} 
 */
int main()
{
	int i,n,m,j;
	scanf("%d %d",&n,&m);
//	cin>>n>>m;
	int a[n][m];
//	vector<long long> a[n+1];
	int g;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&g);
//			cin>>g;
			a[i][j]=g;
	//		a[i].push_back(g);
		}
		swap(a[i][j],a[i][m-j]);
//		sort(a[i].begin(),a[i].end());
	}
	long long ag = 0;
	long long temp[n+1];
	for(i=0;i<m;i++){
		temp[i] = a[0][i];
	}swap(temp,temp+m);
	for(i=1;i<n;i++){
	/*	for(j=0;j<m;j++){
			int id = upper_bound(temp,temp+n,a[i][j])-temp;
			//cout<<id<<"\n";
			if(id==n){
				
				ag = min(ag,abs(a[i][j] - temp[id-1]));
			}else{
				ag = min(ag,abs(a[i][j] - temp[id]));
				if(id != 0)
					ag = min(ag,abs(a[i][j] - temp[id-1]));
			}*/
		}
		for(int k=0;k<m;k++)
			temp[k] = a[i][k];
		sort(temp,temp+m);
	}
	printf("%d\n",ag);
//	cout<<ag;
	return 0;
}
