#include<stdio.h>
 int main()
{
char colour;

printf("\nEnter any color \n");

scanf("%c",&colour);
switch(colour)
{
case 'A':
printf("\nYou have selected blue");
break;
case 'B':
printf("\nyou have selected green");
break;
printf(" \n defined colours");
default:
printf("\nUndefined color");
}
}

