#include<stdio.h>
int main()
{
	int num,num1,rev=0,rem;
	 printf(" enter any number");
	 scanf(" %d",&num);
	 for(num1=num;num1>0;num1=num/10)
	 {
	 	rem=num%10;
		rev=rev*10+rem;
		
	}
		printf("\nReverse of %d= %d",num,rev);
	}
