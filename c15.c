#include<stdio.h>
int main()
{
	int i,n=0,a=234,b=665;
	
	for(i=0;i<10;i++)
	{
		printf("enter a number");
		scanf("%d",&n);
		if(n>a)
		    a=n;
		    if(n<b)
		    b=n;
		    
	}
	 printf(" enter geatest no %d\n",a);
	 printf(" enter smallest no%d",b);
	 
}
