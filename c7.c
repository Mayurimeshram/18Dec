#include<stdio.h>
int main()
{
	float sp,cp;
	printf(" costprice and selling price");
	scanf("%f%f",&sp,&cp);
	if(sp>cp)
	
		printf(" enter profit%2f",sp-cp);
		
		else
		
		printf(" enter loss%2f",cp-sp);
	
}
