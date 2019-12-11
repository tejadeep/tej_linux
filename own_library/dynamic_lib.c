#include<stdio.h>
#include<dlfcn.h>
int main()
{
	void *handler;
	int (*p)(int,int);
	int i=10,j=20,k,op;
	
	printf("enter the option:\n");
	scanf("%d",&op);
	
	if(op==1)
	{
		handler=dlopen("./libmno.so",RTLD_LAZY);
	
		if(handler==0)
		{
		printf("%s",dlerror());
		return 0;
		}
	
		p=dlsym(handler,"sum");
		if(p==0)
		{
		printf("%s",dlerror());
		return 0;
	
	
	
		}
	
	k=(*p)(i,j);
	printf("k=%d\n",k);
	dlclose(handler);
	}
	
//	k=(*p)(i,j);
//	printf("k==%d\n",k);
//	dlcloser(handler);
	while(1);
}	
	










