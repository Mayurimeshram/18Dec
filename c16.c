#include<stdio.h>
 int main()
{
	int i,j,sp=-1;
	
	for (i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("*");
		for(j=1;j<=sp;j++)
			printf("_");
		for(j=1;j<=i;j++)
		  if(j!=5)
		    printf("*");
	printf("\n");
	sp=sp+2;
	}
}
