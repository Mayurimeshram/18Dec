#include<stdio.h>
 int main()
{
	int a=33,b=44,c,x;
	printf(" \nA=%d \nB=%d",a,b);
	scanf("%d%d",&a,&b);
	x=a;//33
	c=b;//44
	c=a;//44
	x=b;//33
	
	
	printf(" A=%d \nB=%d",a,b);
}



