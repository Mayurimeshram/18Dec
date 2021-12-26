#include<stdio.h>
int main()
{
	int i,a[10],sum=0;
	for(i=0;i<2;i++)
	{
		printf("\nEnter any number");
		scanf("%d",&a[i]);
		sum=sum+a[i];

	} 
	printf("The array is");
	for(i=0;i<2;i++)
		printf("\n%d",a[i]);
		printf("\nThe sum of numbers=%d",sum);

}
