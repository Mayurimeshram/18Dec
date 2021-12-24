#include<stdio.h>
 int main()
 {
 	 int m,f,total;
 	 float mp,fp;
 	 printf(" enter total number of male females");
 	 scanf("%d%d",&m,&f);
 	 
 	total=m+f;
      printf(" total males+ females= %d",total) ;
	  mp=m*100/total;
	  fp=f*100/total;
	  printf(" percentage of male=%2%f",mp);
	  printf(" percentage of females =%2%f",fp);	 
 }
