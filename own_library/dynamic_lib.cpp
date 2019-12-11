#include<iostream>
#include<dlfcn.h>
using namespace std;
int *dlsym(int * , char *);
int main()
{
	void *handler;
	int (*p)(int,int);
	int i=10,j=20,k,op;
	cout << "heloooooooo";	
//	printf("enter the option:\n");
//	scanf("%d",&op);
//	cin >> op;
	op=1;
	cout << "jwllllllllll";
	cout << "entered opt id "<< op;
	if(op==1)
	{
		handler=dlopen("./libmno.so",RTLD_LAZY);
	
		if(handler==0)
		{
		cout << dlerror();
	//	printf("%s",dlerror());
		return 0;
		}
	
		p=(int (*)(int,int))dlsym(handler,"sum");
		if(p==0)
		{
//		printf("%s",dlerror());
		
		return 0;
	
	
	
		}
	
	k=(*p)(i,j);
	cout << "k==== "<< k;
	cout << "\n";
	//printf("k=%d\n",k);
	dlclose(handler);
	}
	
//	k=(*p)(i,j);
//	printf("k==%d\n",k);
//	dlcloser(handler);
//	while(1);
}	
	










