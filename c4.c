#include<stdio.h>
int main()
{
	int num,num1,rev=0,rem;
	printf(" enter 3 digit number");
	scanf("%d",&num);
	num1=num;
	 rem=num%10;
	rev=rev*10+rem;
	num=num/10;

  rem=num%10;
  rev=rev*10+rem;
  num=num/10;
  
  rem=num%10;
  rev=rev*10+rem;
  num=num/10;
  
  printf(" enter reverse number %d=%d",num1,rev);
}
