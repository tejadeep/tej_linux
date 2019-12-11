#include<iostream>
#include<dlfcn.h>
using namespace std;
int main()
{
	void *handler;
	int (*p)(int,int);
	int i=10,j=20,k,op;
	
//	printf("enter the option:\n");
//	scanf("%d",&op);
	cout << "enter option\n";
	cin >> op;
	if(op==1)
	{
		handler=dlopen("./libmno.so",RTLD_LAZY);
	
		if(handler==0)
		{
		cout << dlerror();
	//	printf("%s",dlerror());
		return 0;
		}
	
		p=dlsym(handler,"sum");
		if(p==0)
		{
//		printf("%s",dlerror());
		return 0;
	
	
	
		}
	
	k=(*p)(i,j);
	cout << "k===" << k;
	printf("k=%d\n",k);
	dlclose(handler);
	}
	
//	k=(*p)(i,j);
//	printf("k==%d\n",k);
//	dlcloser(handler);
	while(1);
}	
	










