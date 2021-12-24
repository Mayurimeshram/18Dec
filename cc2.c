#include<stdio.h>
 int main()
 {
 	 float radius,area,circumference;
 	 radius=4.2;
 	 printf(" \n enter radius");
 	 scanf(" %f",&radius);
 	 area=2*3.14*radius;
 	 printf(" \n enter area");
 	 scanf("%f",&area);
 	 circumference=3.14*radius*radius;
 	 printf("\n enter circumference");
 	 scanf("%f",&circumference);
 	 printf(" \n radius%f\narea%f\ncircumferemnce%f",radius,area,circumference);
 }
