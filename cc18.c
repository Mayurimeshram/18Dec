#include<stdio.h>
int main()
{
	int a[3],i,j,temp=0;
	
	for(i=0;i<3;i++)
	{
		printf("\nEnter a number");
		scanf("%d",&a[i]);
	 }
	for(i=0;i<3;i++)
	{
	     for(j=i+1;j<3;j++)
		if (a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	printf("\nThe increasing order is");
	for(i=0;i<3;i++)
	printf(" %d",a[i]);

}
