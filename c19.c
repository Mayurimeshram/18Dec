#include<stdio.h>
#include<string.h>
int main()
{
	char fname[10],lname[10],name[5];
	printf(" enter fisrt name");
	gets(fname);
	printf(" enter last name");
	gets(lname);
	
	strcpy(name,fname);
	//strcat(name," ");
	strcat(name,lname);
	printf("\nYour full name is %s",name);

}
